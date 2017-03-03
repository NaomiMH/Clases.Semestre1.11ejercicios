/**
 * Naomi Macias Honti a01282098
 * 2 de septiembre
 * 44 lineas mas 7 de comentarios. 51 en total.
 * Tiempo no estimado.
 * Pide tres numeros y dice cual es el mayor.
 */
 #include <iostream>

using namespace std;

char Calcularvalor( int i1, int i2, int i3)
{
    if (i1 > i2 && i1 > i3)
        return 'A';
    else if (i2 > i1 && i2 > i3)
        return 'B';
    else
        return 'C';
}

int main()
{
    char cmayor;
    int iA, iB, iC;

    cout << "Dame los tres valores:" << endl;
    cout << "A = ";
    cin >> iA;
    cout << "Dame los tres valores:" << endl;
    cout << "B = ";
    cin >> iB;
    cout << "Dame los tres valores:" << endl;
    cout << "C = ";
    cin >> iC;

    cmayor = Calcularvalor(iA, iB, iC);

    cout << "El numero mayor es: " << cmayor << ", y es igual a ";

    if (cmayor == 'A')
        cout << iA;
    else if (cmayor == 'B')
        cout << iB;
    else if (cmayor == 'C')
        cout << iC;

    cout << "." << endl;

    return 0;
}
