#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<string.h>
#include<ctime>
using namespace std;
#include "funciones.h"

void Cargar_vector(int v1[], int tam){
    int i;
    for(i=0; i<tam; i++){
        v1[i]=0;}
}

void Mostrar_vector(int v1[], int tam){
    int i;
    cout<<"Se ingresaron los siguientes numeros:\n";
    for(i=0; i<tam; i++){
        cout<<v1[i]<<"\t";
    }}

void Menu_Resultado(char Nombre1[], char Nombre2[], int t15, int Puntaje[], int t2, int Gene[], int t1){

    cout<<"Menu_Resultado "<<endl<<endl;
	cout<<"\n\n\t\tFINALIZACION DEL JUEGO\n"<<endl;
	cout<<"\n\t\t1. Primer jugador "<<"\t"<<Nombre1<<endl;
	cout<<" \t\t    Puntaje "<<Puntaje[0]<<endl;
	cout<<"\n\t\t2. Segundo Jugador"<<"\t"<<Nombre2<<endl;
	cout<<"\n\t\t   Puntaje "<<Puntaje[1]<<endl;
    cout<<endl<<endl;


                cout<<"\t\t..............RESULTADO..............\n";
                cout<<"\t\t:::::::::::::::::::::::::::::::::::::\n";

        if((Gene[1]==1)&&(Gene[3]==1)){
                cout<<"\t\t......EMPATE POR GENERALA DOBLE......\n";
        }else{
        if((Gene[0]==1)&&(Gene[2]==1)){
                cout<<"\t\t.....EMPATE POR GENERALA SERVIDA.....\n";
        }else{
        if(Gene[0]==1){
                    cout<<"\t\t::::::::::::"<<Nombre1<<":::::::::::::\n";
                    cout<<"\t\t:::::::::POR GENERALA SERVIDA:::::::::\n";
        }else{
        if(Gene[2]==1){
                    cout<<"\t\t::::::::::::"<<Nombre2<<":::::::::::::\n";
                    cout<<"\t\t:::::::::POR GENERALA SERVIDA:::::::::\n";
        }else{
        if(Gene[1]==1){
                    cout<<"\t\t::::::::::::"<<Nombre1<<":::::::::::::\n";
                    cout<<"\t\t::::::::::POR GENERALA DOBLE::::::::::\n";
        }else{
        if(Gene[3]==1){
                    cout<<"\t\t::::::::::::"<<Nombre2<<":::::::::::::\n";
                    cout<<"\t\t::::::::::POR GENERALA DOBLE::::::::::\n";
                    }
        } } } } }
            if(Puntaje[0]>Puntaje[1]){
                cout<<"\t\t::::::::::::"<<Nombre1<<"::::::::::::\n";
                }else{
                cout<<"\t\t::::::::::::"<<Nombre2<<"::::::::::::\n";
                }
        cout<<"\t\t::::::::::::::::::::::::::::::::::::::\n";
        cout<<"\n\t\t F  E  L  I  C  I  D  A  D  E  S\n\n\t\t";
    system("pause");
    system("cls");
}




///# 02
void Menu_Inicio(char nombre1[], char nombre2[], int Puntaje[], int t2, int Rondas, int j, int Jugador1[], int Jugador2[], int t0){ ///Inicia el Juego
    cout<<"Menu_Inicio "<<endl<<endl;
    cout<<"\n\t\t-----------------------------------------------\n";
	cout<<"\n\n\t\tMENU DEL DESARROLLO DEL JUEGO\n"<<endl<<endl;
	cout<<"\n\t\t RONDA "<<"\t\t"<<Rondas<<endl;
	if(j==0){
    cout<<"\n\n\t\t Proximo Turno "<<nombre1<<endl<<endl;
	}else{
        cout<<"\n\n\t\t Proximo Turno "<<nombre2<<endl<<endl;
	}
	cout<<"\n\t\t Puntaje "<<nombre1<<"\t"<<Puntaje[0]<<endl;
	cout<<"\n\t\t Puntaje "<<nombre2<<"\t"<<Puntaje[1]<<endl;
	cout<<"\n";
	cout<<"\n\t\t------------------------------------------------\n";
	cout<<"\n\t\t::::::::::::::::::::::::::::::::::::::::::::::::\n\t\t";

    system("pause");
}

void Tirar_dados(int tiros[], int otro){///ojo que debe asignar valores aleatorios
    int i, n;
    srand(time(NULL));
    for(i=0;i<otro;i++){
       tiros[i]=(rand()%6)+1;
     }}

