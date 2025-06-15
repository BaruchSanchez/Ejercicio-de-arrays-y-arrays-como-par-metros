// Tarea2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
using namespace std;
int myArray[10] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,9 }; //1.3) Hacer un array de 10 enteros, inicializado con los valores del 0 al 9.
bool ArrayBo[5]; //1) Hacer un array de 5 booleanos.

void FuncArrayBool(bool Array1[], int tamano); //Declaro la funcion
void FuncArrayBool(int Array1[], int tamano);

int numeros[] = { 1, 2, 3, 4, 5 }; //declaro las variables para hacer la prueba de imprimir las direcciones de memoria
int tamano = 5;



int main()
{

    FuncArrayBool(numeros, tamano);

    return 0;
}

//1.1) Hacer una función que reciba un array de booleanos como parámetro, y el tamaño del array como otro parámetro.
//1.2) En dicha función, los valores del array se modifican de manera que los índices pares sean false y los impares true.
void FuncArrayBool(bool Array1[], int tamano)
{
    for (int i = 0; i < tamano; i++) //recorre el array desde la primera posicion(con valor de 0) hasta la ultima (con valor de 9)
    {
        Array1[i] = (i % 2 != 0);
        //devuelve el residuo de dividir i entre 2, si el residuo es 0 es par, si el residuo es 1 es impar
    }
}

//1.4) Hacer una sobrecarga (es decir: mismo nombre, mismo tipo de retorno, 
//pero distintos parámetros) de la función del punto 1.1) pero que reciba un array de enteros en vez de booleanos. 

void FuncArrayBool(int Array1[], int tamano)
{
    int* PuntAux = Array1; //creamos el puntero que apunta al inicio de nuestro array

    for (int i = 0; i < tamano; i++)
    {
        *PuntAux = *PuntAux % 2; //aqui remplazamos el valor actual con el resultado de dicho valor %2

        //Mostramos en pantalla la direccion de memoria y el valor
        cout << "Direccion de memoria " << PuntAux << endl;
        cout << "Valor de memoria " << *PuntAux << endl;

        PuntAux++;//aqui le decimos al puntero que avance hasta la siguiente posicion del array
    }
}