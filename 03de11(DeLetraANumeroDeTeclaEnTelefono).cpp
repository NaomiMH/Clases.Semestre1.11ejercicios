/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 144 lineas mas 7 de comentarios. 151 en total.
 * 40 min.
 * Pregunta por una letra y da el numero de la tecla de telefono correspondiente.
 */
 #include<iostream>
 #include<iomanip>
 #include<cmath>

using namespace std;

char Arreglaletra(char cletraa)
{
    char ccorrecto;

    switch (cletraa)
    {
        case 'a':
            ccorrecto= 'A';
            break;
        case 'b':
            ccorrecto= 'B';
            break;
        case 'c':
            ccorrecto= 'C';
            break;
        case 'd'    :
            ccorrecto= 'D';
            break;
        case 'e':
            ccorrecto= 'E';
            break;
        case 'f':
            ccorrecto= 'F';
            break;
        case 'g':
            ccorrecto= 'G';
            break;
        case 'h':
            ccorrecto= 'H';
            break;
        case 'i':
            ccorrecto= 'I';
            break;
        case 'j':
            ccorrecto= 'J';
            break;
        case 'k':
            ccorrecto= 'K';
            break;
        case 'l':
            ccorrecto= 'L';
            break;
        case 'm':
            ccorrecto= 'M';
            break;
        case 'n':
            ccorrecto= 'N';
            break;
        case 'o':
            ccorrecto= 'O';
            break;
        case 'p':
            ccorrecto= 'P';
            break;
        case 'r':
            ccorrecto= 'R';
            break;
        case 's':
            ccorrecto= 'S';
            break;
        case 't':
            ccorrecto= 'T';
            break;
        case 'u':
            ccorrecto= 'U';
            break;
        case 'v':
            ccorrecto= 'V';
            break;
        case 'w':
            ccorrecto= 'W';
            break;
        case 'x':
            ccorrecto= 'X';
            break;
        case 'y':
            ccorrecto= 'Y';
            break;
        case 'z':
            ccorrecto='Z';
            break;
        case 'q':
            ccorrecto='Q';
            break;
        default:
            ccorrecto=cletraa;
            break;
    }
    return ccorrecto;
}

int Calculanumero(char claletra)
{
    int ielnumero;

    ielnumero=0;

    if (claletra=='A' || claletra=='B' || claletra=='C')
        ielnumero=2;
    else if (claletra=='D' || claletra=='E' || claletra=='F')
        ielnumero=3;
    else if (claletra=='G' || claletra=='H' || claletra=='I')
        ielnumero=4;
    else if (claletra=='J' || claletra=='K' || claletra=='L')
        ielnumero=5;
    else if (claletra=='O' || claletra=='N' || claletra=='M')
        ielnumero=6;
    else if (claletra=='P' || claletra=='R' || claletra=='S')
        ielnumero=7;
    else if (claletra=='T' || claletra=='U' || claletra=='V')
        ielnumero=8;
    else if (claletra=='W' || claletra=='X' || claletra=='Z')
        ielnumero=9;
    else if (claletra=='Q' || claletra=='Z')
        cout << "No hay ningun digito en el telefono que corresponda a la letra " << claletra <<endl;
    return ielnumero;
}

int main()
{
    char cletra, cletraf;
    int inumero;

    cout << "\nTeclea una letra, y yo te dire que digito del telefono le corresponde: ";
    cin >> cletra;

    cletraf = Arreglaletra(cletra);

    inumero = Calculanumero(cletraf);

    if (inumero==0)
        cout << "No son utilizadas en el telefono" << endl;
    else
        cout << "El digito " << inumero << " corresponde a la letra " << cletra << " en el telefono." <<endl;

    return 0;
}
