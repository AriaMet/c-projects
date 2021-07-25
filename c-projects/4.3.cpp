#include <stdlib.h>
#include <stdio.h>

void ReadM(int M[],int s){
	int i,diaf,f1,f2;
	for(i=0;i<s;i++){
		do{
		printf("Dwse timh gia thn %d thesh:\n",i+1);
		printf("H timh prepei an einai megalyterh apo thn prohgoymenh toulaxiston kata 5 \n");
		scanf("%d",&M[i]);
		f1=0;
		f2=0;
		for(diaf=0;diaf<i;diaf++){
			if(M[diaf]==M[i]){
				f1=1;
			}
			if(M[i-1]>=(M[i]-5)){
				f2=1;
			}	
		}
		}while(f1==1 || f2==1);
	}
}
void PrintM(int N[],int p){
	int j;
	for(j=0;j<p;j++){
		printf("%d \n",N[j]);
	}
}
int Replace(int B[],int o,int a,int b){
	int k,d;
	d=0;
	for(k=0;k<o;k++){
		if(B[k]<b){
			B[k]=a;
			d++;
		}
	}
	return d;
}
int main(int argc,char *argv[]){
	int Arithmoi[5],ta,ts,count;
	
	ReadM(Arithmoi,5);
	PrintM(Arithmoi,5);
	
	printf("Dwse timh antikatastashs: \n");
	scanf("%d",&ta);
	printf("Dwse timh sygkrishs: \n");
	scanf("%d",&ts);
	count=Replace(Arithmoi,5,ta,ts);
	printf("Eginan %d antikatastaseis",count);
	
	return 0;
}
