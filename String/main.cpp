/**
 * Naomi Macias Honti a01282098
 * 11 de noviembre 2016
 * 99 lineas mas 7 de comentarios. 106 en total.
 * 29 min.
 * Recibe una oracion, cuenta sus vocales, dice cuales son y si es palindromo.
 */
 #include <iostream>

using namespace std;

int cuantasVocales(string sPal)
{
    int iContVoc=0;
    for(int icont=0; icont<(int)sPal.length(); icont++)
    {
        if (sPal[icont]=='a'||sPal[icont]=='e'||sPal[icont]=='i'||sPal[icont]=='o'||sPal[icont]=='u')
        {
            iContVoc++;
        }
    }
    return iContVoc;
}

void cualesVocales(string sPal)
{
    int iA=0;
    int iE=0;
    int iI=0;
    int iO=0;
    int iU=0;
    int icont=0;

    do
    {
        switch (sPal[icont])
        {
        case 'a':
            {
                iA++;
                break;
            }
        case 'e':
            {
                iE++;
                break;
            }
        case 'i':
            {
                iI++;
                break;
            }
        case 'o':
            {
                iO++;
                break;
            }
        case 'u':
            {
                iU++;
                break;
            }
        }
        icont++;
    }
    while(icont!=(int)sPal.length());

    cout << iA << " as" << endl;
    cout << iE << " es" << endl;
    cout << iI << " is" << endl;
    cout << iO << " os" << endl;
    cout << iU << " us" << endl;
}

bool esPalindromo(string sPal)
{
    for (int icon1=0, icon2=(int)sPal.length()-1; icon1<(int)sPal.length() && icon1<icon2; icon1++, icon2--)
    {
        if(sPal[icon1]!=sPal[icon2])
            return false;
    }
    return true;
}

int main()
{
    cout << "Feliz viernes!\n";

    string sPalabra;

    cout << "Hola usuario, dime una palabra, frase o nombre =)" << endl;
    getline(cin,sPalabra);

    cout << "La cantidad de vocales es: " << cuantasVocales(sPalabra) << endl;

    cout << "Y tiene:" << endl;
    cualesVocales(sPalabra);

    if (esPalindromo(sPalabra))
        cout << "Es palindromo";
    else
        cout << "No es palindromo";
    cout << endl;

    return 0;
}
