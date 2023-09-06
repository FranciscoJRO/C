#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "Funciones.h"




// Variables globales
float media = 0;
float mediana = 0;
float moda = 0;
float varianza = 0;
float desviacion = 0;
float primerCuartil = 0;
float tercerCuartil = 0;
float rangoIntercuartilico = 0;
float rango = 0;


int main() {
    int opcionNumerica;
    char opcion[20];
    int n = 100; // Tamaño inicial del arreglo
    float *arreglo = (float *)malloc(n * sizeof(float)); // Asignar memoria inicial
    
    printf("-----------------CALCULADORA DE MEDIDAS Y TENDENCIA CENTRAL Y DE DISPERSION--------------------\n");
    printf("INSTRUCCIONES:  Cuando aparezca '>', puedes teclear cualquiera de los siguientes comandos que se muestran en la siguiente tabla\n");
    printf("|   COMANDO  |     FUNCION                                                              |\n");
    printf("|  -------------------------------------------------------------------------------------|\n");       
    printf("|   Ayuda    |     Imprime nuevamente la tabla de ayuda                                 |\n");
    printf("|   Salir    |     Salir del programa.                                                  |\n");
    printf("|     n      |     Cambia la cantidad de datos (100 por defecto)                        |\n");
    printf("|   Datos    |     Cambia todos los datos con los que uted desea trabajar               |\n");
    printf("|   Cambiar  |     Cambia un dato de la posicion especificada                           |\n");
    printf("|   Imprimir |     Imprimir los datos ordenados con los que se trabaja actualmente      |\n");
    printf("|   Media    |     Calcula la media aritmetica del conjunto de datos                    |\n");
    printf("|   Mediana  |     Calcula la mediana aritmetica del conjunto de datos                  |\n");
    printf("|   Moda     |     Calcula la moda del conjunto de datos.                               |\n");
    printf("|   Varianza |     Calcula la varianza del conjunto de datos.                           |\n");
    printf("|   Desvest  |     Calcula la desviacion estandar del conjunto de datos.                |\n");
    printf("|  Cuartil_1 |     Calcula el primer cuartil del conjunto de datos.                     |\n");
    printf("|  Cuartil_3 |     Calcula el tercer cuartil del conjunto de datos.                     |\n");
    printf("|   Ric      |     Calcula el rango intercuartilico del conjunto de datos.              |\n");
    printf("|   Rango    |     Calcula el rango del conjunto de datos.                              |\n");
    printf("|   Todos    |     Calcula todas las medidas del conjunto de datos.                     |\n");
    printf(">");
    
    do {
         scanf("%s", opcion);

     if (strcmp(opcion, "Ayuda") == 0) {
            opcionNumerica = 1;
        } else if (strcmp(opcion, "Salir") == 0) {
            opcionNumerica = 2;
        } else if (strcmp(opcion, "n") == 0) {
            opcionNumerica = 3;
        } else if (strcmp(opcion, "Datos") == 0) {
            opcionNumerica = 4;
        } else if (strcmp(opcion, "Cambiar") == 0) {
            opcionNumerica = 5;
        } else if (strcmp(opcion, "Imprimir") == 0) {
            opcionNumerica = 6;
        } else if (strcmp(opcion, "Media") == 0) {
            opcionNumerica = 7;
        } else if (strcmp(opcion, "Mediana") == 0) {
            opcionNumerica = 8;
        } else if (strcmp(opcion, "Moda") == 0) {
            opcionNumerica = 9;
        } else if (strcmp(opcion, "Varianza") == 0) {
            opcionNumerica = 10;
        } else if (strcmp(opcion, "Desvest") == 0) {
            opcionNumerica = 11;
        } else if (strcmp(opcion, "Cuartil_1") == 0) {
            opcionNumerica = 12;
        } else if (strcmp(opcion, "Cuartil_3") == 0) {
            opcionNumerica = 13;
        } else if (strcmp(opcion, "Ric") == 0) {
            opcionNumerica = 14;
        } else if (strcmp(opcion, "Rango") == 0) {
            opcionNumerica = 15;
        } else if (strcmp(opcion, "Todos") == 0) {
            opcionNumerica = 16; //  16 para reflejar el caso Todos
        } else {
            opcionNumerica = 1;
        }

        switch (opcionNumerica) {  // Comparamos el primer carácter de la cadena
            case 1:
                printf("***********************SELECCIONASTE RE IMPRIMIR LA TABLA********************.\n");
                printf("-----------------CALCULADORA DE MEDIDAS Y TENDENCIA CENTRAL Y DE DISPERSION--------------------\n");
                printf("INSTRUCCIONES:  Cuando aparezca '>', puedes teclear cualquiera de los siguientes comandos que se muestran en la siguiente tabla\n");
                printf("|   COMANDO  |     FUNCION                                                              |\n");
                printf("|---------------------------------------------------------------------------------------|\n");                                      
                printf("|   Ayuda    |     Imprime nuevamente la tabla de ayuda                                 |\n");
                printf("|   Salir    |     Salir del programa.                                                  |\n");
                printf("|     n      |     Cambia la cantidad de datos (100 por defecto)                        |\n");
                printf("|   Datos    |     Cambia todos los datos con los que uted desea trabajar               |\n");
                printf("|   Cambiar  |     Cambia un dato de la posicion especificada                           |\n");
                printf("|   Imprimir |     Imprimir los datos ordenados con los que se trabaja actualmente      |\n");
                printf("|   Media    |     Calcula la media aritmetica del conjunto de datos                    |\n");
                printf("|   Mediana  |     Calcula la mediana aritmetica del conjunto de datos                  |\n");
                printf("|   Moda     |     Calcula la moda del conjunto de datos.                               |\n");
                printf("|   Varianza |     Calcula la varianza del conjunto de datos.                           |\n");
                printf("|   Desvest  |     Calcula la desviacion estandar del conjunto de datos.                |\n");
                printf("|  Cuartil_1 |     Calcula el primer cuartil del conjunto de datos.                     |\n");
                printf("|  Cuartil_3 |     Calcula el tercer cuartil del conjunto de datos.                     |\n");
                printf("|   Ric      |     Calcula el rango intercuartilico del conjunto de datos.              |\n");
                printf("|   Rango    |     Calcula el rango del conjunto de datos.                              |\n");
                printf("|   Todos    |     Calcula todas las medidas del conjunto de datos.                     |\n");
                printf(">");
                break;
            case 2:
                printf("SELECCIONASTE SALIR DEL PROGRAMA.\n");
                break;
            case 3:
                  printf("SELECCIONASTE CAMBIAR LA CANTIDAD DE DATOS CON LOS QUE VAS A TRABAJAR.\n");
                while (1) {
                    printf("Ingrese la cantidad de elementos en el arreglo (pueden ser desde 1 hasta 100 elementos): ");
                    scanf("%d", &n);

                    if (n >= 1 && n < 101) {
                        break;  // Si n está en el rango válido, sal del bucle.
                    } else {
                        printf("Cantidad de datos fuera de rango. Por favor, ingrese un valor entre 1 y 100.\n");
                    }
                }

                float *arreglo;
                arreglo = (float *)malloc(n * sizeof(float));

                for (int i = 0; i < n; i++) {
                    printf("Ingrese el valor para el elemento [%d]: ", i + 1);
                    scanf("%f", &arreglo[i]);
                }
                printf(">");
            break; 

            case 4:
                printf("SELECCIONASTE CAMBIAR TODOS LOS DATOS CON LOS QUE VAS A TRABAJAR.\n");
                for (int i = 0; i < n; i++) {
                    printf("Ingrese el valor para el elemento [%d]: ", i + 1);
                    scanf("%f", &arreglo[i]);
                }
                printf(">");
            break;
            case 5:
                printf("SELECCIONASTE CAMBIAR UN DATO CON EL QUE VAS A TRABAJAR.\n");
                int posicion;
                printf("Ingrese la posición del dato a cambiar (1 - %d): ", n);
                scanf("%d", &posicion);
                if (posicion >= 1 && posicion <= n) {
                    printf("Ingrese el nuevo valor para el elemento [%d]: ", posicion);
                    scanf("%f", &arreglo[posicion - 1]);
                } else {
                    printf("Posición fuera del rango válido.\n");
                }
                printf(">");
            break;
            case 6:
                printf("SELECCIONASTE IMPRIMIR LOS DATOS ORDENADOS CON LOS QUE SE TRABAJA ACTUALMENTE.\n");
                printf("Datos ordenados:\n");
                for (int i = 0; i < n; i++) {
                    printf("Dato [%d]: %.2f\n", i + 1, arreglo[i]);
                }
                printf(">");
            break;
            case 7:
                // (calcular media)
                media = calcularMedia(arreglo, n);
                printf("La media aritmética es: %.2f\n", media);
                printf(">");
                break;
            case 8:
                //  (calcular mediana)
                mediana = calcularMediana(arreglo, n);
                printf("La mediana aritmetica es: %.2f\n", mediana);
                printf(">");
                break;
            case 9:
                // (calcular moda)
                moda = calcularModa(arreglo, n);
                printf("La moda es: %.2f\n", moda);
                printf(">");
                break;
            case 10:
                //  (calcular varianza)
                varianza = calcularVarianza(arreglo, n, media);
                printf("La varianza es: %.2f\n", varianza);
                printf(">");
                break;
            case 11:
                // (calcular desviación estándar)
                desviacion = calcularDesviacionEstandar(arreglo, n, media);
                printf("La desviación estándar es: %.2f\n", desviacion);
                printf(">");
                break;
            case 12:
                // (calcular primer cuartil)
                primerCuartil = calcularPrimerCuartil(arreglo, n);
                printf("El primer cuartil es: %.2f\n", primerCuartil);
                printf(">");
                break;
            case 13:
                //  (calcular tercer cuartil)
                tercerCuartil = calcularTercerCuartil(arreglo, n);
                printf("El tercer cuartil es: %.2f\n", tercerCuartil);
                printf(">");
                break;
            case 14:
                //  (calcular rango intercuartílico)
                rangoIntercuartilico = calcularRangoIntercuartilico(arreglo, n);
                printf("El rango intercuartílico es: %.2f\n", rangoIntercuartilico);
                printf(">");
                break;
            case 15:
                //  (calcular rango)
                rango = calcularRango(arreglo, n);
                printf("El rango es: %.2f\n", rango);
                printf(">");
                break;
            case 16:
                printf("CALCULA TODSAS LAS MEDIDAS DEL CONJUNTO DE DATOS\n");
                    float media = calcularMedia(arreglo, n);
                    printf("La media aritmetica es: %.2f\n", media);
                    float mediana = calcularMediana(arreglo, n);
                    printf("La mediana aritmetica es: %.2f\n", mediana);
                    float moda = calcularModa(arreglo, n);
                    printf("La moda es: %.2f\n", moda);
                    media = calcularMedia(arreglo, n);
                    float varianza = calcularVarianza(arreglo, n, media);
                    printf("La varianza es: %.2f\n", varianza);
                     media = calcularMedia(arreglo, n);
                    float desviacion = calcularDesviacionEstandar(arreglo, n, media);
                    printf("La desviación estándar es: %.2f\n", desviacion);
                    float primerCuartil = calcularPrimerCuartil(arreglo, n);
                    printf("El primer cuartil es: %.2f\n", primerCuartil);
                    float tercerCuartil = calcularTercerCuartil(arreglo, n);
                    printf("El tercer cuartil es: %.2f\n", tercerCuartil);
                    float rangoIntercuartilico = calcularRangoIntercuartilico(arreglo, n);
                    printf("El rango intercuartílico es: %.2f\n", rangoIntercuartilico);
                    float rango = calcularRango(arreglo, n);
                    printf("El rango es: %.2f\n", rango);
                    printf(">");
                break;
                    default:
                        printf("Opción no válida. Por favor elije una opción válida.\n");
                        printf(">");
                        break;
                
   }
    } while (opcionNumerica != 2);

    free(arreglo);
    return 0;
}





