/**
 * Naomi Macias Honti a01282098
 * 15 de noviembre 2016
 * 31 lineas mas 12 de comentarios. 43 en total.
 * Tiempo no estimado.
 * Recibe una linea de letras, el nombre mas dos apellidos y da las iniciales en mayusculas.
 */
 #include <iostream>

using namespace std;

string iniciales(string sNom)
{
    string sFinal;
    int snum1,snum2;

    sFinal=toupper(sNom[0]);

    snum1=sNom.find(" ");
    snum2=sNom.find(" ",snum1+1);

    sFinal+=toupper(sNom[snum1+1]);

    sFinal+=toupper(sNom[snum2+1]);

    //snum1=sNom.find(" ");
    //sNom.erase(snum1);
    //snum2=sNom.find(" ");
    //sNom.erase(snum2);
    //sFinal+=toupper(sNom[snum2]);
    return sFinal;
}

int main()
{
    string sNombre;
    cout << "Nombre: ";
    getline(cin,sNombre);

    cout << iniciales(sNombre) << endl;
    return 0;
}
