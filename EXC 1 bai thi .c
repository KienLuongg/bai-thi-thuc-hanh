#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double divition(int a, int b);
int main(int argc, char *argv[]) {
	int a, b; 
	int choose;
	printf("CALCULATOR\n");
	printf("==================\n");
	printf("1. Enter numbers: ");
	scanf("%f %f", &a, &b);
	printf("2. Caculate Sum.\n");
	printf("3. Caculate Subtraction.\n");
	printf("4. Caculate Multiplication.\n");
	printf("5. Caculate Divition.\n");
	printf("6. Exit!\n");
	printf("Choose: ");  
	scanf("%d", &choose);
	double result;
	switch (choose){
		case 2:
			result = sum(a,b);
			printf("The result after use addition is %f", result);
			break;
		case 3:
		    result = sub(a,b);
			printf("The result after use subtraction is %f", result);
			break;
		case 4:
		    result = multi(a,b);
			printf("The result after use multiplication is %f", result);
			break;
		case 5:
		    result = divition(a,b);
		    if(b==0){
		    	printf("Error!!!");
			}
			else{
			printf("The result after use divition is %f", result);
		    }
			break;
		case 6:
			printf("Bye!");
		    break;
		default :
		    printf("Unknow!");
			break;					
	}
	return 0;
}
int sum(int a, int b){
	return (a+b);
}
int sub(int a, int b){
	return (a-b);
}
int multi(int a, int b){
	return (a*b);
}
double divition(int a, int b){
	double div;
	if(b!=0){
	    div = a / b;
    }
	return div;
}

