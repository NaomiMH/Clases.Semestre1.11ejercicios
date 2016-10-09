/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 76 lineas mas 7 de comentarios. 83 en total.
 * tiempo no calculado
 * Pide hora y minutos en formato de 24 horas y la da en 12 horas.
 */
 #include<iostream>
 #include<iomanip>
 #include<cmath>

using namespace std;

int iminutos, ihoras12;
string sdia;

int CalculaHoras(int ihora)
{
    int ihora12;

    if (ihora>12)
    {
        ihora12=ihora-12;
        sdia= "PM";
    }
    else if (ihora==12)
    {
        ihora12=ihora;
        sdia= "PM";
    }
    else
    {
        ihora12=ihora;
        sdia= "AM";
    }
    return ihora12;
}

void Despliegahora()
{
    if (ihoras12==0)
        ihoras12=12;

    cout << "\n\nSon las ";

    if (ihoras12<10)
        cout << "0" << ihoras12;
    else
        cout << ihoras12;

    cout << ":";

    if (iminutos<10)
        cout << "0" << iminutos;
    else
        cout << iminutos;

    cout << " " << sdia << endl << endl;
}

int main()
{
    int ihoras;

    cout << "Horas: ";
    cin >> ihoras;
    cout << "Minutos: ";
    cin >> iminutos;

    if (ihoras>=0 && ihoras<=23 && iminutos>=0 && iminutos<=59)
    {
        ihoras12 = CalculaHoras(ihoras);

        Despliegahora();
    }
    else if (ihoras<0 || ihoras>23)
        cout << "\n\nLa hora debe de estar entre 0 y 23" << endl << endl;
    else if (iminutos<0 || iminutos>59)
        cout << "\n\nLos minutos deben estar entre 0 y 59" << endl << endl;

    return 0;
}
