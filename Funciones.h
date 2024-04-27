#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;


int GenerarNumeroAleatorio();
void DeterminarOrdenDeJugadores(string vecNombreJugadores[], int vecTiradaDeDados[]);
void EmpezarJuego(string vecNombreJugadores[], int vecTiradaDeDados[]);
void DibujarDadoAleatorio(int numeroAleatorio);
void ValidarRespuestaPorCaracter(char &respuesta);

#endif // FUNCIONES_H_INCLUDED
