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
    int vec1[t1]={}, Jugador1[t0]={}, Jugador2[t0]={}, j, Puntaje[t2]={}, opcion=1;
    int tiro[t]={}, Rondas=0, Gene[t1]={}, salgo=0, Juegos=0, longchar=0;
    char Nombre1[t15]={}, Nombre2[t15]={};
    bool tirar=1, Jugado1[t0]={}, Jugado2[t0]={}, sigue=true;
///ESTE WHILE HACE QUE EL PROGRAMA TERMINE CUANDO LE INDIQUE QUE DESEA SALIR DEL PROGRAMA
    while(Juegos !=3){
    cout<<"Menu_1_Solitario, Versus o de Salida del Juego..";
    cout<<"\n\n\n\t\tINDIQUE EL MODO EN EL QUE DESEA JUGAR\n";
	cout<<"\n\t\t1. Modalidad Solitario"<<"\t"<<endl<<endl;
	cout<<"\n\t\t2. Modalidad 2 Participantes"<<endl<<endl;
	cout<<"\n\t\t3. Salir del Juego "<<endl<<endl;
	cout<<"\n\t\t1- Solitario, 2- Versus, 3- Salir "; cin>>Juegos;
	system("cls");
    switch(Juegos){
    case 2:
        Nombre1[t15]={}; Nombre2[t15]={};
    while(opcion!=4){ ///-----------PARA CARGAR LOS NOMBRES------------------------------
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
		    if(strlen(Nombre1)>0 && strlen(Nombre2)>0){
            opcion=4;
		    break;
		    }else{
            cout<<"Deberá ingresar el o los nombres de Jugador/es \n";
            system("pause");
            }
        default:
            cout<<"Elija una opcion del menu\n";
            break;
		}
        system("cls");
		}

    sigue=true;
    while(sigue==true){///INICIA EL JUEGO DE DOS PARTICIPANTES
        Rondas++;
        ///PRIMER TURNO
        j=0;///TURNO DEL JUGADOR1, USADO PARA TOMAR EL INDICE DEL VECTOR PUNTAJE Y SUMAR PUNTOS OBTENIDOS
        ///Muestra los Nombres y el puntaje de ambos
        Menu_Inicio(Nombre1, Nombre2, Puntaje, t2, Rondas, j, Jugador1, Jugador2, t0);
        ///Muestra los dados, las opciones de tiros y cual es la combinacion de mayor puntaje
        Menu_tirar(Nombre1, tiro, t, Jugador1, Jugado1, t0);
        Sumar_Pun(Jugador1, t0, Puntaje, t2, j);///SUMA EL PUNTAJE AL VECTOR PUNTAJE
        ///Muestra las combinaciones jugadas
        Menu_combinaciones(Nombre1, tiro, t, Jugador1, Jugado1, t0);

        ///SEGUNDO TURNO
        j=1;///TURNO DEL JUGADOR2 Y USADO PARA TOMAR EL INDICE DEL VECTOR PUNTAJE Y SUMAR PUNTOS OBTENIDOS
        ///Muestra los nombres y el puntaje de ambos
        Menu_Inicio(Nombre1, Nombre2, Puntaje, t2, Rondas, j, Jugador1, Jugador2, t0);
        ///Muestra los dados, las opciones de tiros y cual es la combinacion de mayor puntaje
        Menu_tirar(Nombre2, tiro, t, Jugador2, Jugado2, t0);
        Sumar_Pun(Jugador2, t0, Puntaje, t2, j);///SUMA EL PUNTAJE AL VECTOR PUNTAJE
        ///Muestra las combinaciones jugadas
        Menu_combinaciones(Nombre2, tiro, t, Jugador2, Jugado2, t0);
        salgo=Jugador1[10]+Jugador1[11]+Jugador2[10]+Jugador2[11];
        if((salgo>0) || (Rondas==10)){
            sigue=false;
            Menu_Resultado(Nombre1, Nombre2, t15, Puntaje, t2, Jugador1, Jugador2, t0);///RESULTADO VERSUS
            system("pause");

        }
    }
    break;///DEL CASE 2
    case 1:
        Nombre1[t15]={};
    while(opcion!=3){ ///INICIA EL JUEGO PARA JUGAR SOLITARIO
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
		    if(strlen(Nombre1)>0){
            opcion=3;
		    break;
		    }else{
            cout<<"Deberá ingresar el nombre del Jugador \n";
            system("pause");
        system("cls");}
    }
    system("cls");
		}

    sigue=true;
    while(sigue==true){
        Rondas++;
        j=0;///TURNO DEL JUGADOR SOLITARIO, USADO PARA TOMAR EL INDICE DEL VECTOR PUNTAJE Y SUMAR PUNTOS OBTENIDOS
        Menu_Inicio_sol(Nombre1, Puntaje, t2, Rondas, j, Jugador1, t0);///Muestra los Nombres y el puntaje de ambos
        ///Muestra los dados, las opciones de tiros y cual es la combinacion de mayor puntaje
        Menu_tirar(Nombre1, tiro, t, Jugador1, Jugado1, t0);
        Sumar_Pun(Jugador1, t0, Puntaje, t2, j);///SUMA EL PUNTAJE AL VECTOR PUNTAJE
        ///Muestra las combinaciones jugadas
        Menu_combinaciones(Nombre1, tiro, t, Jugador1, Jugado1, t0);

        salgo=Jugador1[10]+Jugador1[11];
        if(salgo>0 || Rondas == 10){
            sigue=false;
            Menu_Resultado_sol(Nombre1, t15, Puntaje, t2, Jugador1, t0);///RESULTADO SOLITARIO
            system("pause");
    }}
    break; ///DEL CASE 1
    case 3:
        cout<<"\n\n\n\t\t::::::::::::FIN DEL JUEGO GRACIAS POR UTILIZAR:::::::::::::::::::::::::::\n\n\n\n\n";
        system("PAUSE");
    break; ///DEL CASE 3
    default:
        cout<<"Debe ingresar una opcion del menu\n";
        system("PAUSE");
    break;
    }
      }///fin while inicial
    system("cls");
    return 0;
}
