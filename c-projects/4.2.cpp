#include <stdio.h>
#include <stdlib.h>

void ReadM(int Matrix[],int s){
	int i;
	for(i=0;i<s;i++){
		printf("Dwse timh gia thn %d thesh:",i+1);
		scanf("%d",&Matrix[i]);
		printf("\n");
	}
}
int SumStoOrio(int M[],int r,int x,int y){
	int j,sum;
	sum=0;
	for(j=0;j<r;j++){
		if(M[j]>=x && M[j]<=y){
			sum+=M[j];
		}
	}
	return sum;
}
int CountM(int N[],int u,int k,int l){
	int h,c;
	c=0;
	for(h=0;h<u;h++){
		if(N[h]>=k && N[h]<=l){
			c++;
		}
	}
	return c;
}

int main(int argc, char *argv[]){
	int Arithmoi[5],x1,x2,sum,count,d,metrhths;
	metrhths=0;	
	while(d!=1){
	ReadM(Arithmoi,5);
	
	do{
	printf("Dwse moy to katw kai to anw orio.\n");
	scanf("%d",&x1);
	scanf("%d",&x2);
	}while(x1==x2 || x1>x2);
	
	sum=SumStoOrio(Arithmoi,5,x1,x2);
	count=CountM(Arithmoi,5,x1,x2);
	printf("Athroisma timwn pinaka sto orio: %d \n",sum);
	printf("Plhthos timwn pinaka sto orio: %d \n",count);
	
	printf("Thes na epanlapsh diadikasias? \n0 gia nai 1 gia na termatistei. \n");
	scanf("%d",&d);
	metrhths++;
	}
	return  0;
}
