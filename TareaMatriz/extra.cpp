//Metodo para encontrar el mayor numero

int mayor(int iMat[7][7], int iMaxRen, int iMaxCol)
{
    int imayor;
    imayor=iMat[0][0];
    for(int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        for (int icontador2=0; icontador2<iMaxCol; icontador2++)
        {
            if (iMat[icontador1][icontador2]>imayor)
            {
                imayor=iMat[icontador1][icontador2];
            }
        }
    }
    return imayor;
}

//Metodo para encontrar la posicion del mayor

void posicionDelMayor(int iMat[7][7], int iMaxRen, int iMaxCol)
{
    int imayor;
    imayor=mayor(iMat,iMaxRen,iMaxCol);
    for (int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        for(int icontador2=0; icontador2<iMaxCol; icontador2++)
        {
            if (iMat[icontador1][icontador2]==imayor)
                cout << "Posicion: " << icontador1+1 << " " << icontador2+1;
        }
    }
}

//Metodo que despliega la matriz

void despliega(int iMat[7][7], int iMaxRen, int iMaxCol)
{
    for(int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        for (int icontador2=0; icontador2<iMaxCol; icontador2++)
        {
            cout << iMat[icontador1][icontador2] << " ";
        }
        cout << endl;
    }
}

//Comprueba si la matriz mantiene su igualdad

bool matrizIdentidad(int iMat[7][7], int iMaxRen, int iMaxCol)
{
    for (int icontador1=0, icontador2=iMaxRen-1; icontador1<iMaxRen;icontador1++, icontador2--)
    {
        for(int icontador3=0, icontador4=iMaxCol-1; icontador3<iMaxCol;icontador3++, icontador4--)
        {
            if (iMat[icontador1][icontador3]!=iMat[icontador2][icontador4])
                return false;
        }
    }
    return true;
}

//Suma la Diagonal de la matriz empezando desde el final

int sumaDiagonalInversa(int iMat[7][7], int iMaxRen, int iMaxCol)
{
    int isuma=0;
    for (int icontador1=iMaxRen-1; icontador1>=0; icontador1--)
    {
        isuma+=iMat[icontador1][icontador1];
    }
    return isuma;
}

//Suma la Diagonal de la matriz

int sumaDiagonalPrincipal(int iMat[7][7], int iMaxRen, int iMaxCol)
{
    int isuma = 0;
    for (int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        isuma+=iMat[icontador1][icontador1];
    }
    return isuma;
}

//Copia una matriz en otra

void copia(int iMat3x3[7][7], int iMat[7][7], int iMaxRen, int iMaxCol)
{
    for (int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        for(int icontador2=0; icontador2<iMaxCol; icontador2++)
        {
            iMat3x3[icontador1][icontador2]=iMat[icontador1][icontador2];
        }
    }
}

//Comprueba si dos matrices son iguales

bool sonIguales(int iMat1[7][7], int iMat2[7][7], int iMaxRen, int iMaxCol)
{
    for (int icontador1=0; icontador1<iMaxRen; icontador1++)
    {
        for (int icontador2=0; icontador2<iMaxCol; icontador2++)
        {
            if (iMat1[icontador1][icontador2]!=iMat2[icontador1][icontador2])
            {
                return false;
            }
        }
    }
    return true;
}
