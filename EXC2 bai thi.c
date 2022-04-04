#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int F[10];
	int size=10;
	printf("Input 10 number:\n");
	printf("===================\n");
	for(i=0; i<size; i++){
	    printf("+Number %d: ",i+1);   
		scanf("%d", &F[i]);
	}
	    reverse(size,F); 
	return 0;
}
int reverse(int size, int F[]){
	int x;
	printf("\nResult: ");
	for(x=size-1; x>=0; x--){ 
		printf("%d ", F[x]); 
	}
	return F; 
}

