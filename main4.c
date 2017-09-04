#include<stdio.h>
float multi(float a,float b);

int main(){
int a;
int b;

	printf (" please number A:");
	scanf ("%i",&a);
	printf (" please number B:");
	scanf ("%i",&b);
	printf ("%i\n", plus (a, b));
	printf ("%i\n", minus(a, b));
	printf ("%i\n", multi(a, b));
	printf ("%f", divi(a,b));
	
}

int plus (int a,int b){
		
	return a+b;
}
int minus(int a,int b){
	
	return a-b;
}
int divi (int a,int b){
	
	return a*b;

}
float multi (float a,float b){
	
	return (float) a/b;
}

    
	

	
	
