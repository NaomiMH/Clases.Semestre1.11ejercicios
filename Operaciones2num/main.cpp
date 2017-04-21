/**
 * Naomi Macias Honti a01282098
 * 22 de agosto 2016
 * 46 lineas mas 11 de comentarios. 57 en total.
 * 32 min
 * Solicita nombre, pide tres numeros y los prueba en diferentes operaciones, mostrando tanto la operacion como el resultado.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    /* Declaracion de variables */
    int inumx, inumy, inumz;
    double dresa, dresb, dresc, dresd;
    string snombre;

    /* Nombre */
    cout << "Cual es su nombre?" <<endl;
    cin >> snombre;

    /* Tres numeros */
    cout << "\nPrimer numero: ";
    cin >> inumx;
    cout << "\nSegundo numero: ";
    cin >> inumy;
    cout << "\nTercer numero: ";
    cin >> inumz;

    /*Da resultados y los calcula antes de poner la respuesta */
    cout << "\n\n\nHola! " << snombre << ", los resultados son: " << endl;
    cout << "\n" << inumx << "/" << inumy << "=";

    dresa = inumx/inumy;
    cout << fixed << setprecision(2) << dresa << endl;

    cout << inumx << "\%" << inumy << "=";

    dresb = inumx%inumy;
    cout << fixed << setprecision(2) << dresb << endl;

    cout << inumx << "/" << inumy << "-" << inumz << "=";

    dresc = dresa-inumz;
    cout << fixed << setprecision(2) << dresc << endl;

    cout << inumx << "/(" << inumy << "-" << inumz << ")=";

    dresd = inumx/(inumy-inumz);
    cout << dresd << endl;

    return 0;
}
