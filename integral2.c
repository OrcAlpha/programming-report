#include<stdio.h>
#include<math.h>

double x, x1, x2, y, sum, dx;
double f(double x){
  y = x*x*x*x - 2.0*x*x*x + x*x - 3.0*x + 1.0;/*積分する関数を定義*/
  return y;
  }
  
int main(void){
  dx = 0.01;/*微小区間の大きさを設定*/
  x1 = 0;/*積分区間の始まりを設定*/
  x2 = 3;/*積分区間の終わりを設定*/
  while((x2 - x1) > dx){
    y = (f(x1) + f(x1 + dx))*dx /2;
    sum = sum + y;
    x1 = x1 + dx;
    }
  printf("%f\n", sum);
  return 0;
  }
  
