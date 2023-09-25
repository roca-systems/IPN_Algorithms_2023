#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variables
	char cadena[100];
	int b;
//Mensaje de inicio
	printf("Este programa captura una cadena de maximo 100 caracteres y realiza unas funciones con ella\n");
	printf("Ingresa la cadena\n");
	gets(cadena);
//Menu
	printf("Selecciona la accion a realizar\n1.-Convertir todo a mayusculas\n2.-Convertir todo a minusculas\n3.-Oracion con mayuscula inicial\n");
	printf("4.-Mayuscula por cada palabra\n5.-Alternar mayusculas y minusculas\n");
	fflush(stdin);
	scanf("%d",&b);
//Opciones
	switch (b){
		case 1:{
			a(cadena);
			break;
		}
		case 2:{
			b1(cadena);
			break;
		}
		case 3:{
			c(cadena);
			break;
		}
		case 4:{
			d(cadena);
			break;
		}
		case 5:{
			e(cadena);
			break;
		}
	}
}

