#include "Funciones.h"
#include <math.h>

// Implementación de la función para calcular la media
double calcularMedia(int arreglo[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    return (double)suma / n;
}

// Implementación de la función para calcular la mediana
double calcularMediana(int arreglo[], int n) {
    // Código para calcular la mediana
}

// Implementación de la función para calcular la desviación estándar
double calcularDesviacionEstandar(int arreglo[], int n, double media) {
    // Código para calcular la desviación estándar
}
