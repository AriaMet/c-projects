#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int i,d,s,a,m,mg1c=0,mg2c=0,mg3c=0,men=0,marks1=0,marks2=0,marks3=0,m4=0,m8=0;
	int women=0;wg1c=0,wg2c=0,wg3c=0,wm1=0,wm2=0,wm3=0,w4=0,w8=0;
	float avm1,avm2,avm3,avw1,avw2,avw3;
	
	d=1;
	while (d!=2){
		do{
		printf("Choose sex\n1. Man\n2. Woman\n");
		printf("Type your option:");
		scanf("%d",&s);
		if(s!=1 && s!=2){
			printf("\nError in options.");
		}
		}while(s!=1 && s!=2);
		
		do{
		printf("Choose age\n1.Less or equal to 30\n2. From 31 to 55\n3. Greater or equal to 56\n");
		printf("Type your option:");
		scanf("%d",&a);
		if(a!=1 && a!=2 && a!=3){
			printf("\nError in options.");
		}
		}while(a!=1 && a!=2 && a!=3);
		
		do{
		printf("Mark the product\n");
		printf("Type the consumer's mark:");
		scanf("%d",&m);
		if(m<0 || m>10){
			printf("\nMark must be (0-10).");
		}
		}while(m<0|| m>10);		
		
		if(s==1){
			men++;
			if(a==1){
				mg1c++;
				marks1+=m;
			}else if(a==2){
				mg2c++;
				marks2+=m;
			}else{
				mg3c++;
				marks3+=m;
			}
			if(m<=4){
				m4++;
			}else if(m>=8){
				m8++;
			}
		}else if(s==2){
			women++;
			if(a==1){
				wg1c++;
				wm1+=m;
			}else if(a==2){
				wg2c++;
				wm2+=m;
			}else{
				wg3c++;
				wm3+=m;
			}
			if(m<=4){
				w4++;
			}else if(m>=8){
				w8++;
			}
		}
		do{
			printf("1. New Entry \n2. Exit\n");
			printf("Type your choice:");
			scanf("%d",&d);
		}while(d!=1 && d!=2);
	}
	avm1=marks1/mg1c(float);
	avm2=marks2/mg2c(float);
	avm3=marks3/mg3c(float);
	printf("Men by age\n");
	printf("Average for 1 group is %f \n",avm1);
	printf("Average for 2 group is %f\n",avm2);
	printf("Average for 3 group is %f\n",avm3);
	printf("Men with a mark greater than 8 \n");
	printf("for 1 group is %d",m8);
	
	
	
	return 0;
}
