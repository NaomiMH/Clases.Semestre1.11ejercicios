/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 40 lineas mas 7 de comentarios. 47 en total.
 * Tiempo no estimado.
 * Pregunta por peso max y min posible para el nino, pregunta peso actual y aconseja que hacer.
 */
 #include<iostream>
 #include<cmath>
 #include<iomanip>

using namespace std;

int ipesoact, ipesomax, ipesomin;

void RangoPeso()
{
    cout << "\nRango de peso de acuerdo a la edad del nino." << endl;
    cout << ">Minimo (kg): ";
    cin >> ipesomin;
    cout << "\n>Maximo (kg): ";
    cin >> ipesomax;
}

void CalcularResultado()
{
    cout << "El peso actual es " << ipesoact << "kg. ";
    if (ipesoact>ipesomin && ipesoact<ipesomax)
        cout << "El nino esta dentro del peso recomendado." << endl << "Muy bien !" << endl;
    else if (ipesoact<ipesomin)
        cout << "El nino esta abajo del peso recomendado." << endl << "Por favor visitar al doctor." << endl;
    else
        cout << "El nino esta arriba del peso recomendado." << endl << "No le des comida chatarra y procura que coma frutas y verduras.";
}

int main()
{
    RangoPeso();

    cout << "\n>Dime el peso actual del nino: ";
    cin >> ipesoact;

    CalcularResultado();

    return 0;
}
