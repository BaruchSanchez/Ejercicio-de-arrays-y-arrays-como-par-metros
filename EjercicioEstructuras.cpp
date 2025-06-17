// EjercicioEsctructuras.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
using namespace std;

struct rect
{
    int coordx;
    int coordy;
    int alto;
    int ancho;

    rect()
    {
        coordx = 0;
        coordy = 0;
        alto = 0;
        ancho = 0;
    }

    rect(int a, int b, int c, int d)
    {
        coordx = a;
        coordy = b;
        alto = c;
        ancho = d;
    }

    rect(int c, int d)
    {
        coordx = 0;
        coordy = 0;
        alto = c;
        ancho = d;
    }
};

bool MostrarRect(rect& r, int& xfin, int& yfin);
bool CheckOverlap(rect r2, rect r3);

int xfin, yfin;

int main()
{
    rect r1(4, 6, 9, 3);
    //Pruebas funcion CheckOverap
    rect a(0, 0, 5, 5);
    rect b(6, 6, 5, 5);
    rect c(2, 2, 2, 2);
    rect d(1, 1, 7, 2);

    bool cierto = MostrarRect(r1, xfin, yfin);

    if (cierto)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    cout << "a se traslapa con b ";
    if (CheckOverlap(a, b))
    {
        cout << "si" << endl;
    }
    else { cout << "no" << endl; }

    cout << "a se traslapa con c ";
    if (CheckOverlap(a, c))
    {
        cout << "si" << endl;
    }
    else { cout << "no" << endl; }

    cout << "a se traslapa con d";
    if (CheckOverlap(a, d))
    {
        cout << "si" << endl;
    }
    else { cout << "no" << endl; }


    return 0;
}

bool MostrarRect(rect& r, int& xfin, int& yfin)
{
    //Modificacion(Se cambio la condicion)
    if (r.coordx < 0 || r.coordy < 0 || r.alto < 0 || r.ancho < 0) // <-- cambio aquí
        return false;


    xfin = r.coordx + r.ancho;
    yfin = r.coordy + r.alto;

    cout << "Las coordenadas empiezan en " << r.coordx << "," << r.coordy << endl;
    cout << "Las coordenadas terminan en " << xfin << "," << yfin << endl;
    return true;
}


bool CheckOverlap(rect r2, rect r3)
{
    if (r2.coordx + r2.ancho <= r3.coordx)
    {
        return false;
    }

    //Modificacion(Se cambio la condicion)
    if (r2.coordx + r2.ancho <= r3.coordx ||
        r3.coordx + r3.ancho <= r2.coordx ||
        r2.coordy + r2.alto <= r3.coordy ||
        r3.coordy + r3.alto <= r2.coordy)
    {
        return false;
    }
    return true;
}



