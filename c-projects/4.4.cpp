#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ReadM(int Matrix[],int s){
	int i;
	for(i=0;i<s;i++){
		printf("Dwse time gia thn %d thesi:",i+1);
		scanf(" %d", &Matrix[i]);
		printf("\n");
	}	
}
void PrintM(int N[],int p){
	int j;
	for(j=0;j<p;j++){
		printf("%d \t",N[j]);
	}
	printf("\n");
}
void Reverse(int M[],int o){
	int k,T[5],h;
	h=0;
	for(k=o-1;k>=0;k--){
		T[h]=M[k];
		h++;
	}
	for(k=0;k<o;k++){
		M[k]=T[k];
		printf("%d\t",M[k]);
	}
	printf("\n");
}
void Replace(int B[],int u){
	int g;
	for(g=0;g<u;g++){
		if(B[g]<0){
			B[g]=abs(B[g]);
		}
	}
}
int Prwtos(int timh){
	int t;
	for(t=2;t<timh;t++){
		if(fmod(timh,t)==0){
			return 0;
		}
	}
	return 1;
}
int main(int argc, char *argv[]) {
	int Arithmoi[5],it,count;
	count=0;
	ReadM(Arithmoi,5);
	PrintM(Arithmoi,5);
	Reverse(Arithmoi,5);
	Replace(Arithmoi,5);
	for(it=0;it<5;it++){
		if(Prwtos(Arithmoi[it])==1){
			printf("O arithmos %d einai prwtos \n", Arithmoi[it]);
			count++;
		}	
	}
	printf("O pinakas exei %d prwtous arithmous.\n",count);

	return 0;
}
