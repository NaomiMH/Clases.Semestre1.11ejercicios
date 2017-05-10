/**
 *  Naomi Macias Honti a01282098
 *  Ejercicio 3
 *  19 de agosto 2016
 *  7 min.
 *  37 lineas con 15 de comentarios. 20 en total.
 *  Pregunta cuanto se pago, cuantos kilos eran y dice cuanto es por kilo.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    /* Declaracion de variables */
    int ikilos, iprecio;
    double dres;

    /* Pregunta valores de las variables */
    cout << "Cual es el precio total?" << endl;
    cin >> iprecio;
    cout << "\nCuantos Kilos?" << endl;
    cin >> ikilos;

    /* Calculo */
    dres = iprecio / ikilos;

    /* Dice respuesta */
    cout << "\nEl precio por kilo es: $";
    cout << fixed << setprecision(2) << dres << endl;

    return 0;
}
