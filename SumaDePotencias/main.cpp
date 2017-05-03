/**
 * Naomi Macias Honti a01282098
 * 4 de ocutubre 2016
 * 40 lineas mas 10 de comentarios. 92 en total.
 * Tiempo no estimado.
 * Suma el diferente resultado desde 2^0 hasta 2^n.
 */
#include <iostream>
#include <cmath>

using namespace std;

double CalculaPotencia(int iN)
{
    double dR=1;
    int icontador;
    for(icontador=1;icontador<=iN;icontador++)
    {
        dR=dR+pow(2,icontador);
    }
    return dR;
}

void MostrarAsteriscos(int iN)
{
    int icontador=1;

    cout << endl;
    cout << endl;
    while(icontador<=iN)
    {
        cout << "*";
        icontador++;
    }
    cout << endl;
}

bool NumeroPerfecto(int iN)
{
    bool bR;
    int icontador;
    int iR=0;

    for (icontador=iN-1;icontador!=0;icontador--)
    {
        if (iN%icontador==0)
            iR=iR+icontador;
    }
    if (iR==iN)
        bR=true;
    else
        bR=false;

    return bR;
}

int main()
{
    int iN, iR;
    bool bR;

    do
    {
        cout << "dime el limite(0 para salir): ";
        cin >> iN;

        if (iN!=0)
        {
            iR=CalculaPotencia(iN);

            cout << "Resultado: " << iR;

            MostrarAsteriscos(iN);

            cout << endl;
            bR=NumeroPerfecto(iN);
            if (bR==true)
                cout << "Es numero perfecto" << endl;
            else
                cout << "No es numero perfecto" << endl;

            cout << endl << endl;
        }
    }
    while (iN!=0);

    return 0;
}
