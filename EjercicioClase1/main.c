#include <stdio.h>
#include <stdlib.h>

void saludar(void);
int damenum(void);
float sacarpromedio (int, int);
void tomardato(int numero);

int main()
{
    system("color 1f");
    int edad;
    float altura;
    altura = 82.5;
    edad = 22;

    int limite;

    saludar();

    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese su altura: ");
    scanf("%f", &altura);
    printf("Juan Pablo \tLamas\n");
    printf("Edad: %d \tAltura: %f\n", edad, altura);

    system("pause");
    system("cls");

    int suma;
    suma =0;
    int contador;
    contador = 0;
    int numero;
    float promedio;
    promedio = 0;

    limite = damenum();

    while(contador <limite)
        {
            printf("\nIngrese un numero: ");
            scanf("%d",&numero);
            suma = suma + numero;
            contador++;
        }
    promedio = sacarpromedio(suma, contador);

    printf("promedio: %f",promedio);

    return 0;
}

void saludar(void)
{
    printf("Hola mundo C\n");
}

int damenum(void)
{
    printf("Ingrese la cantidad de iteraciones: ");
    int a;
    scanf("%d", &a);
    return a;
}

float sacarpromedio (int suma, int cant)
{
    float promedio;
    promedio = (float)suma/cant;
    return promedio;
}
