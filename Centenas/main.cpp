/**
 * Naomi Macias Honti a01282098
 * 22 de agosto
 * 19 lineas mas 10 de comentarios. 29 en total.
 * 15 min.
 * Pide un numero y muestra el digito de las centenas.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    /* Declara variables */
    int icantidad, ires;

    /* Pide numero */
    cout << "Numero original = ";
    cin >> icantidad;

    /* Calcula y muestra la centena */
    ires = ((icantidad/10)/10)%10;
    cout << "Digito de las centenas = " << ires << "." << endl;

    return 0;
}
