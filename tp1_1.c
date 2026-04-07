#include <stdio.h>

int main(){
    int num =5 ;
    int *puntero;
    puntero = &num;
    printf("1) Contenido del puntero (valor de la variable): %d\n", *puntero);
    printf("2) Direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("3) Direccion de memoria de la variable: %p\n", &num);
    printf("4) Direccion de memoria del puntero: %p\n", &puntero);
    printf("5) Tamanio de memoria de la variable: %zu bytes\n", sizeof(num));

    return 0;
}