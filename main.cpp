#include <iostream>
#include <string.h>
#include "Funciones.h"


using namespace std;

int main()
{
    cout << "HOLA ESTOY EN EL MAIN" << endl;
    string vecNombreJugadores[2];
    int vecTiradaDeDados[2] = {};

    int opcion;
    while(true)
    {
        cout << "GRAN CERDO" << endl;
        cout << "---------------------" << endl;
        cout << "1 - JUGAR" << endl;
        cout << "2 - ESTADÍSTICAS" << endl;
        cout << "3 - CERDITOS" << endl;
        cout << "---------------------" << endl;
        cout << "0 - SALIR" << endl;
        cin >> opcion;
        system("cls");

        switch(opcion)
        {
        case 1: EmpezarJuego(vecNombreJugadores, vecTiradaDeDados);
            break;
        case 2:
            break;
        case 3:
            break;
        case 0: return 0;
            break;
        }

    }


    system("pause");
    return 0;
    return 0;
}