///# 03
void Menu_tirar(char Nombre[], int tiro[], int t, int Jugador[], bool Jugado[], int t0){
    int opcion=0, vuelta=0, dado, cant, I, Tiros=0, suma1=0, Gen=0, Num;
    bool azar;
    Cargar_vector(tiro, t);
    cout<<"Indique de que manera desea ejecutar el programa \n";
    cout<<"Ingrese 0 para sin azar, 1 con azar: "; cin>>azar;

    system("cls");
    while(opcion!=4){
        vuelta++;
    cout<<"Mrnu_Tirar  ";
    cout<<"\n\n\nJugador "<<Nombre<<endl;
    cout<<"                DADOS    1°       2°       3°       4°       5°      ";
    cout<<"\n";
    cout<<"\n                \t "<<tiro[0]<<"\t  "<<tiro[1]<<"\t   "<<tiro[2]<<"\t    "<<tiro[3]<<"\t     "<<tiro[4];
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t\tMENU DE TIRADAS\n";
    cout<<"\t 1 - Primer tirada\n";
    ///if(Tiros==2){
    cout<<"\t 2 - Segunda y tercer tirada\n";///}
    cout<<"\t 3 - Cerrar el turno\n";
    cout<<"\n\t Opcion: "; cin>>opcion;
    switch(opcion){
    case 1:
        if(azar==true){  ///OPCION AZAR
        if(vuelta==1){
            srand(time(NULL));
            for(int i=0; i<5; i++){
                tiro[i]= 1 + rand()%(6);
        }}
        }else{
            cout<<"\n\t\tHAGAMOS TRAMPA \n";
            cout<<"\tTenga presente que solo debe ingresar numero 0<  dado  <7 ";
            cout<<"\t\t\t\tNo hay opcion de bloqueo\n";
            for(int i=0; i<5; i++){
                cout<<"\t\tIngrese el numero : ";
                cin>>tiro[i];
            }}
        if(Tiros==1){
            cout<<"\nNo puede volver a tirar con la Opcion 1\n";
            system("PAUSE");
            system("CLS");
            break;
        }
        Tiros++;///      Comprobacion generala en un tiro "tiro=1 y tiro[10]=50
        if((tiro[0]==tiro[1]) && (tiro[1]==tiro[2]) &&(tiro[2]==tiro[3]) &&(tiro[3]==tiro[4])&& (Tiros==1)&& (Jugado[10]==0)){
            cout<<"FELICITACIONES = GENERALA SERVIDA, SE HABILITA LA OPCION 1\n";
            Gen++;
            Jugador[10]=50;
            vuelta=0;
            system("PAUSE");
            }
            ///      Comprobacion generala doble en dos Tiros "tiro=1 y tiro[9]=50
        if((tiro[0]==tiro[1]) && (tiro[1]==tiro[2]) &&(tiro[2]==tiro[3]) &&(tiro[3]==tiro[4])&& (Tiros==2) && (Jugado[11]==0)){
            cout<<"FELICITACIONES = GENERALA DOBLE ";
            Gen++;
            Jugador[11]=100;
            system("PAUSE");
        }
        system("cls");
        break;
    case 2:
        if((vuelta>1) && (vuelta <4)){
        Tiros++;
        cout<<"\n         Cuantos dados desea Volver a tirar "; cin>>cant;
        srand(time(NULL));
        for(int j=0; j<cant; j++){
        cout<<"\n         Indique cual : ";
        cin>>dado;
        tiro[dado-1]= 1 + rand()%(6);
        }}
        system("cls");
        break;
    case 3:
        if(Tiros!=0){
            opcion=4;
        }else{
        cout<<"No puede salir del turno antes de tirar los dados";
        vuelta=0;
        system("PAUSE");
        system("cls");}
        break;
	}}
    Evaluar_combinacion(tiro, t, Jugador, Jugado, t0, Gen);
}

void Sumar_Pun(int Jugador[], int t0, int Puntaje[], int t2, int j){ ///Calculo el Puntaje
    Puntaje[j]=0;
    for(int i=0; i<t0; i++){
        Puntaje[j]+=Jugador[i];
    }}

