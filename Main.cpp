#include<stdio.h>
int main(){
	
	FILE *wrk = fopen("Profit.txt","r");
	
	int profit[100],i=0,nYear[10]= {0};
	int wyear;
	
	while(1){
		if(feof(wrk)) {  break;}
		fscanf(wrk,"%d",&profit[i]);
		
		nYear[(profit[i]/100000)] += 1;
		i++;
	}
	
	printf("RANGE \t NUMBER OF YEARS\n");
	
	for(int k=0; k<=9; k++){
		
		printf("%d \t \t %d\n",k,nYear[k]);	

	}
	
}
