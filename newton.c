#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int n, nmax;
double x, x2, dx, eps, fx, dfx;

int main(void){
	x = -1;
	fx = x + cos(x);
	dfx =1 - sin(x);
	eps = 0.0001;
	n = 0;
	nmax =10000 ;
	
	do{
		fx = x + cos(x);
		dfx = 1 - sin(x);
		dx =  - fx / dfx;
		x = x + dx;
		n++;

		printf("%f\n" , x);
		if(n == nmax){
			printf("error");
			break;
		}

	}
	while(fabs(dx) > eps && n <= nmax);
	printf("%f\n", x);

		return 0;
}