void Evaluar_combinacion(int tiro[], int t, int Jugador[], bool Jugado[], int t0, int Gen){
    int Turno[t0]={}, aux=0, I, Men, Max;
    ///" 3 - ORDENO DE MENOR A MAYOR "
    int c=-1;
    for(int l=0; l<t; l++){
            c++;
            Men=tiro[c];
        for(int k=l; k<t; k++){
            if(l==k){
                Men=tiro[l];
                I=l;
            }else{
            if(tiro[k]<Men){
                Men=tiro[k];
                I=k;
            }}}
        aux=tiro[I];
        tiro[I]=tiro[l];
        tiro[l]=aux;
        }
        cout<<"\nSegun orden de los dados, corresponde .......\n";
    if(tiro[0]==tiro[1]&&tiro[1]==tiro[2]&&tiro[2]==tiro[3]&&tiro[3]==tiro[4]){
        Turno[9]=50;
        cout<<"\nGENERALA = "<<Turno[9]<<endl;} ///A=A=A=A=A
    if(( (tiro[0]==tiro[1]) && (tiro[2]==tiro[3]&&tiro[3]==tiro[4]) &&(tiro[0]!=tiro[2]) )||((tiro[0]==tiro[1]&&tiro[1]==tiro[2]) && (tiro[3]==tiro[4])&&(tiro[2]!=tiro[3]))){
        Turno[7]=30;
        cout<<"\nFULL =     "<<Turno[7]<<endl;} /// A=A y B=B=B
    if(((tiro[1]==tiro[2]&&tiro[2]==tiro[3]&&tiro[3]==tiro[4])&&(tiro[4]!=tiro[0]))||((tiro[1]==tiro[2]&& tiro[2]==tiro[3]&&tiro[3]==tiro[0])&&(tiro[0]!= tiro[4]))){
        Turno[8]=40;
        cout<<"\nPOKER =    "<<Turno[8]<<endl;}  /// A y B=B=B=B
    if((tiro[0]==1&&tiro[1]==2&&tiro[2]==3&&tiro[3]==4&&tiro[4]==5)||(tiro[0]==2&&tiro[1]==3&&tiro[2]==4&&tiro[3]==5&&tiro[4]==6)){
        Turno[6]=25;
        cout<<"\nESCALERA = "<<Turno[6]<<endl;}
    if(Gen==1){
        Turno[10]=50;
        Turno[9]=0;
        cout<<"\nGENERALA SERVIDA = "<<Turno[10]<<endl;
    }else{
        if(Gen==2){
        Turno[11]=100;
        Turno[10]=50;
        Turno[9]=0;
        cout<<"\nGENERALA DOBLE = "<<Turno[11]<<endl;}}

        cout<<"\nSegun sumatoria de Numeros .......\n";
    for(int y=0; y<t; y++){
        if(tiro[y]==1) {Turno[0]+=tiro[y];}
        if(tiro[y]==2) {Turno[1]+=tiro[y];}
        if(tiro[y]==3) {Turno[2]+=tiro[y];}
        if(tiro[y]==4) {Turno[3]+=tiro[y];}
        if(tiro[y]==5) {Turno[4]+=tiro[y];}
        if(tiro[y]==6) {Turno[5]+=tiro[y];}
    }
    for(int z=0; z<(t0); z++){/// BUSCO EL MAYOR RESULTADO DESCARTANDO EL jUGADO O YA COMPLETADO
        if((z==0) && (Jugado[z]==0)){Max=Turno[z]; I=z;
        }else{
        if((Turno[z]>Max) && (Jugado[z]==0)){Max=Turno[z]; I=z;}}}

        Jugador[I]=Turno[I];
        Jugado[I]=true;
        switch(I){
            case 0: cout<<"COMBINACION DE UNO"; break;
            case 1: cout<<"COMBINACION DE DOS"; break;
            case 2: cout<<"COMBINACION DE TRES"; break;
            case 3: cout<<"COMBINACION DE CUATRO"; break;
            case 4: cout<<"COMBINACION DE CINCO"; break;
            case 5: cout<<"COMBINACION DE SEIS"; break;
            case 6: cout<<"COMBINACION DE ESCALERA"; break;
            case 7: cout<<"COMBINACION DE FULL"; break;
            case 8: cout<<"COMBINACION DE POKER"; break;
            case 9: cout<<"COMBINACION DE GENERALA"; break;
            case 10: cout<<"COMBINACION DE GENERALA SERVIDA"; break;
            case 11: cout<<"COMBINACION DE GENERALA DOBLE"; break;
            }
        cout<<"\t\t CON EL PUNTAJE "<<Jugador[I]<<"  Jugado  "<<Jugado[I]<<endl;
    system("pause");
    system("CLS");
}

