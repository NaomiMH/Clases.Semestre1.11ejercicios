/**
 * Naomi Macias Honti a01282098
 * 8 de octubre 2016
 * 42 lineas mas 7 de comentarios. 49 en total.
 * 8 min.
 * Pide cantidad y despliega la cantidad de los establecidos caracteres.
 */
 #include <iostream>

using namespace std;

void Secuencia(int iN)
{
    int icontador;

    for (icontador=1;icontador<=iN;icontador++)
    {
        switch(icontador%3)
        {
        case 0:
            {
                cout << "%";
                break;
            }
        case 1:
            {
                cout << "*";
                break;
            }
        case 2:
            {
                cout << "#";
                break;
            }
        }
    }
}

int main()
{
    int iN;

    cout << "N= ";
    cin >> iN;

    Secuencia(iN);

    return 0;
}
