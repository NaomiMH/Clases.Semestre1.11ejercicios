/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 55 lineas mas 7 de comentarios. 62 en total.
 * 20 min.
 * Pregunta 3 calificaciones, saca promedio y da calificacion en letra.
 */
 #include<iostream>
 #include<cmath>
 #include<iomanip>

using namespace std;

char CalculaLetra(int inumero1, int inumero2, int inumero3)
{
    int ipromedio;
    char cletra;

    ipromedio = (inumero1 + inumero2 + inumero3)/3;

    cletra = 'O';
    if (ipromedio>=10 && ipromedio<=100)
    {
        if (ipromedio>=90)
            cletra='A';
        else if (ipromedio>=80)
            cletra='B';
        else if (ipromedio>=70)
            cletra='C';
        else if (ipromedio>=60)
            cletra='D';
        else
            cletra='E';
    }
    else
        cout << "Cantidad invalida" << endl;
    return cletra;
}

int main()
{
    int ical1, ical2, ical3;
    char clet;

    cout << "Calificacion del alumno" << endl;
    cout << "1. ";
    cin >> ical1;
    cout << "2. ";
    cin >> ical2;
    cout << "3. ";
    cin >> ical3;

    clet = CalculaLetra(ical1,ical2,ical3);

    if (clet=='O')
        cout << "Solo numeros entre 10 y 100" << endl;
    else
        cout << "\nPuntuacion en letra: " << clet << endl;

    return 0;
}
