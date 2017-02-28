/**
 * Naomi Macias Honti a01282098
 * 6 de septiembre
 * 37 lineas mas 7 de comentarios. 44 en total.
 * 32 min.
 * Pide salario y paga y calcula la paga total.
 */
 #include<iostream>
 #include<iomanip>
 #include<cmath>

using namespace std;

int CalculaSalarioNeto (int ihoras, int ipaga)
{
    int itotal;

    if (ihoras>40)
        ipaga=ipaga*1.5;

    itotal = ihoras*ipaga;

    if (itotal>8000)
        itotal=itotal-(itotal*0.1);

    return itotal;
}

int main()
{
    int ihor, ipag, ito;

    cout << "Cuantas horas trabajo esta semana? ";
    cin >> ihor;
    cout << "Salario? ";
    cin >> ipag;

    ito = CalculaSalarioNeto(ihor,ipag);

    cout << "\n\nSalario final: $" << ito << "." << endl << endl;

    return 0;
}
