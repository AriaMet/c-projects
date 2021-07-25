#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ReadM(int Matrix[],int s){
	
	int i,x1,x2;
	
	for(i=0;i<s;i++){
		printf("Dwse time gia thn %d thesi:",i+1);
		scanf(" %d", &Matrix[i]);
		printf("\n");
	}	
}

int CountM(int M[],int r,int x,int y){
	int i,c;
	c=0;
	for(i=0;i<r;i++){
		if(M[i]>=x && M[i]<=y){
			c++;
		}
	}
	return c;
}

void SumStoOrio(int N[],int e,int k,int l){
	int i,sum;
	sum=0;
	
	for(i=0;i<e;i++){
		if(N[i]>=k && N[i]<=l){
			sum+=N[i];
		}
	}
	printf("\nTo athroisma twn arithmwn tou pinaka poy anhkoun sto [%d,%d] einai: %d",k,l,sum);
}
int main(int argc, char *argv[]) {
	
	int Arithmoi[7],x1,x2,a,t,plithos;

	ReadM(Arithmoi,7);
	
	printf("Dwse ta oria toy pediou.\n");\
	scanf(" %d %d", &x1,&x2);
	if( x2<x1){
		a=x2;
		t=x1;
	}else{
		a=x1;
		t=x2;
	}
	plithos=CountM(Arithmoi,7,a,t);
	printf("To plithos twn arithmwn einai : %d",plithos);
	SumStoOrio(Arithmoi,7,a,t);
		
	return 0;
}
