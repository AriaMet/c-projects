#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int i,N=5,epcount=0,apcount=0;
	float min,max,vp,ve,vt,pa,pe;
	
	i=0;
	while(i<5){
		do{
		printf("Dwse vathmologia proodou %d mathiti:\n",i+1);
		scanf("%f",&vp);
		}while(vp<0.0 || vp>10.0);
		do{
		printf("Dwse vathmologia eksetashs %d mathiti:\n",i+1);
		scanf("%f",&ve);
		}while(ve<0.0 || ve>10.0);
		vt=(0.4*vp)+(0.6*ve);
		if(vt<5.0){
			apcount++;
		}else{
			epcount++;
		}
		if(min>vt){
			min=vt;
		}else if(max<vt){
			max=vt;
		}
		i++;	
	}
	pa=(apcount*100)/5;
	pe=(epcount*100)/5;
	printf("Plhthos apotyxontwn: %d\n",apcount);
	printf("Plhthos epityxontwn: %d\n",epcount);
	printf("Pososto apotyxias: %f %\n",pa);
	printf("Pososto epityxias: %f %\n",pe);
	printf("Megisth vathmologia : %f \nElaxisth vathmologia: %f \n", max,min);
	return 0;
}
