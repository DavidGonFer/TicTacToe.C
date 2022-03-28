//Aqui est� mi 3 en raya, se necesita el buen hacer del usuario para jugar ya que las X o las O se pueden solapar 1 encima de la otra
#include<stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
	//inicializacion
	char a[3][3]={{49,50,51},{52,53,54},{55,56,57}};
	int i,j,ganar=0,turno=0,pos;
	
	
	
	
	//esto apunta hacia nuestra consola
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//esto aplica el color, lo usar� cada vez que quiera visualizar el tablero
	SetConsoleTextAttribute(hConsole, 9);
	
	
	
	
	do{
		//visualizacion del tablero
		printf("   _____\n  |__  /   ___  ____     _________ ___  ______ _\n   /_ <   / _ \\/ __ \\   / ___/ __ `/ / / / __ `/\n ___/ /  /  __/ / / /  / /  / /_/ / /_/ / /_/ / \n/____/   \\___/_/ /_/  /_/   \\__,_/\\__, /\\__,_/\n                                 /____/      de David Gonzalez");
		printf("\n\nBienvenidos, para jugar al 3 en raya necesitareis ser 2 personas \n");
		printf("\nJugador: 1  tu seras las X\nJugador: 2  tu seras las O\n");
		SetConsoleTextAttribute(hConsole, 158);
		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,194,196,196,196,196,196,194,196,196,196,196,196,191,  179,179,179,179,      179,a[0][0],179,a[0][1],179,a[0][2],179,  179,179,179,179,  195,196,196,196,196,196,197,196,196,196,196,196,197,196,196,196,196,196,180,  179,179,179,179,     179,a[1][0],179,a[1][1],179,a[1][2],179,   179,179,179,179,  195,196,196,196,196,196,197,196,196,196,196,196,197,196,196,196,196,196,180,  179,179,179,179,  179,a[2][0],179,a[2][1],179,a[2][2],179, 179,179,179,179,  192,196,196,196,196,196,193,196,196,196,196,196,193,196,196,196,196,196,217 );
		SetConsoleTextAttribute(hConsole, 9);
		
		
		
		
		//introduccion de datos en el tablero
		printf("Jugador: %i, elige posicion: ",(turno%2)+1);
		scanf("%i",&pos);
		if(pos==1 && ((turno%2)+1)==1){
			a[0][0]='X';
		}else if(pos==1 && ((turno%2)+1)==2){
			a[0][0]='O';
		}else if(pos==2 && ((turno%2)+1)==1){
			a[0][1]='X';
		}else if(pos==2 && ((turno%2)+1)==2){
			a[0][1]='O';
		}else if(pos==3 && ((turno%2)+1)==1){
			a[0][2]='X';
		}else if(pos==3 && ((turno%2)+1)==2){
			a[0][2]='O';
		}else if(pos==4 && ((turno%2)+1)==1){
			a[1][0]='X';
		}else if(pos==4 && ((turno%2)+1)==2){
			a[1][0]='O';
		}else if(pos==5 && ((turno%2)+1)==1){
			a[1][1]='X';
		}else if(pos==5 && ((turno%2)+1)==2){
			a[1][1]='O';
		}else if(pos==6 && ((turno%2)+1)==1){
			a[1][2]='X';
		}else if(pos==6 && ((turno%2)+1)==2){
			a[1][2]='O';
		}else if(pos==7 && ((turno%2)+1)==1){
			a[2][0]='X';
		}else if(pos==7 && ((turno%2)+1)==2){
			a[2][0]='O';
		}else if(pos==8 && ((turno%2)+1)==1){
			a[2][1]='X';
		}else if(pos==8 && ((turno%2)+1)==2){
			a[2][1]='O';
		}else if(pos==9 && ((turno%2)+1)==1){
			a[2][2]='X';
		}else if(pos==9 && ((turno%2)+1)==2){
			a[2][2]='O';
		}
		
		//validacion de las posibles combinaciones ganadoras
		if(turno>=4){
			if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')||(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')){//fila horizontal del tablero 1 2 3
				ganar=1;
			}else if((a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')||(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')){//linea diagonal del tablero 1 5 9
				ganar=1;
			}else if((a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')||(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')){//linea vertical del tablero 1 4 7
				ganar=1;
			}else if((a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')||(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')){//linea horizontal del tablero 4 5 6
				ganar=1;
			}else if((a[2][0]=='X' && a[1][1]=='X' && a[0][2]=='X')||(a[2][0]=='O' && a[1][1]=='O' && a[0][2]=='O')){//linea diagonal del tablero 7 5 3
				ganar=1;
			}else if((a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')||(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O')){//linea vertical del tablero 2 5 8
				ganar=1;
			}else if((a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')||(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')){//linea horizontal del tablero 7 8 9
				ganar=1;
			}else if((a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')||(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O')){//linea vertical del tablero 3 6 9
				ganar=1;
			}
		}
		
		//hago esto para si hay condicion de que se ha ganado, guarde quien lo ha hecho
		if(ganar==0){
			turno++;
		}
		system("cls");//limpio la consola cada turno
	}while(ganar==0 && turno<9);
	
	//visualizacion del ganador, por orden: jugador 1, jugador 2, empate
	
	if((turno%2)+1==1 && ganar==1){
		printf("       _                       __              ___                              __\n      (_)_  ______ _____ _____/ /___  _____   <  /  ____ _____ _____  ____     / /\n     / / / / / __ `/ __ `/ __  / __ \\/ ___/   / /  / __ `/ __ `/ __ \\/ __ \\   / / \n    / / /_/ / /_/ / /_/ / /_/ / /_/ / /      / /  / /_/ / /_/ / / / / /_/ /  /_/  \n __/ /\\__,_/\\__, /\\__,_/\\__,_/\\____/_/      /_/   \\__, /\\__,_/_/ /_/\\____/  (_)   \n/___/      /____/                                /____/                           \n");
		printf("\ncon su hermosa jugada:\n");	
		SetConsoleTextAttribute(hConsole, 158);
		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,194,196,196,196,196,196,194,196,196,196,196,196,191,  179,179,179,179,      179,a[0][0],179,a[0][1],179,a[0][2],179,  179,179,179,179,  195,196,196,196,196,196,197,196,196,196,196,196,197,196,196,196,196,196,180,  179,179,179,179,     179,a[1][0],179,a[1][1],179,a[1][2],179,   179,179,179,179,  195,196,196,196,196,196,197,196,196,196,196,196,197,196,196,196,196,196,180,  179,179,179,179,  179,a[2][0],179,a[2][1],179,a[2][2],179, 179,179,179,179,  192,196,196,196,196,196,193,196,196,196,196,196,193,196,196,196,196,196,217 );
		SetConsoleTextAttribute(hConsole, 9);
	}else if((turno%2)+1==2 && ganar==1){
		printf("       _                       __              ___                                 __\n      (_)_  ______ _____ _____/ /___  _____   |__ \\    ____ _____ _____  ____     / /\n     / / / / / __ `/ __ `/ __  / __ \\/ ___/   __/ /   / __ `/ __ `/ __ \\/ __ \\   / / \n    / / /_/ / /_/ / /_/ / /_/ / /_/ / /      / __/   / /_/ / /_/ / / / / /_/ /  /_/  \n __/ /\\__,_/\\__, /\\__,_/\\__,_/\\____/_/      /____/   \\__, /\\__,_/_/ /_/\\____/  (_)   \n/___/      /____/                                   /____/                           \n");
		printf("\ncon su hermosa jugada:\n");	
		SetConsoleTextAttribute(hConsole, 158);
		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c     %c     %c     %c\n%c  %c  %c  %c  %c  %c  %c\n%c     %c     %c     %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,194,196,196,196,196,196,194,196,196,196,196,196,191,  179,179,179,179,      179,a[0][0],179,a[0][1],179,a[0][2],179,  179,179,179,179,  195,196,196,196,196,196,197,196,196,196,196,196,197,196,196,196,196,196,180,  179,179,179,179,     179,a[1][0],179,a[1][1],179,a[1][2],179,   179,179,179,179,  195,196,196,196,196,196,197,196,196,196,196,196,197,196,196,196,196,196,180,  179,179,179,179,  179,a[2][0],179,a[2][1],179,a[2][2],179, 179,179,179,179,  192,196,196,196,196,196,193,196,196,196,196,196,193,196,196,196,196,196,217 );
		SetConsoleTextAttribute(hConsole, 9);
	}else{
		printf("                              __     \n  ___  ____ ___  ____  ____ _/ /____ \n / _ \\/ __ `__ \\/ __ \\/ __ `/ __/ _ \\\n/  __/ / / / / / /_/ / /_/ / /_/  __/\n\\___/_/ /_/ /_/ .___/\\__,_/\\__/\\___/ \n             /_/                     \n");
	}
	
	fflush(stdin);
	getchar();
}
