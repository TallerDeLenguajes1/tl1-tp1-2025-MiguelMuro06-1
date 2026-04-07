#include <stdio.h>

// a) Función que devuelve el cuadrado
int cuadrado_num ( int n){
    int resultado = n*n;             // no se puede usar n^2 ya que esto en c no devuelve el exponente sino otra cosa aca se usa el mismo numero 2 veces
    return resultado;
}

// b) Función void que imprime el cuadrado
void cuadrado_num1( int n){
    int resultado = n *n;
    printf("El cuadrado es: %d\n", resultado);
}
 
// c) Dirección y contenido
void direccion_contenido(int n){
    printf("La direccion de memoria de la variable %d es : %p", n , &n);
    printf("\n El contenido de la variable es: %d \n",n);
} 

// d) Invertir valores permanentemente
void Invertir(int *a,int *b){
    int x;
    x = *a;
    *a = *b;
    *b = x;

}

// e) Ordenar: a menor, b mayor
void orden(int *a,int *b){
    if ( *a > *b)
    {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main (){

    int num1, num2;

    // f) Leer pares de valores
    printf("--- Punto F: Procesando pares de valores ---\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("\nValores originales: num1 = %d, num2 = %d\n", num1, num2);
    printf("------------------------------------------\n");

    // Probando funciones con num1
    printf(" Cuadrado de %d : %d\n", num1, cuadrado_num(num1));
    cuadrado_num1(num1);
    direccion_contenido(num1);

    printf("------------------------------------------\n");

    // Probando Invertir
    Invertir(&num1, &num2); // Mandamos la direccion con &
    printf(" Valores invertidos: num1 = %d, num2 = %d\n", num1, num2);

    // Probando Ordenar
    orden(&num1, &num2);
    printf(" Valores ordenados (menor a mayor): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
