// Ejerciciosdepunteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

int main()
{

    float* puntero = nullptr;
    puntero = new float;
    *puntero = 7.77;

    float num = 6.66;
    puntero = &num;
    *puntero = 1984;

    float* puntero2 = puntero;

    cout << "Cuidado, acabas de causar un memory leak!" << endl;

    cout << "El memory leak se genera cuando ocupas memoria dinamica pero no la liberas" << endl;
    cout << "esto causa que el programa use memoria que ya no necesita" << endl;
    cout << "y para que esto no suceda se usa un delete para liberar la memoria que ya no se usa" << endl;


    delete puntero;
    puntero = nullptr;

    if (puntero == nullptr) {
        cout << "es igual a nullptr" << endl;
    }
    if (puntero == NULL) {
        cout << "es igual a null" << endl;
    }
    if (puntero2 != nullptr)
    {
        if (puntero2 != NULL)
        {
            cout << "no es null ni nullptr" << endl;
            cout << "ya se borro la memoria donde apunta" << endl;
        }
    }

    return 0;
}