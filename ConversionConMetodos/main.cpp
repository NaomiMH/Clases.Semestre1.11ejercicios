/**
 *  Naomi Macias Honti a01282098
 *  Conversiones con Funciones
 *  27 de agosto 2016
 *  Tiempo no estimado.
 *  108 lineas con 9 de comentarios. 117 en total.
 *  Te da varias opciones de lo que puedes hacer, utiliza un metodo para llevar el proceso, regresa el resultado y lo muestra.
 *  Nota: he puesto un do para repetir todo hasta que se pida salir. Lo cual no he visto
 *  que mostraran en clase. Puntos extra?? Vale la pena intentar.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int iop;

int iminahor(int iminutos)
{
    int ihoras;
    ihoras = (iminutos/60);
    return (ihoras);
}

int ipiesamet(int ipi)
{
    double dmetros;
    dmetros = ipi*0.3048;
    return dmetros;
}

int iFaC (int ifahrenheit)
{
    int icelsius;
    icelsius = (ifahrenheit - 32) * (5/9);
    return icelsius;
}

int iCaF (int icelsius)
{
    int ifahrenheit;
    ifahrenheit = (9/5) * icelsius +32;
    return ifahrenheit;
}

void menu()
{
    cout << "1 De minutos a horas" << endl;
    cout << "2 De pies a metros" << endl;
    cout << "3 De grados Fahrenheit a grados Celsius" << endl;
    cout << "4 De grados Celsius a grados Fahrenheit" << endl;
    cout << "5 Salir" << endl;
}

int main()
{

    do
    {

        int imin, ihor, ipies, imet, ifa, ice;

        cout << "\n\nOpciones: " << endl;
        menu();
        cout << "\nOpcion elegida: ";
        cin >> iop;

        if (iop == 1)
        {
            cout << "\nMinutos a cambiar: ";
            cin >> imin;

            ihor = iminahor(imin);

            cout << imin << " minutos equivalen a " << ihor << " horas." << endl;
        }

        if (iop == 2)
        {
            cout << "\nPies a combiar: ";
            cin >> ipies;

            imet = ipiesamet(ipies);

            cout << ipies << " pies equivalen a " << imet << " metros." << endl;
        }

        if (iop == 3)
        {
            cout << "\nFahrenheit a cambiar: ";
            cin >> ifa;

            ice = iFaC(ifa);

            cout << ifa << " F equivalen a " << ice << " C." << endl;
        }

        if (iop == 4)
        {
            cout << "\nCelsius a cambiar: ";
            cin >> ice;

            ifa = iCaF(ice);

            cout << ice << " C equivalen a " << ifa << " F." << endl;
        }

        if (iop == 5)
        {
            cout << "\n\nHasta luego, usuario." << endl << endl;
        }

    }
    while (iop != 5);

    return 0;
}
