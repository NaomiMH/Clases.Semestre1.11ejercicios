/**
 * Naomi Macias Honti a01282098
 * 7 de octubre 2016
 * 59 lineas mas 7 de comentarios. 66 en total.
 * Tiempo no estimado.
 * Suma los numeros que son multiplos de 3 y calcula el factorial.
 */
 #include <iostream>

using namespace std;

int sumaMultiplos3(int iN, int iN2)
{
    int iR=0;

    while (iN<iN2)
    {
        if (iN%3==0)
            iR=iR+iN;
        iN++;
    }
    return iR;
}

int calcularFactorial(int iN)
{
    int iR=1;

    for(int icount=iN;icount<=iN&&icount>0;icount--)
    {
        iR=iR*icount;
    }

    return iR;
}

int main()
{
    int iN,iN2,iM,iRN,iRM;
    string ssalida;

    do
    {
        cout << "De: ";
        cin >> iN;
        cout << "A: ";
        cin >> iN2;
        cout << endl;

        iRN=sumaMultiplos3(iN,iN2);
        cout << "Respuesta: " << iRN;

        cout << "\n\nFactorial de ";
        cin >> iM;
        cout << endl;

        iRM=calcularFactorial(iM);
        cout << "Respuesta: " << iRM;

        cout << "\n\nQuieres salir? (si/no) ";
        cin >> ssalida;
        cout << endl << endl;
    }
    while (ssalida=="no");
    return 0;
}
