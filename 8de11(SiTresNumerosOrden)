/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 35 lineas mas 7 de comentarios. 42 en total.
 * 9 min.
 * Pide tres numeros y dice si estan en orden.
 */
 #include <iostream>

using namespace std;

int inum1, inum2, inum3;
bool bnum;

bool Veracidad(int in1, int in2, int in3)
{
    bool bfot;
    if (in1<in2 && in2<in3)
        bfot = true;
    else
        bfot = false;
    return bfot;
}

int main()
{
    cout << "1= ";
    cin >> inum1;
    cout << "2= ";
    cin >> inum2;
    cout << "3= ";
    cin >> inum3;

    bnum= Veracidad(inum1,inum2,inum3);

    if (bnum== true)
        cout << "Los numeros " << inum1 << ", " << inum2 << " y " << inum3 << ", si estan en orden." << endl;
    else
        cout << "No estan en orden" << endl;
    return 0;
}
