/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 40 lineas mas 7 de comentarios. 47 en total.
 * Tiempo no estimado.
 * Pide valor de x y depende del valor, escoge una formula donde aplica el valor y da el resultado.
 */
 #include<iostream>
 #include<iomanip>
 #include<cmath>

using namespace std;

void CalculaX(int ivalorX)
{
    int iresultado;

    if (ivalorX < -2)
    {
        iresultado = 2*pow(ivalorX,2) + 4*ivalorX + 2;
        cout << "\n2(" << ivalorX << ")^2 + 4(" << ivalorX << ") + 2 =" << iresultado << endl;
    }
    else if (ivalorX >= -2 && ivalorX < 0)
    {
        iresultado = 2;
        cout << "\n2 = " << iresultado << endl;
    }
    else if (ivalorX >= 0)
    {
        iresultado = 3*ivalorX + 1;
        cout << "\n3(" << ivalorX << ") + 1 = " << iresultado << endl;
    }
}

int main()
{
    int ix;

    cout << "X = ";
    cin >> ix;

    CalculaX(ix);

    return 0;
}
