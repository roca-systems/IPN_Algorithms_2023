//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
//Funcion que convierte cadena a mayusculas
int a(char *texto){
	int i;
	 int letras = strlen(texto);
    for (i=0; i<letras; i++){
     texto[i] = toupper(texto[i]);}
     printf("%s\n",texto);
}
//Funcion que convierte todo a minusculas
int b1(char *texto){
	int i;
	 int letras = strlen(texto);
    for (i=0; i<letras; i++){
     texto[i] = tolower(texto[i]);}
     printf("%s\n",texto);
	
}
//Funcion que pone la primera letra de la oracion en mayuscula
int c(char *texto){
		int i;
	int letras = strlen(texto);
    for (i=0; i<letras; i++){
     texto[i] = toupper(texto[i]);}
    for (i=0;i<letras; i++){
    	if(texto[i]!='\0'){
          texto[i+1] = tolower(texto[i+1]);}
	}
    printf("%s\n",texto);
}
//Funcion que pone la primera letra de cada palabra en mayuscula
int d(char *texto){
	int i;
	for(i=0;texto[i]!='\0';i++){
		if(texto[i]==' '){
			texto[i+1] = toupper(texto[i+1]);
		}
		if(isalpha(texto[i])!=0&&texto[i-1]!=' '){
			texto[i] = tolower(texto[i]);
		}
	}
	texto[0] = toupper(texto[0]);
	printf("%s\n",texto);
}
//Funcion que alterna entre minusculas y mayusculas
int e(char *texto){
	int i,j;
	 int letras = strlen(texto);
    for (i=0; i<=letras; i+=2){
    	if(texto[i]!=' '){
         texto[i] = toupper(texto[i]);}
	 for(j=1;j<=letras;j+=2){
	 	 if(texto[i]!=' '){
	       texto[j]=tolower(texto[j]);}
	 }
	}	
	 printf("%s\n",texto);
}

