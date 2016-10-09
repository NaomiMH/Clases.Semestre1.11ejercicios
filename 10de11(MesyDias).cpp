/**
 * Naomi Macias Honti a01282098
 * 4 de septiembre
 * 65 lineas mas 7 de comentarios. 72 en total.
 * 18 min.
 * Pide un numero de mes, y da el nombre y numero de dias que tiene.
 */
 #include <iostream>

using namespace std;

void SacarMes(int inumeromes)
{
    string smensaje;

    switch (inumeromes)
    {
    case 1:
        smensaje = "El mes es Enero, tiene 31 dias.";
        break;
    case 2:
        smensaje = "El mes es Febrero, tiene 28 dias.";
        break;
    case 3:
        smensaje = "El mes es Marzo, tiene 30 dias.";
        break;
    case 4:
        smensaje = "El mes es Abril, tiene 31 dias.";
        break;
    case 5:
        smensaje = "El mes es Mayo, tiene 30 dias.";
        break;
    case 6:
        smensaje = "El mes es Junio, tiene 31 dias.";
        break;
    case 7:
        smensaje = "El mes es Junio, tiene 30 dias.";
        break;
    case 8:
        smensaje = "El mes es Agosto, tiene 31 dias.";
        break;
    case 9:
        smensaje = "El mes es Septiembre, tiene 30 dias.";
        break;
    case 10:
        smensaje = "El mes es Octubre, tiene 31 dias.";
        break;
    case 11:
        smensaje = "El mes es Noviembre, tiene 30 dias.";
        break;
    case 12:
        smensaje = "El mes es Diciembre, tiene 31 dias.";
        break;
    default:
        smensaje = "Error";
        break;
    }
    cout << endl << smensaje << endl;
}

int main()
{
    int imes;

    cout << "Dime el numero del mes: ";
    cin >> imes;

    SacarMes(imes);

    return 0;
}
