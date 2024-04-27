#include <iostream>

using namespace std;

int GenerarNumeroAleatorio()
{
    srand (time (NULL));

    int valorGenerado = (rand ()%6+1);
    return valorGenerado;

}

void DeterminarOrdenDeJugadores(string vecNombreJugadores[], int vecTiradaDeDados[])
{
    int aux;
    string auxNombre;


    for(int i=0; i<2; i++)
    {

        cout << "Ingrese un nombre: ";
        cin >> vecNombreJugadores[i];
        vecTiradaDeDados[i] = GenerarNumeroAleatorio();

    }

    cout << "//////VALORES ORIGINALES////////" << endl;

    for(int i=0;i<2;i++)
    {
        cout << "Nombre jugador #" << i + 1 << ": " << vecNombreJugadores[i] << " saco: " << vecTiradaDeDados[i] << endl;
    }

    cout << "////////////////////////////////" << endl;


    while(vecTiradaDeDados[0] == vecTiradaDeDados[1])
    {
        for(int i=0; i<2; i++)
        {
            vecTiradaDeDados[i] = GenerarNumeroAleatorio();
        }
    }

    cout << "///////////////////////////////" << endl;

    for(int i=0;i<2;i++)
    {
        cout << "Nombre jugador #" << i + 1 << ": " << vecNombreJugadores[i] << " saco: " << vecTiradaDeDados[i] << endl;
    }

    cout << "////////////////////////////////" << endl;


    if(vecTiradaDeDados[1]>vecTiradaDeDados[0])
    {
        aux = vecTiradaDeDados[0];
        vecTiradaDeDados[0] = vecTiradaDeDados[1];
        vecTiradaDeDados[1] = aux;

        auxNombre = vecNombreJugadores[0];
        vecNombreJugadores[0] = vecNombreJugadores[1];
        vecNombreJugadores[1] = auxNombre;
    }




    /*for(int i=0;i<2;i++)
    {
        cout << "Nombre jugador #" << i + 1 << ": " << vecNombreJugadores[i] << " saco: " << vecTiradaDeDados[i] << endl;
    }*/

    cout << endl;



    for(int i=0;i<2;i++)
    {
        cout << "Nombre jugador #" << i + 1 << ": " << vecNombreJugadores[i] << " saco: " << vecTiradaDeDados[i] << endl;
    }

}


void DibujarDadoAleatorio(int numeroAleatorio)
{
    if(numeroAleatorio == 1)
    {
        cout << "+-------+ " << endl;
        cout << "|       | " << endl;
        cout << "|   x   | " << endl;
        cout << "|       | " << endl;
        cout << "+-------+ " << endl;
    }
    else if(numeroAleatorio == 2)
    {
        cout << "+-------+ " << endl;
        cout << "|       | " << endl;
        cout << "|  x x  | " << endl;
        cout << "|       | " << endl;
        cout << "+-------+ " << endl;
    }
    else if(numeroAleatorio == 3)
    {
        cout << "+-------+ " << endl;
        cout << "|       | " << endl;
        cout << "| x x x | " << endl;
        cout << "|       | " << endl;
        cout << "+-------+ " << endl;
    }
    else if(numeroAleatorio == 4)
    {
        cout << "+-------+ " << endl;
        cout << "|  x x  | " << endl;
        cout << "|       | " << endl;
        cout << "|  x x  | " << endl;
        cout << "+-------+ " << endl;
    }
    else if(numeroAleatorio == 5)
    {
        cout << "+-------+ " << endl;
        cout << "|  x x  | " << endl;
        cout << "|   x   | " << endl;
        cout << "|  x x  | " << endl;
        cout << "+-------+ " << endl;
    }
    else if(numeroAleatorio == 6)
    {
        cout << "+-------+ " << endl;
        cout << "|  x x  | " << endl;
        cout << "|  x x  | " << endl;
        cout << "|  x x  | " << endl;
        cout << "+-------+ " << endl;
    }

}

void ValidarRespuestaPorCaracter(char &respuesta)
{
    bool opcion = true;
        while(opcion)
        {
            if(respuesta != 'N' && respuesta != 'S')
            {
                cout << "Te equivocaste. Volve a intentar: " << endl;
                cin >> respuesta;
            }
            else
            {
                opcion = false;
            }
        }

}


void EmpezarJuego(string vecNombreJugadores[], int vecTiradaDeDados[])
{
    int numeroAleatorio;

    char seguirLanzando;

    DeterminarOrdenDeJugadores(vecNombreJugadores, vecTiradaDeDados);

    for(int i=0; i<5; i++)
    {
        seguirLanzando = ' ';


        while(seguirLanzando != 'N')
        {
            cout << "GRAN CERDO" << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << vecNombreJugadores[0] << ": 43 trufas acumuladas" << vecNombreJugadores[1] << ": 22 trufas acumuladas" << endl;
            cout << "TURNO DE PEPPA" << endl;
            cout << "+-------------------------+" << endl;
            cout << "| RONDAS #" << i + 1 << endl;
            cout << "| TRUFAS DE LA RONDA: 13 |" << endl;
            cout << "| LANZAMIENTOS: 3 |" << endl;


            numeroAleatorio = GenerarNumeroAleatorio();
            cout << "+-------------------------+" << endl;
            cout << "LANZAMIENTO #4" << endl;

            DibujarDadoAleatorio(numeroAleatorio);
            cout << "¡Sumaste 14 trufas!" << endl;
            cout << "¿Continuar? (S/N)" << endl;
            cin >> seguirLanzando;
            ValidarRespuestaPorCaracter(seguirLanzando);


            system("cls");
        }
    }

}











