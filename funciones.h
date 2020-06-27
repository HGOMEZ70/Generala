#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
///VAN LAS DECLARACIONES DE LAS FUNCIONES...

///Cargar vectores de tam pasado por parametro
void Cargar_vector(int [], int);

///Muestra los elementos del vector
void Mostrar_vector(int[], int);

///Muestro menu y cargo nombre de jugadores
///CARGA LOS NOMBRE DE LOS JUGADORES
void Menu_Jugador(char [], char [], int);

///Muestro menu Inicio de juego
void Menu_Inicio(char [], char[], int [], int, int, int, int[], int[], int);
void Menu_Inicio_sol(char [], int [], int, int, int, int[], int);

///Tirar los 5 dados de valores aleatorios
void Tirar_dados(int [], int);

///Calculo el Puntaje
///Sumar_Pun(Jugador1, Jugador2, t0, Puntaje, t2);
void Sumar_Pun(int [], int, int[], int, int);

///Menu tirar los dados.......
void Menu_tirar(char [],int[], int, int[], bool[], int); ///Menu_tirar(tiro, t, Jugador1, Jugado1, t0);

///Evalua las combinaciones y carga los vectores
void Evaluar_combinacion(int [], int, int [], bool [], int, int);

/// Menu para combinar los resultados
void Menu_combinaciones(char [], int [], int, int[], bool [], int);

///Menu resultado Muestra el resultado Final del Juego
void Menu_Resultado(char [], char [], int, int [], int, int [], int);
void Menu_Resultado_sol(char [], int, int [], int, int [], int);

#endif // FUNCIONES_H_INCLUDED
