/**
 * Naomi Macias Honti a01282098
 * 22 de noviembre 2016
 * 86 lineas mas 7 de comentarios. 93 en total.
 * 26 min.
 * Pide matricula, dependiendo de esta se da el dia de inscripcion, campus, este decide si es precencial o en linea, y la beca, que tiene que estar entre 0 y 90.
 */
#include <iostream>

using namespace std;

int main()
{
    int imatricula, ibeca, imatIni;
    string scampus, sres;

    do
    {
        cout << "Dime tu matricula: ";
        cin >> imatricula;
        cout << "En que campus estas? ";
        cin >> scampus;
        do
        {
            cout << "Que porcentaje de beca tienes? ";
            cin >> ibeca;
            if (ibeca>90)
                cout << "Tiene que ser menor o igual a 90" << endl;
            else if (ibeca<0)
                cout << "Tiene que ser mayor o igual a 0" << endl;
        }
        while (ibeca<0 || ibeca>90);

        imatIni=(imatricula%10);

        cout << endl << endl;
        cout << "Tu fecha de inscripcion es el ";

        switch (imatIni)
        {
        case 1:
            cout << "4 ";
            break;
        case 2:
            cout << "4 ";
            break;
        case 3:
            cout << "5 ";
            break;
        case 4:
            cout << "5 ";
            break;
        case 5:
            cout << "6 ";
            break;
        case 6:
            cout << "6 ";
            break;
        case 7:
            cout << "7 ";
            break;
        case 8:
            cout << "7 ";
            break;
        case 9:
            cout << "7 ";
            break;
        case 0:
            cout << "8 ";
            break;
        }
        cout << "de Dic. ";

        if (scampus=="Monterrey" || scampus=="monterrey")
        {
            cout << "Tu inscripcion es de manera presencial. ";
        }
        else
        {
            cout << "Tu inscripcion es de manera en linea. ";
        }
        cout << "Esta registrado que tu beca es del " << ibeca << "%." << endl << endl;
        cout << "Que tengas un buen dia!" << endl;

        cout << "\nDeseas continuar (si/no)? ";
        cin >> sres;
    }
    while (sres!="no");



    return 0;
}
