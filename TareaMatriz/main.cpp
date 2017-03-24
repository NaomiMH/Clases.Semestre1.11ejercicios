/**
 * Naomi Macias Honti a01282098
 * 8 de noviembre 2016
 * 101 lineas mas 7 de comentarios. 108 en total.
 * 44 min
 * Tiene dos matrices ya definidas a las que somete a diferentes metodos, de suma, promedio, hayar y contar x.
 */
 #include <iostream>

using namespace std;

//Metodo que suma el contenido de la matriz

int suma(int iMat[7][7], int iMaxRen, int iMaxCol)
{
    int isuma=0;
    for (int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        for (int icontador2=0; icontador2<iMaxCol; icontador2++)
        {
            isuma=isuma+iMat[icontador1][icontador2];
        }
    }
    return isuma;
}

//Metodo que obtiene el promedio de la matriz
//Este metodo debe de llamar al metodo anterior de suma

double promedio(int iMat[7][7], int iMaxRen, int iMaxCol)
{
    double ipromedio;
    ipromedio=(suma(iMat,iMaxRen,iMaxCol))/(iMaxRen*iMaxCol*1.0);
    return ipromedio;
}

//Metodo que busca el entero x dentro de la matriz

bool busca(int iMat[7][7], int iMaxRen, int iMaxCol, int iN)
{
    for (int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        for (int icontador2=0; icontador2<iMaxCol; icontador2++)
        {
            if (iMat[icontador1][icontador2]==iN)
            {
                return true;
            }
        }
    }
    return false;
}

//Metodo que regresa el numero de veces que se encuentra x dentro de la matriz

int cuentaIguales(int iMat[7][7], int iMaxRen, int iMaxCol, int iN)
{
    int icontador=0;
    for(int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        for(int icontador2=0; icontador2<iMaxCol; icontador2++)
        {
            if(iMat[icontador1][icontador2]==iN)
            {
                icontador++;
            }
        }
    }
    return icontador;
}

int main()
{
   cout << "Practica de Matrices\n";

   int iMat3x3[7][7]= {{2,1,3},{5,6,9},{1,8,4}};
   int iMat3x4[7][7]= {{2,1,3,6},{5,6,9,8},{1,8,4,7}};

   cout << "Suma de Matriz 3x3 = " << suma(iMat3x3,3,3) << endl;
   cout << "Suma de Matriz 3x4 = " << suma(iMat3x4,3,4) << endl;

   cout << "Promedio de Matriz 3x3 = " << promedio(iMat3x3,3,3) << endl;
   cout << "Promedio de Matriz 3x4 = " << promedio(iMat3x4,3,4) << endl;

   int iN;

   cout << "Encontrar? ";
   cin >> iN;

   cout << endl << iN;
   if (busca(iMat3x3,3,3,iN)==false)
   {
       cout << " no";
   }
   cout << " se encuentra en la matriz" << endl;

   cout << iN;
   if (busca(iMat3x4,3,4,iN)==false)
   {
       cout << " no";
   }
   cout << " se encuentra en la matriz" << endl;

   cout << endl << iN << " se encuentra " << cuentaIguales(iMat3x3,3,3,iN) << " veces en la matriz"<< endl;
   cout << iN << " se encuentra " << cuentaIguales(iMat3x4,3,4,iN) << " veces en la matriz" << endl;
   return 0;
}
