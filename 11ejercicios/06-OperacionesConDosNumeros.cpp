/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 48 lineas mas 7 de comentarios. 55 en total.
 * 13 min.
 * Pide 2 numero y un caracter y hace la operacion correspondiente.
 */
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int inum1, inum2, ires;
char ccar;

void CalculadoraSimple()
{
    switch (ccar)
    {
    case '+':
        ires=inum1+inum2;
        break;
    case '-':
        ires=inum1-inum2;
        break;
    case '*':
        ires=inum1*inum2;
        break;
    case '%':
        ires=inum1%inum2;
        break;
    case '/':
        ires=inum1/inum2;
    }
    if (ccar== '+' || ccar== '-' || ccar=='*' || ccar=='%' || ccar=='/')
        cout << "Resultado: " << ires << endl;
    else
        cout << "\nError" << endl;
}

int main()
{
    cout << "Numero 1: ";
    cin >> inum1;
    cout << "Numero 2: ";
    cin >> inum2;
    cout << "Caracter: ";
    cin >> ccar;

    CalculadoraSimple();

    return 0;
}
