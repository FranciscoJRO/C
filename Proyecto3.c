#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "nodo.h"




// Función para comparar dos nodos para ordenar el arreglo
int comparar(const void *a, const void *b) {
    return ((struct Nodo *)b)->frecuencia - ((struct Nodo *)a)->frecuencia;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s hola.txt adios.txt\n", argv[0]);
        return 1;
    }

    // Abre el archivo de entrada
    FILE *archivo_entrada = fopen(argv[1], "r");
    if (archivo_entrada == NULL) {
        perror("Error al abrir el archivo de entrada");
        return 1;
    }

    // Abre el archivo de salida
    FILE *archivo_salida = fopen(argv[2], "w");
    if (archivo_salida == NULL) {
        perror("Error al abrir el archivo de salida");
        fclose(archivo_entrada);
        return 1;
    }

    // Arreglo dinámico de estructuras tipo Nodo
    struct Nodo *palabras = NULL;
    int num_palabras = 0;
    int capacidad = 10;

    // Buffer para leer palabras del archivo
    char buffer[100];

    while (fscanf(archivo_entrada, "%s", buffer) == 1) {
        // Convierte la palabra a minúsculas
        for (int i = 0; buffer[i]; i++) {
            buffer[i] = tolower(buffer[i]);
        }

        // Remueve puntos y comas de la palabra
        int len = strlen(buffer);
        if (len > 0 && (buffer[len - 1] == ',' || buffer[len - 1] == '.')) {
            buffer[len - 1] = '\0';
        }

        // Convierte la palabra a singular
        if (len > 0 && buffer[len - 1] == 's') {
            buffer[len - 1] = '\0';
        }

        // Busca si la palabra ya existe en el arreglo de palabras
        int encontrado = 0;
        for (int i = 0; i < num_palabras; i++) {
            if (strcmp(palabras[i].palabra, buffer) == 0) {
                palabras[i].frecuencia++;
                encontrado = 1;
                break;
            }
        }

        // Si la palabra no se encontró, se agrega al arreglo
        if (!encontrado) {
            if (num_palabras == capacidad) {
                capacidad *= 2;
                palabras = (struct Nodo *)realloc(palabras, capacidad * sizeof(struct Nodo));
                if (palabras == NULL) {
                    perror("Error al reallocar memoria");
                    fclose(archivo_entrada);
                    fclose(archivo_salida);
                    return 1;
                }
            }
            strcpy(palabras[num_palabras].palabra, buffer);
            palabras[num_palabras].frecuencia = 1;
            num_palabras++;
        }
    }

    // Ordena las palabras por frecuencia (de mayor a menor)
    qsort(palabras, num_palabras, sizeof(struct Nodo), comparar);

    // Escribe las palabras y sus frecuencias en el archivo de salida
    for (int i = 0; i < num_palabras; i++) {
        fprintf(archivo_salida, "%s: %d\n", palabras[i].palabra, palabras[i].frecuencia);
    }

    // Libera la memoria y cierra los archivos
    free(palabras);
    fclose(archivo_entrada);
    fclose(archivo_salida);

    return 0;
}
