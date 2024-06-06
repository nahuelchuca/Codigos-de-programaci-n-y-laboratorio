//Se realiz� un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos
//efect�a 10 disparos, registrando las coordenadas (x, y) de cada disparo. Indicar
//cu�ntos disparos se produjeron en cada cuadrante y cuantos dieron en el blanco.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
    srand(time(NULL));

    int CantidadDeParticipantes=5, CantidadDeDisparos=10;
    char Participantes[100][5];
    int disparosX, disparosY;
    int AcumuladorCuadrante1, AcumuladorCuadrante2, AcumuladorCuadrante3, AcumuladorCuadrante4, AcumuladorBlanco;
    int Puntaje[CantidadDeParticipantes];

    //Inicializar los acumuladores
    AcumuladorBlanco=0;
    AcumuladorCuadrante1=0;
    AcumuladorCuadrante2=0;
    AcumuladorCuadrante3=0;
    AcumuladorCuadrante4=0;

    printf("Bienvenido al juego\n");
    printf("Presione enter para continuar\n");
    getch();
    system("cls");

    for(int i=0;i<CantidadDeParticipantes;i++){
        printf("Ingrese el nombre del participante[%d]\n",i+1);
        scanf("%s",Participantes[i]);
        system("cls");
    }

    printf("Presione enter para continuar\n");
    getch();
    system("cls");

    for(int j=0;j<CantidadDeParticipantes;j++){
        printf("Turno del participante [%s]\n",Participantes[j]);
        printf("Presione enter para continuar\n");
        getch();
        system("cls");

        for(int i=0;i<CantidadDeDisparos;i++){
            disparosX=((rand()%21)-10);
            //printf("\n%d",disparosX);
            disparosY=((rand()%21)-10);
            //printf("\t %d\n",disparosY);
            //printf("------------\n");
            if(disparosX>=0 && disparosY>0){
                AcumuladorCuadrante1=AcumuladorCuadrante1+1;
            }
            if(disparosX<0 && disparosY>=0){
                AcumuladorCuadrante2=AcumuladorCuadrante2+1;
            }
            if(disparosX<0 && disparosY<0){
                AcumuladorCuadrante3=AcumuladorCuadrante3+1;
            }
            if(disparosX>=0 && disparosY<0){
                AcumuladorCuadrante4=AcumuladorCuadrante4+1;
            }
            if(disparosX==0 && disparosY==0){
                AcumuladorBlanco=AcumuladorBlanco+1;
        }
    }
    printf("Disparos en el cuadrante 1: %d\n",AcumuladorCuadrante1);
    printf("Disparos en el cuadrante 2: %d\n",AcumuladorCuadrante2);
    printf("Disparos en el cuadrante 3: %d\n",AcumuladorCuadrante3);
    printf("Disparos en el cuadrante 4: %d\n",AcumuladorCuadrante4);
    printf("Disparos en el blanco: %d\n",AcumuladorBlanco);

    if(AcumuladorBlanco){
        Puntaje[j]=AcumuladorBlanco;
        printf("\nPuntaje: %d\n",Puntaje[j]);
    }
    printf("\nPresione enter para continuar\n");
    getch();
    system("cls");
    }

    printf("Puntaje de los participantes\n");
    for(int i=0;i<CantidadDeParticipantes;i++){
        printf("%s:\n",Participantes[i]);
        printf("\t%d\n",Puntaje[i]);
    }
    getch();
    return 0;
}
