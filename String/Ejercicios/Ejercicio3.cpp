/**
 * Naomi Macias Honti a01282098
 * 15 de noviembre 2016
 * 46 lineas mas 7 de comentarios. 53 en total.
 * 16 min.
 * Hace una porra apartir de un nombre de n longitud.
 */
 #include <iostream>

using namespace std;

void dame(string sNom)
{
    char cinicial;
    for (int icon=0; icon<(int)(sNom.length());icon++)
    {
        cinicial=tolower(sNom[icon]);
        cout << "Dame una " << cinicial << endl;
    }
    cout << "Que dice? ";
    for (int icon=0; icon<(int)(sNom.length());icon++)
    {
        cinicial=toupper(sNom[icon]);
        cout << cinicial;
    }
    cout << endl;
    cout << "Que dice? ";
    for (int icon=0; icon<(int)(sNom.length());icon++)
    {
        cinicial=toupper(sNom[icon]);
        cout << cinicial;
    }
    cout << endl;
    cout << "Y al revez? ";
    for (int icon=(int)(sNom.length())-1; icon>=0;icon--)
    {
        cinicial=toupper(sNom[icon]);
        cout << cinicial;
    }
    cout << endl;
}


int main()
{
    string sNombre;
    cout << "Dime tu nombre:";
    getline(cin,sNombre);

    dame(sNombre);
    return 0;
}