// Implementación de la función para calcular la media
float calcularMedia(float arreglo[], int n) {
                    float suma = 0;
                    for (int i = 0; i < n; i++) {
                        suma += arreglo[i];
                    }
                    return suma / n;
                }

// Implementación de la función para calcular la desviación estándar
float calcularDesviacionEstandar(float arreglo[], int n, float media) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pow(arreglo[i] - media, 2);
    }
    return sqrt(suma / n);
}

// Implementación de la función para calcular la mediana
float calcularMediana(float arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                float temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 0) {
        int indice1 = n / 2 - 1;
        int indice2 = n / 2;
        return (arreglo[indice1] + arreglo[indice2]) / 2.0;
    } else {
        int indice = n / 2;
        return arreglo[indice];
    }
}

typedef struct {
    float valor;
    int frecuencia;
} ModaInfo;


// Implementación de la función para calcular la moda o multiples modas 
float calcularModa(float arreglo[], int n) {
    ModaInfo modas[n];
    int numModas = 0;

    for (int i = 0; i < n; i++) {
        int existe = 0;
        for (int j = 0; j < numModas; j++) {
            if (modas[j].valor == arreglo[i]) {
                modas[j].frecuencia++;
                existe = 1;
                break;
            }
        }

        if (!existe) {
            modas[numModas].valor = arreglo[i];
            modas[numModas].frecuencia = 1;
            numModas++;
        }
    }

    int frecuenciaMaxima = 0;
    float moda = modas[0].valor;

    for (int i = 0; i < numModas; i++) {
        if (modas[i].frecuencia > frecuenciaMaxima) {
            frecuenciaMaxima = modas[i].frecuencia;
            moda = modas[i].valor;
        }
    }

    return moda;
}

