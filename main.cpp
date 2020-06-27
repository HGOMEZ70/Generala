///PRIMERO SE ENUMERA LAS LIBRERIAS QUE VIENE POR DEFECTO....................
#include<conio.h>
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<string.h>
# include<ctime>
using namespace std;

///DESPUES ENUMERAR LAS LIBRERIAS PROPIAS....................
#include "funciones.h"

int main(){
    system("color 4A");///El numero cambia el fondo la letra a los caracteres.
    const int t1=4, t15=15, t0=12, t=5, t2=2;
    int vec1[t1]={}, Jugador1[t0]={}, Jugador2[t0]={}, j, Puntaje[t2]={}, opcion=0;
    int tiro[t]={}, Rondas=0, Gene[t1]={}, salgo=0, Juegos;
    char Nombre1[t15]={}, Nombre2[t15]={};
    bool tirar=1, Jugado1[t0]={}, Jugado2[t0]={}, sigue=true;

    cout<<"Menu_1_Solitario o Versus..";
    cout<<"\n\n\n\t\tINDIQUE EL MODO EN EL QUE DESEA JUGAR\n";
	cout<<"\n\t\t1. Modalidad Solitario"<<"\t"<<endl;
	cout<<"\n\t\t2. Modalidad 2 Prticipantes"<<endl;
	cout<<"\n\t\t1- Solitario, 2- Versus "; cin>>Juegos;
	system("cls");
    switch(Juegos){
    case 2:
    while(opcion!=3){ ///-----------PARA CARGAR LOS NOMBRES------------------------------
    cout<<"Menu_Jugador "<<endl<<endl;
	cout<<"\n\n\t\tBIENVENIDO AL JUEGO GENERALA\n"<<endl;
	cout<<"\n\t\t1. Primer jugador"<<"\t"<<Nombre1<<endl;
	cout<<"\n\t\t2. Segundo Jugador"<<"\t"<<Nombre2<<endl;
	cout<<"\n\t\t3. Iniciar la Partida"<<endl; ///si no cargaron los nombres mostrar un mensaje de error
    cout<<"\n\t\tOpcion: "; cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"\n\t\Ingrese Nombre del Primer jugador  "; cin>>Nombre1;
            break;
		case 2:
			cout<<"\n\t\Ingrese Nombre del Segundo jugador  "; cin>>Nombre2;
            break;
		case 3:
            break;
		}
        system("cls");
		}
    while(sigue==true){
        Rondas++;

        j=0;///TURNO DEL JUGADOR1, USADO PARA TOMAR EL INDICE DEL VECTOR PUNTAJE Y SUMAR PUNTOS OBTENIDOS
        ///Muestra los Nombres y el puntaje de ambos
        Menu_Inicio(Nombre1, Nombre2, Puntaje, t2, Rondas, j, Jugador1, Jugador2, t0);
        ///Muestra los dados, las opciones de tiros y cual es la combinacion de mayor puntaje
        Menu_tirar(Nombre1, tiro, t, Jugador1, Jugado1, t0);
        Sumar_Pun(Jugador1, t0, Puntaje, t2, j);///SUMA EL PUNTAJE AL VECTOR PUNTAJE
        ///Muestra las combinaciones jugadas
        Menu_combinaciones(Nombre1, tiro, t, Jugador1, Jugado1, t0);


        j=1;///TURNO DEL JUGADOR2 Y USADO PARA TOMAR EL INDICE DEL VECTOR PUNTAJE Y SUMAR PUNTOS OBTENIDOS
        ///Muestra los nombres y el puntaje de ambos
        Menu_Inicio(Nombre1, Nombre2, Puntaje, t2, Rondas, j, Jugador1, Jugador2, t0);
        ///Muestra los dados, las opciones de tiros y cual es la combinacion de mayor puntaje
        Menu_tirar(Nombre2, tiro, t, Jugador2, Jugado2, t0);
        Sumar_Pun(Jugador2, t0, Puntaje, t2, j);///SUMA EL PUNTAJE AL VECTOR PUNTAJE
        ///Muestra las combinaciones jugadas
        Menu_combinaciones(Nombre2, tiro, t, Jugador2, Jugado2, t0);

    salgo=Jugador1[10]+Jugador1[11]+Jugador2[10]+Jugador2[11];
    if((salgo>0) || (Rondas==10)){sigue=false;}
    }
    break;
        case 1:
            ///PARA JUGAR SOLITARIO
    while(opcion!=2){ ///-----------PARA CARGAR LOS NOMBRES------------------------------
    cout<<"Menu_Jugador "<<endl<<endl;
	cout<<"\n\n\t\t\tBIENVENIDO AL JUEGO GENERALA\n"<<endl;
    cout<<"\n\t\t1- Nombre del Jugador:  "<<Nombre1;
	cout<<"\n\t\t2- Iniciar la Partida: "<<endl; ///si no cargaron los nombres mostrar un mensaje de error
    cout<<"\t\tOpcion: "; cin>>opcion;
    switch(opcion){
        case 1:
        cout<<"\n\t\Ingrese Nombre del jugador  "; cin>>Nombre1;
        break;
        case 2:
        break;
        system("cls");
    }
    system("cls");
		}
    while(sigue==true){
        Rondas++;

        j=0;///TURNO DEL JUGADOR SOLITARIO, USADO PARA TOMAR EL INDICE DEL VECTOR PUNTAJE Y SUMAR PUNTOS OBTENIDOS
        ///Muestra los Nombres y el puntaje de ambos
        Menu_Inicio_sol(Nombre1, Puntaje, t2, Rondas, j, Jugador1, t0);
        ///Muestra los dados, las opciones de tiros y cual es la combinacion de mayor puntaje
        Menu_tirar(Nombre1, tiro, t, Jugador1, Jugado1, t0);
        Sumar_Pun(Jugador1, t0, Puntaje, t2, j);///SUMA EL PUNTAJE AL VECTOR PUNTAJE
        ///Muestra las combinaciones jugadas
        Menu_combinaciones(Nombre1, tiro, t, Jugador1, Jugado1, t0);


/**        j=1;///TURNO DEL JUGADOR2 Y USADO PARA TOMAR EL INDICE DEL VECTOR PUNTAJE Y SUMAR PUNTOS OBTENIDOS
        ///Muestra los nombres y el puntaje de ambos
        Menu_Inicio(Nombre1, Nombre2, Puntaje, t2, Rondas, j, Jugador1, Jugador2, t0);
        ///Muestra los dados, las opciones de tiros y cual es la combinacion de mayor puntaje
        Menu_tirar(Nombre2, tiro, t, Jugador2, Jugado2, t0);
        Sumar_Pun(Jugador2, t0, Puntaje, t2, j);///SUMA EL PUNTAJE AL VECTOR PUNTAJE
        ///Muestra las combinaciones jugadas
        Menu_combinaciones(Nombre2, tiro, t, Jugador2, Jugado2, t0);*/

        salgo=Jugador1[10]+Jugador1[11]+Jugador2[10]+Jugador2[11];
        if(salgo>0 || Rondas == 10){ sigue=false;}
    }
            break;
    }

        if(Jugador1[10]>0){
            Gene[0]=1;
            sigue=false;
        }else{
        if(Jugador1[11]>0){
            Gene[1]=1;
            sigue=false;
            }}
        if(Jugador2[10]>0){
            Gene[2]=1;
            sigue=false;
            }else{
            if(Jugador2[11]>0){
                Gene[3]=1;
                sigue=false;
                }}
        if(Rondas==2){
            sigue=false;
            }
    Menu_Resultado(Nombre1, Nombre2, t15, Puntaje, t2, Gene, t1);
    system("cls");
    return 0;
}
