/**
 * Naomi Macias Honti a01282098
 * 18 de octubre 2016
 * 31 lineas mas 7 de comentarios. 38 en total.
 * Tiempo no estimado.
 * Recibe dos numeros enteros en orden aleatorio y da los numeros enteros que se encuentran a partir de N1 a N2.
 */
 
 #include <iostream>

using namespace std;

void MostrarEnteros(int iNum1, int iNum2)
{
    while (iNum1-1>iNum2)
    {
        iNum1=iNum1-1;
        cout << iNum1;
    }
    while (iNum1+1<iNum2)
    {
        iNum1=iNum1+1;
        cout << iNum1;
    }
}

int main()
{
   int iN1,iN2;
   cout << "Valor de N1= ";
   cin >> iN1;
   cout << "Valor de N2= ";
   cin >> iN2;
   
   MostrarEnteros(iN1,iN2);
   
   return 0;
}
