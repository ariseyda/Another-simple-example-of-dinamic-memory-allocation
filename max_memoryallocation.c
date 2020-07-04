#include<stdio.h>

//Find the largest element in a dynamically allocated memory. 
//First ask that how many numbers will be entered and enter those numbers after allocation. 
//Then find the largest number by using pointer. 

int main(){
	
	int size;
	printf("How many numbers will you enter?:");
	scanf("%d",&size);
	int *p;
	p=malloc(size*sizeof(int));
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&p[i]);
	}
	int max=p[0];
	for(i=1;i<size;i++){
		if(p[i]>max){
			max=p[i];
		}
	}
	printf("Max value:%d",max);
	

	return 0;
}
