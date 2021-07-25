#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int age;
	float w,h,dms;
	
	printf("Dwse moy thn hlikia \n");
	scanf("%d", &age);
	
	printf("Dwse moy to varos\n");
	scanf("%f", &w);
	
	printf("Dwse moy to ypsos\n");
	scanf("%f", &h);
	
	if(w<30.0 || w>180.0){ 
		printf("Lathos timh sto varos\n");
	}else if(h<0.5 || h>2.5){
		printf("Lathos timh sto ypsos\n");
	}else if(age<=18){
		printf("Den isxyei o deikths DMS\n");
	}else if(age>90){
		printf("Lathos timh sto ypsos\n");
	}else{
		dms=w/pow(h,2);
		if(dms<18.5){
			printf("%f \n",dms);
			printf("Adynato atomo \n");
		}else if(dms>=18.5 && dms<=25){
			printf("%f \n",dms);
			printf("Kanoniko atomo \n");
		}else if(dms>25 && dms<=30){
			printf("%f \n ",dms);
			printf("Vary atomo \n");
		}else if(dms>30){
			printf("%f \n ",dms);
			printf("Ypervaro atomo \n");
		}
		
	}
	
	return 0;
}
