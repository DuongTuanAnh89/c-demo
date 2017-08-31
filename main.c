#include<stdio.h>
float devision (float a,float b);
	
  main(){
	
	 printf ("%i\n", plus(6,7));
	 printf ("%i\n", minus(6,7));
	 printf ("%i\n", multiply(5,8));
	 printf ("%f",devision(20,6));
}
    //Công hai so voi tham so dau vao
    // la a,b la hai so nguyen
int plus(int a, int b){
	return  a +b;

}
int minus (int a,int b){
	return a-b;
}
int multiply (int a,int b){
	return a*b;
}
float devision (float a,float b){
	return (float) a/b;
}

