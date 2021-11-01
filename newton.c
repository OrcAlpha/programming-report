#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int n, nmax;
double x, x2, dx, eps, fx, dfx;

int main(void){
	x = -5;/*自分で解に近いと思われる値を代入*/
	eps = 0.0001;/*求める精度を入力*/
	n = 0;
	nmax =10000 ;/*最大繰り返し回数*/
	
	do{
		fx = x + cos(x);/*fxを手入力*/
		dfx = 1 - sin(x);/*fxの微分を手入力*/
		dx =  - fx / dfx;
		x = x + dx;
		n++;

		printf("収束過程：%f\n" , x);
		if(n == nmax){
			printf("error");
			break;
		}

	}
	while(fabs(dx) > eps && n <= nmax);
	printf("解：%f\n", x);

		return 0;
}

