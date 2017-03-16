/**
 * Naomi Macias Honti a01282098
 * 15 de noviembre 2016
 * 35 lineas mas 7 de comentarios. 42 en total.
 * 13 min.
 * Recibe un nombre y un correo electronico y da la cantidad de caractares en el nombre y el dominio del correo.
 */
 #include <iostream>

using namespace std;

int caracteres(string sNom)
{
    int inum;
    inum=sNom.find(" ");
    return inum;
}

string dominio(string sNom)
{
    int inum1,inum2,inum;
    inum1=sNom.find("@");
    inum2=sNom.find(".");
    string sFinal;
    inum=inum2-inum1;
    sFinal=sNom.substr(inum1+1,inum-1);
    return sFinal;
}

int main()
{
    string sNombre, scorreo;
    cout<< "Nombre: ";
    getline(cin,sNombre);
    cout << "Correo: ";
    getline(cin,scorreo);

    cout << "Tiene " << caracteres(sNombre) << " caracteres" << endl;
    cout << "El dominio del correo es " << dominio(scorreo) << endl;
    return 0;
}
