#include <stdio.h>

int main(){

    //printf("Hola mundo");

    int numero=2;
    int *puntero=&numero;

    printf("Contenido del puntero:%d\n" , *puntero);
    printf("Direccion de memoria almacenada por el puntero:%d\n" ,puntero);
    printf("Direccion de memoria de la variable:%d\n" , &numero);
    printf("Direccion de memoria del puntero:%d\n" , &puntero);
    printf("Size of numero es: %lu\n", sizeof(numero));


    return 0;
}