// Implementación de la función para calcular la varianza
float calcularVarianza(float arreglo[], int n, float media) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pow(arreglo[i] - media, 2);
    }
    return suma / (n - 1); 
}

// Función de comparación para qsort
int comparar(const void *a, const void *b) {
    float *valorA = (float *)a;
    float *valorB = (float *)b;
    if (*valorA < *valorB) return -1;
    if (*valorA > *valorB) return 1;
    return 0;
}

// Implementación de la función para calcular el primer cuartil
float calcularPrimerCuartil(float arreglo[], int n) {
    // Ordenar el arreglo en orden ascendente
    qsort(arreglo, n, sizeof(float), comparar);

    // Calcular el índice para el primer cuartil
    int indice = n / 4;

    // Manejar el caso de tener un índice impar para el primer cuartil
    if (n % 4 != 0) {
        float valor1 = arreglo[indice];
        float valor2 = arreglo[indice - 1];
        return (valor1 + valor2) / 2.0;
    } else {
        return arreglo[indice];
    }
}

// Implementación de la función para calcular el tercer cuartil
float calcularTercerCuartil(float arreglo[], int n) {
    // Ordenar el arreglo en orden ascendente
    qsort(arreglo, n, sizeof(float), comparar);

    // Calcular el índice para el tercer cuartil
    int indice = 3 * n / 4;

    // Manejar el caso de tener un índice impar para el tercer cuartil
    if (n % 4 != 0) {
        float valor1 = arreglo[indice];
        float valor2 = arreglo[indice + 1];
        return (valor1 + valor2) / 2.0;
    } else {
        return arreglo[indice];
    }
}

// Implementación de la función para calcular el rango intercuartílico
float calcularRangoIntercuartilico(float arreglo[], int n) {
    float primerCuartil = calcularPrimerCuartil(arreglo, n);
    float tercerCuartil = calcularTercerCuartil(arreglo, n);
    return tercerCuartil - primerCuartil;
}

// Implementación de la función para calcular el rango
float calcularRango(float arreglo[], int n) {
    float max = arreglo[0];
    float min = arreglo[0];
    for (int i = 1; i < n; i++) {
        if (arreglo[i] > max) {
            max = arreglo[i];
        }
        if (arreglo[i] < min) {
            min = arreglo[i];
        }
    }
    return max - min;
}
