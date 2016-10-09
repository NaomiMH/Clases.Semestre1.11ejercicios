/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 36 lineas mas 7 de comentarios. 43 en total.
 * tiempo no calculado
 * Pregunta por 3 numeros y dice el mas grande.
 */
 #include <iostream>

using namespace std;

char Calcularvalor( int i1, int i2, int i3)
{
    if (i1 > i2 && i1 > i3)
        return 'a';
    else if (i2 > i1 && i2 > i3)
        return 'b';
    else
        return 'c';
}

int main()
{
    char cmayor;
    int ia, ib, ic;

    cout << "Dame los tres valores:" << endl;
    cout << "a = ";
    cin >> ia;
    cout << "Dame los tres valores:" << endl;
    cout << "b = ";
    cin >> ib;
    cout << "Dame los tres valores:" << endl;
    cout << "c = ";
    cin >> ic;

    cmayor = Calcularvalor(ia, ib, ic);

    cout << "El numero mayor es el de: " << cmayor << "." << endl;

    return 0;
}
