#include<stdio.h>
#include<math.h>
int n, nmax;
double x, dx, esp, fx, dfx;

int main(void){
	x = 1;
	fx = ;
	dfx = ;
	n = 0;
	nmax = ;
	
	do{
		dx = - fx / dfx;
		x = x + dx;
		n++
	}
	while(abs(dx) > eps && n =< nmax )

