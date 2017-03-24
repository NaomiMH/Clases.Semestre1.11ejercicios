/**
 * Naomi Macias Honti a01282098
 * 11 de octubre 2016
 * 26 lineas mas 7 de comentarios. 33 en total.
 * 2 min.
 * Recibe numero y da el numero volteado.
 */
 #include <iostream>

using namespace std;

void Reto(int iN)
{
    int iR;
    while (iN!=0)
    {
        iR=iN%10;
        iN=iN/10;
        cout << iR;
    }
}

int main()
{
    int iN;
    cout << "N= ";
    cin >> iN;

    Reto(iN);

    return 0;
}
