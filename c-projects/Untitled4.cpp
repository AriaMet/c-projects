#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int r,x,N,guess,i=0,min,max;
	int d=1,count=0,human=0,comp=0;
	while(d!=0){
	do{
	printf("Dwse megisto arithmo gia ton kryfo arithmo.\n");
	scanf("%d",&x);
	if(x<=100){
		printf("O arithmos tha prepei na einai megalyteros apo 100.\n");
	}
	}while(x<=100);
	do
	{
	    r = rand();
	} while (r <1 || r>x);
	
	do{
	printf("Dwse megisto arithmo prospatheiwn.\n");
	scanf("%d",&N);	
	if(N<3){
		printf("O arithmos prospatheiwn prepei na einai apo 3 kai panw.\n");
	}
	}while(N<3);
	min=1;
	max=x;
	do{
	printf("Mantepse ton  arithmo :");
	scanf("%d",&guess);
	i++;
	if(guess<r){
		printf("O arithmos einai mikroteros apo tn krufo arithmo.\n");
		min=guess;
	}else if(guess>r){
		printf("O arithmos einai megalyteros apo tn krufo arithmo.\n");
		max=guess;
	}else if(guess==r){
		printf("Vrhkes ton kryfo arithmo.\n");
		break;
	}
	if(i==N){
		break;
	}
	}while(i!=N && (guess>=min && guess<=max));
	if(guess!=r){
		comp++;
	}else{
		human++;
	}
	count++;
	printf("Theleis na ksanapaikseis?\n");
	printf("1 gia nai 0 gia oxi\n");
	scanf("%d",&d);
	}
	
	printf("Synolikos arithmos paixndiwn: %d\n",count);
	printf("Nikes ypologisth: %d\n",comp);
	printf("Nikes anthrwpou :%d\n",human);
	if(comp<human){
		printf("Nikhths einai o anthrwpos!");
	}else{
		printf("Nikhths einai o ypologisths!");
	}	
	return 0;
}	
