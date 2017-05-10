/**
 * Naomi Macias Honti a01282098
 * 22 de agosto
 * 41 lineas mas 10 de comentarios. 51 en total.
 * 23 min.
 * Solicita una cantidad de cheque a cambiar y muestra la cantidad de billetes y pesos que seran entregados.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    /* Declara variables */
    int idinero, i200, i100, i50, i20, i10, ipesos;

    /* Pide cantidad */
    cout << "Por favor dime la cantidad del cheque a cambiar: ";
    cin >> idinero;

    cout << "\nTe dare:" << endl;

    /* Calcula la cantidad que cabe, la da a conocer y se la resta a la cantidad total */
    i200 = float(idinero/200);
    cout << i200 << " billetes de 200," << endl;
    idinero -= i200*200;

    i100 = float(idinero/100);
    cout << i100 << " billetes de 100," << endl;
    idinero -= i100*100;

    i50 = float(idinero/50);
    cout << i50 << " billetes de 50," << endl;
    idinero -= i50*50;

    i20 = float(idinero/20);
    cout << i20 << " billetes de 20," << endl;
    idinero -= i20*20;

    i10 = float(idinero/10);
    cout << i10 << " billetes de 10," << endl;
    idinero -= i10*10;

    ipesos = float(idinero);
    cout << "Y " << ipesos << " pesos.\n";

    return 0;
}
