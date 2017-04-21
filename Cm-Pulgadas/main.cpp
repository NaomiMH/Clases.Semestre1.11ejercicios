/**
 *  Naomi Macias Honti a01282098
 *  19 de agosto 2016
 *  51 min.
 *  24 lineas con 13 de comentarios. 37 en total.
 *  Calcula los metros a pulgadas.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    /* Declaracion de variables */
    int imetros;
    double dpul, dcm, dpi;
    const double cdcm = 100, cdpul = 2.54, cdpi = 12;

    /* Pregunta variables */
    cout << "Cual es la medida en metros?" << endl;
    cin >> imetros;

    /* Calcula a centimetros */
    dcm = imetros * cdcm;
    /* Calcula a pulgadas */
    dpul = dcm / cdpul;
    /* Calcula a pies */
    dpi = dpul / cdpi;

    /* Da resultado */
    cout << "\nEn pies es: ";
    cout << fixed << setprecision(2) << dpi << endl;

    return 0;
}
