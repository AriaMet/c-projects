#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sms,mb;
	float lepta,kaseri;
	
	printf("Dwse moy ta lepta omilias:");
	scanf(" %f",&lepta);
	printf("\nDwse moy ta sms:");
	scanf(" %d",&sms);
	printf("\nDwse moy ta mb:");
	scanf(" %d",&mb);
	
	kaseri=5.5;
	
	if(sms>30){
		kaseri+=(sms-30)*0.02;
	}
	if(mb>200){
		kaseri+=(mb-200)*0.015;
	}
	if(lepta>60 && lepta<=100){
		kaseri+=(lepta-60)*0.01;
	}else if(lepta>=101 && lepta<=200){
		kaseri+=40*0.01+(lepta-100)*0.03;
	}else if(lepta>=201){
		kaseri+=40*0.01+100*0.03+(lepta-200)*0.05;
	}
	printf("\nMhniaio kostos logariasmou: %f",kaseri);
	
	return 0;
}
