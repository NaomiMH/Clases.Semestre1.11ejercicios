/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 94 lineas mas 7 de comentarios. 101 en total.
 * 32 min.
 * Pide ano y salario, calcula el incremento y el salario actual.
 */
 #include <iostream>
 #include <iomanip>
 #include <cmath>

using namespace std;

int isueldo, isueldof, iano;
double dincremento;

void CalculaIncremento()
{
    cout << "El salario tiene un incremento de ";

    switch(iano)
    {
    case 2001:
        if (isueldo>=0 && isueldo<=5000)
        {
            dincremento=0.03;
            cout << "3%";
        }
        else if (isueldo>5000 && isueldo<=8000)
        {
            dincremento=0.04;
            cout << "4%";
        }
        else if (isueldo>8000)
        {
            dincremento=0.05;
            cout << "5%";
        }
        break;
    case 2002:
        if (isueldo>=0 && isueldo<=6500)
        {
            dincremento=0.025;
            cout << "2.5%";
        }
        else if (isueldo>6500)
        {
            dincremento=0.035;
            cout << "3.5%";
        }
        break;
    case 2003:
        if (isueldo>=0 && isueldo<=8000)
        {
            dincremento=0.055;
            cout << "5.5%";
        }
        else if (isueldo>8000 && isueldo<=15000)
        {
            dincremento=0.038;
            cout << "3.8%";
        }
        else if (isueldo>15000)
        {
            dincremento=0.022;
            cout << "2.2%";
        }
        break;
    default:
        if (iano>=2004)
        {
            dincremento=0.027;
            cout << "2.7%";
        }
        else if (iano<2001)
        {
            dincremento=0;
            cout << "0%";
        }
        break;
    }

    cout << " y ahora es de: ";

    isueldof= isueldo+(isueldo*dincremento);

    cout << isueldof << " pesos." << endl;
}

int main()
{
    cout << "Ano de contratacion? ";
    cin >> iano;
    cout << "Sueldo actual en pesos? ";
    cin >> isueldo;

    CalculaIncremento();

    return 0;
}
