/**
 * Naomi Macias Honti a01282098
 * 11 de octubre 2016
 * 28 lineas mas 7 de comentarios. 35 en total.
 * Tiempo no estimado.
 * Recibe un numero entero positivo y le dice al usuario la cantidad de digitos que contiene el numero.
 */
 #include <iostream>

using namespace std;

int CalculaDigitos(int iN)
{
    int icontador;
    icontador = 0;
    while (iN!=0)
    {
        iN=iN/10;
        icontador++;
    }
    return icontador;
}

int main()
{
    int iN, iR;
    cout << "N= ";
    cin >> iN;

    iR=CalculaDigitos(iN);

    cout << "Cantidad de enteros: " << iR;

    return 0;
}
