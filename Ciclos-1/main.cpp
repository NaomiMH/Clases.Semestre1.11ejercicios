/**
 * Naomi Macias Honti a01282098
 * 26 de septiembre
 * 40 lineas mas 10 de comentarios. 47 en total.
 * 40 min.
 * Pide un numero, hace la formula hasta el numero indicado y intercalando los signos, luego lo suma y lo multiplica por 4. Muestra resultado.
 * Luego da la secuencia void donde primero va subiendo el numero y luego disminuye.
 * Casos de pruebas:
 * 5 = -.5
 * 10 = -1.06
 */
 #include <iostream>
 #include <iomanip>
 #include <cmath>

using namespace std;

double Calculapi(int iN)
{
    int icantidad;
    double dR=0;
    int ibase=3;

    cout << "\n4(1/1 ";

    for (icantidad=2;ibase<iN;icantidad++)
    {
        if (icantidad%2==0)
        {
            cout << "- ";
            dR=dR-(1.0/ibase);
        }
        else
        {
            cout << "+ ";
            dR=dR+(1.0/ibase);
        }

        cout << "1/" << ibase << " ";

        ibase+=2;
    }

    if (icantidad%2==0)
    {
        cout << "- ";
        dR=dR-(1.0/iN);
    }
    else
    {
        cout << "+ ";
        dR=dR+(1.0/iN);
    }
    cout << "1/" << iN << ") = ";

    dR=dR*4;

    return dR;
}

void MostrarSecuencia(int iN)
{
    int icuenta;

    for (icuenta=1;icuenta<iN;icuenta++)
    {
        cout << icuenta << ", ";
    }

    while (icuenta>1)
    {
        cout << icuenta << ", ";
        icuenta--;
    }

    cout << icuenta << endl << endl;
}

int main()
{
    int iN;
    double dR;
    int iR=1;

    while (iR==1)
    {
        cout << "\n\nNumero: ";
        cin >> iN;

        dR=Calculapi(iN);

        cout << dR << endl << endl;

        MostrarSecuencia(iN);

        cout << "Quiere continuar? (si=1, no=0)" << endl;
        cin >> iR;
    }
    return 0;
}
