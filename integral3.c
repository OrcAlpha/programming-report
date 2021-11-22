#include<stdio.h>
#include<math.h>

double a, b, c, y, sum, y11, y2, y3, x1, x2, x3, dx, x_end;

double f(double x){
  y = x*x*x*x - 2.0*x*x*x + x*x - 3.0*x + 1.0;/*積分する関数を定義*/
  return y;
  }
  
int main(void){
  dx = 0.01;/**/
  x1 = 0;/**/
  x_end = 3;/**/
  while(x3 <= x_end){
    x2 = x1 + dx;
    x3 = x1 + 2 * dx;
    y11 = f(x1);
    y2 = f(x2);
    y3 = f(x3);
    a = (y11 - 2* y2 + y3) / (2 * dx * dx);
    b = (-(x2 + x3)*y11 + 2 * (x3 + x1) * y2 - (x1 + x2) * y3)/(2 * dx * dx);
    c = (x2 * x3 * y11 -2* x3 * x1 * y2 + x1 * x2 * y3) / (2 * dx * dx);
  
    y = a * (x3*x3*x3 - x1*x1*x1) / 3 + b * (x3*x3 - x1*x1) / 2 + c * (x3 - x1);
    sum = sum + y;
    x1 = x3;
    }
    printf("%f\n", sum);
    return 0;
}
