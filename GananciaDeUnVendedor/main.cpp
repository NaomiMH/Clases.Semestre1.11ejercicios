/**
 *  Naomi Macias Honti a01282098
 *  30 de agosto 2016
 * 
 *  Pide informacion, lo vendido, la comision por venta y da la ganancia total.
 *  31 min.
 *  20 lineas con 12 de comentarios. 32 en total.
 *
 *  Casos de prueba
 *  Vendido: 18000  Comision: 20    Ganancia total: 3800
 *  Vendido: 800    Comision: 5     Ganancia total: 40
 *  Vendido: 30000  Comision: 10    Ganancia total: 3300
 *
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int Calbono (int icanti)
{
    int ibono;

    ibono=0;

    if (icanti>15000 && icanti<20000)
    {
        ibono=200;
    }
    else
        if (icanti>=2000)
        {
            ibono=300;
        }
    return ibono;
}

int Calcom (int icanti, int icom)
{
    int idin;

    idin = icanti*((icom*1.0)/100);

    return idin;
}

void Inicio ()
{
    cout << "\n\n*****************************" << endl;
    cout << "  Calcula valor de comision" << endl;
    cout << "*****************************" << endl;
}

int main()
{
    int ivendido, icomision, ibonof, iganf, icomf;

    Inicio();

    cout << "\nDe cuanto fue la venta?" << endl;
    cin >> ivendido;
    cout << "De cuanto es el porcentaje de la comision?" << endl;
    cin >> icomision;

    icomf = Calcom(ivendido,icomision);
    ibonof = Calbono(ivendido);
    iganf = icomf + ibonof;

    cout << "\nResultados" << endl;
    cout << " Bono      $" << ibonof << endl;
    cout << " Comision  $" << icomf << endl;
    cout << "___________________" << endl;
    cout << " Total     $" << iganf << endl << endl << endl;

    return 0;
}
