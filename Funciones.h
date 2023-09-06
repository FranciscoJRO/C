#ifndef Funciones_h
#define Funciones_h

// Declaración de funciones
float calcularMedia(float arreglo[], int n);
float calcularDesviacionEstandar(float arreglo[], int n, float media);
float calcularMediana(float arreglo[], int n);
float calcularModa(float arreglo[], int n);
float calcularVarianza(float arreglo[], int n, float media);
float calcularPrimerCuartil(float arreglo[], int n);
float calcularTercerCuartil(float arreglo[], int n);
float calcularRangoIntercuartilico(float arreglo[], int n);
float calcularRango(float arreglo[], int n);
int comparar(const void *a, const void *b);

#endif 