void Menu_combinaciones(char Nombre[], int tiro[], int t, int Jugador[], bool Jugado[], int t0){

    cout<<"\n\n\nMenu_Combinaciones ";
    cout<<"\n\t\t Jugador: "<<Nombre<<endl;
    cout<<"\n\n                DADOS    1°       2°       3°       4°       5°      ";
    cout<<"\n";
    cout<<"\n                \t "<<tiro[0]<<"\t  "<<tiro[1]<<"\t   "<<tiro[2]<<"\t    "<<tiro[3]<<"\t     "<<tiro[4];
    cout<<"\n";
    cout<<"\n\t-------------------------------------";
    cout<<"\n\tCOMBINACIONES |  Puntaje |   Jugado  ";
    cout<<"\n\t-------------------------------------\n";
    cout<<"\n\tA    uno            "<<Jugador[0]<<"\t\t"<<Jugado[0];
    cout<<"\n\tB    dos            "<<Jugador[1]<<"\t\t"<<Jugado[1];
    cout<<"\n\tC    tres           "<<Jugador[2]<<"\t\t"<<Jugado[2];
    cout<<"\n\tD    cuatro         "<<Jugador[3]<<"\t\t"<<Jugado[3];
    cout<<"\n\tE    cinco          "<<Jugador[4]<<"\t\t"<<Jugado[4];
    cout<<"\n\tF    seis           "<<Jugador[5]<<"\t\t"<<Jugado[5];
    cout<<"\n\tG    escalera       "<<Jugador[6]<<"\t\t"<<Jugado[6];
    cout<<"\n\tH    full           "<<Jugador[7]<<"\t\t"<<Jugado[7];
    cout<<"\n\tI    poker          "<<Jugador[8]<<"\t\t"<<Jugado[8];
    cout<<"\n\tJ    generala       "<<Jugador[9]<<"\t\t"<<Jugado[9];
    cout<<"\n\tJ    g_servida      "<<Jugador[10]<<"\t\t"<<Jugado[10];
    cout<<"\n\tJ    g_doble        "<<Jugador[11]<<"\t\t"<<Jugado[11];
    cout<<"  \n\n\t";
    system("PAUSE");
    system("CLS");
}

///SOLITARIO

void Menu_Inicio_sol(char nombre1[], int Puntaje[], int t2, int Rondas, int j, int Jugador1[], int t0){ ///Inicia el Juego
    cout<<"Menu_Inicio "<<endl<<endl;
    cout<<"\n\t\t-----------------------------------------------\n";
	cout<<"\n\n\t\tMENU DEL DESARROLLO DEL JUEGO\n"<<endl<<endl;
	cout<<"\n\n\t\t JUGADOR : "<<nombre1<<endl<<endl;
	cout<<"\n\t\t RONDA "<<"\t\t"<<Rondas<<endl;

	cout<<"\n\t\t Puntaje "<<nombre1<<"\t"<<Puntaje[0]<<endl;
	cout<<"\n";
	cout<<"\n\t\t------------------------------------------------\n";
	cout<<"\n\t\t::::::::::::::::::::::::::::::::::::::::::::::::\n\t\t";
    system("pause");
}

void Menu_Resultado_sol(char Nombre1[], int t15, int Puntaje[], int t2, int Gene[], int t1){

    cout<<"Menu_Resultado "<<endl<<endl;
	cout<<"\n\n\t\tFINALIZACION DEL JUEGO\n"<<endl;
	cout<<"\n\t\t1. JUGADOR "<<"\t"<<Nombre1<<endl;
	cout<<" \t\t    HAZ LOGRADO LA CANTIDAD DE "<<Puntaje[0]<<" PUNTOS."<<endl;
    cout<<endl<<endl;


                cout<<"\t\t..............RESULTADO..............\n";
                cout<<"\t\t:::::::::::::::::::::::::::::::::::::\n";

        if(Gene[0]==1){
                    cout<<"\t\t::::::::::::"<<Nombre1<<":::::::::::::\n";
                    cout<<"\t\t:::::::::POR GENERALA SERVIDA:::::::::\n";
        }else{
        if(Gene[1]==1){
                    cout<<"\t\t::::::::::::"<<Nombre1<<":::::::::::::\n";
                    cout<<"\t\t::::::::::POR GENERALA DOBLE::::::::::\n";
        } }
                    cout<<"\t\t::::::::::::::::::::::::::::::::::::::\n";
                    cout<<"\n\t\t F  E  L  I  C  I  D  A  D  E  S\n\n\t\t";
    system("pause");
    system("cls");
}
