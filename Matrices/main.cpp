/**
 * Naomi Macias Honti a01282098
 * 21 de octubre 2016
 * 123 lineas mas 7 de comentarios. 130 en total.
 * 19 min.
 * Muestra varias opciones para hacer con Matrices (aun incompleto).
 */
 #include <iostream>

using namespace std;

void CargarDatos(int iArr[], int iN)
{
    int icontador;
    for (icontador =0; icontador <= iN-1; icontador++)
    {
        cout << "Dato #" << icontador+1 << ": ";
        cin >> iArr[icontador];
    }
}

void ContarParesImpares(int iArr[],int iN, int &iPares, int &iImpares)
{
    int icontador;
    for (icontador =0; icontador <=iN-1; icontador++)
    {
        if (iArr[icontador]%2==0)
        {
            iPares++;
        }
        else if (iArr[icontador]%2==1)
        {
            iImpares++;
        }
    }
}

void ContarPositivosNegaticos(int iArr[], int iN, int &iPositivos, int &iNegativos)
{
    int icontador;
    for (icontador=0; icontador<=iN-1;icontador++)
    {
        if (iArr[icontador]>=0)
        {
            iPositivos++;
        }
        else
        {
            iNegativos++;
        }
    }
    cout << "\n\nPositivos: " << iPositivos;
    cout << "\nNegativos: " << iNegativos;
}

int main()
{
    int iN1, iMenu, iRespuesta, iPares, iImpares, iN2, iNumArr, iArr2[0];
    iPares=0;
    iImpares=0;
    iNumArr=1;

    cout << "Cantidad de datos: ";
    cin >> iN1;

    int iArr1[iN1];

    CargarDatos(iArr1,iN1);

    do
    {
        cout << "\nOpciones: " << endl;
        cout << "1. Inicializar un arreglo (max. 2)" << endl;
        cout << "2. Cuenta los numeros negativos y positivos" << endl;
        cout << "3. Identifica negativos y los muestra" << endl;
        cout << "4. Cambia negativos a ceros" << endl;
        cout << "5. Busca el nuemero en el arreglo" << endl;
        cout << "6. Invertir un arreglo" << endl;
        cout << "7. Invertir un arreglo y guardarlo en otro lado (min 2 arreglos)" << endl;
        cout << "8. Inicializar arreglo 2*n (otro)" << endl;
        cout << "9. Inicializar arreglo n-1 (otro)" << endl;
        cout << "0. Salir" << endl;
        cin >> iMenu;

        switch (iMenu)
        {
        case 1:
            {
                if (iNumArr<3)
                {
                    cout << "Se guardara en arreglo#" << iNumArr+1 << endl;
                    cout << "Cantidad de datos: ";
                    cin >> iN2;
                    int iArr2[iN2];
                    CargarDatos(iArr2, iN2);
                    iNumArr++;
                }
                else
                {
                    cout << "Maximo alcanzado";
                }
            }
        case 2:
            {
                int iPositivos=0;
                int iNegativos=0;
                if (iNumArr>1)
                {
                    cout << "Aplicar para cual arreglo? (1 o 2)";
                    cin >> iRespuesta;
                    if (iRespuesta==2)
                    {
                        ContarPositivosNegaticos(iArr2,iN2,iPositivos,iNegativos);
                    }
                }
                else
                {
                    ContarPositivosNegaticos(iArr1,iN1,iPositivos,iNegativos);
                }
            }
        case 3:
            {

            }
        }
    }
    while (iMenu!=0);

    return 0;
}
