#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	char type;
	int e;
	float ypol;
	
	printf("Ypoloipo kartas :");
	scanf("%f",&ypol);
	
	printf("\nDikykla:D\tEpivatika:E\tForthga:F \n");
	do{		
	printf("Typos troxoforoy");
	scanf("%c",&type);
	type=toupper(type);
	
	}while(type!='D' && type!='E' && type!='F');
	
	if(type=='D'){
		printf(" \n To antitimo twn diodiwn einai 5 euro \n");
		e=5;
	}else if(type=='E'){
		printf("To antitimo twn diodiwn einai 8 euro \n");
		e=8;
	}else if(type=='F'){
		printf("To antitimo twn diodiwn einai 15 euro \n");
		e=15;
	}
	
	if(ypol>=e){
		ypol=ypol-e;
		printf("Neo ypoloipo kartas: %f euro",ypol);
	}else if(ypol<e){
		ypol=0;
		printf("H karta mhdenistike \n");
		printf("Poso poy prepei na plhrwthei: %d euro", e);
	}else{
		printf("H karta den exei ypoloipo \n");
		printf("Poso poy apomenei na plhrwthei: %d euro", e);
	}
	
	
	return 0;
}
