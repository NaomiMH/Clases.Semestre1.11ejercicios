/**
 * Naomi Macias Honti a01282098
 * 1 de noviembre 2016
 * 71 lineas mas 7 de comentarios. 78 en total.
 * 44 min.
 * Recibe un listado de datos, los divide entre pares e impares y despliega las tres diferentes listas.
 */
 #include <iostream>

using namespace std;

void ContarParesImpares(int iArr[], int iArrP[], int iArrI[], int iN, int &icontadorp, int &icontadori)
{
    int icontador;
    icontador=0;
    icontadorp=-1;
    icontadori=-1;
    while (icontador<=iN-1)
    {
        switch (iArr[icontador]%2)
        {
        case 0:
            icontadorp++;
            iArrP[icontadorp]=iArr[icontador];
            break;
        case 1:
            icontadori++;
            iArrI[icontadori]=iArr[icontador];
            break;
        }
        icontador++;
    }
}

void DesplegarDatos (int iArr[], int iN)
{
    int icontador;
    for(icontador=0;icontador<=iN-1;icontador++)
    {
        cout << icontador+1 << ". " << iArr[icontador] << endl;
    }
    cout << endl << endl;
}

void CargarDatos(int iArr[], int iN)
{
    int icontador;
    cout << endl << endl;
    for (icontador=0;icontador<=iN-1;icontador++)
    {
        cout << "Dato #" << icontador+1 << ": ";
        cin >> iArr[icontador];
    }
    cout << endl << endl;
}

int main()
{
    int iN, icontadorp, icontadori;
    cout << "N= ";
    cin >> iN;

    int iArr[iN];

    CargarDatos(iArr,iN);

    int iArrP[iN], iArrI[iN];

    ContarParesImpares(iArr,iArrP,iArrI,iN,icontadorp,icontadori);
 
    cout << "Datos: " << endl;
    DesplegarDatos(iArr,iN);
    cout << "Datos pares: " << endl;
    DesplegarDatos(iArrP,icontadorp+1);
    cout << "Datos impares: " << endl;
    DesplegarDatos(iArrI,icontadori+1);

    return 0;
}
