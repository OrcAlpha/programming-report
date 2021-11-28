#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int get_random(int min, int max){
  return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));/*下限と上限を決めた乱数を生成する*/
}

int main(void){
  int max = 0;
  int round = 0;
  int random;
  int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,sp=0,ex=0;
  char ch;
  FILE *fp;
  fp = fopen("T_sample", "r");  
  srand((unsigned int)time(NULL));/*出力する乱数が毎回変わるようにする*/
	
	while(max < 300000){
	  fscanf(fp, "%c", &ch);
	  max++;
	  /*printf("%d:%c\n", max, ch);*/
	  
	  switch(ch){/*ファイルの文字を判定する*/
     case 'a':
       a += 1;
       break;
     case 'b':
       b += 1;
       break;
     case 'c':
       c += 1;
       break;
     case 'd':
       d += 1;
       break;
     case 'e':
       e += 1;
       break;
     case 'f':
       f += 1;
       break;
     case 'g':
       g += 1;
       break;
     case 'h':
       h += 1;
       break;
     case 'i':
       i += 1;
       break;
     case 'j':
       j += 1;
       break;
     case 'k':
       k += 1;
       break;
     case 'l':
       l += 1;
       break;
     case 'm':
       m += 1;
       break;
     case 'n':
       n += 1;
       break;
     case 'o':
       o += 1;
       break;
     case 'p':
       p += 1;
       break;
     case 'q':
       q += 1;
       break;
     case 'r':
       r += 1;
       break;
     case 's':
       s += 1;
       break;
     case 't':
       t += 1;
       break;
     case 'u':
       u += 1;
       break;
     case 'v':
       v += 1;
       break;
     case 'w':
       w += 1;
       break;
     case 'x':
       x += 1;
       break;
     case 'y':
       y += 1;
       break;
     case 'z':
       z += 1;
       break;
     case ' ':
       sp += 1;
       break;
     default:
       ex += 1; 
       break;
       
       }
       
       
	  }
	  
       printf(" a:%d\n", a);/*文字の出現回数を表示する*/
       printf(" b:%d\n", b);
       printf(" c:%d\n", c);
       printf(" d:%d\n", d);
       printf(" e:%d\n", e);
       printf(" f:%d\n", f);
       printf(" g:%d\n", g);
       printf(" h:%d\n", h);
       printf(" i:%d\n", i);
       printf(" j:%d\n", j);
       printf(" k:%d\n", k);
       printf(" l:%d\n", l);
       printf(" m:%d\n", m);
       printf(" n:%d\n", n);
       printf(" o:%d\n", o);
       printf(" p:%d\n", p);
       printf(" q:%d\n", q);
       printf(" r:%d\n", r);
       printf(" s:%d\n", s);
       printf(" t:%d\n", t);
       printf(" u:%d\n", u);
       printf(" v:%d\n", v);
       printf(" w:%d\n", w);
       printf(" x:%d\n", x);
       printf(" y:%d\n", y);
       printf(" z:%d\n", z);
       printf(" space:%d\n", sp);
       printf(" ex:%d\n", ex);
	  fclose(fp);
	  
  while(round < 200){
  
  random = get_random(0, a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+sp);/*0から文字の出現回数までの乱数を生み出す*/
  
  if(0 < random && random <= a)/*文字の出現割合に沿った文字列を出力する*/
    printf("a");
  else if(a < random && random <= a+b)
    printf("b");
  else if(a+b < random && random <= a+b+c)
    printf("c");
  else if(a+b+c < random && random <= a+b+c+d)
    printf("d");
  else if(a+b+c+d < random && random <= a+b+c+d+e)
    printf("e");
  else if(a+b+c+d+e < random && random <= a+b+c+d+e+f)
    printf("f");
  else if(a+b+c+d+e+f < random && random <= a+b+c+d+e+f+g)
    printf("g");
  else if(a+b+c+d+e+f+g < random && random <= a+b+c+d+e+f+g+h)
    printf("h");
  else if(a+b+c+d+e+f+g+h < random && random <= a+b+c+d+e+f+g+h+i)
    printf("i");
  else if(a+b+c+d+e+f+g+h+i < random && random <= a+b+c+d+e+f+g+h+i+j)
    printf("j");
  else if(a+b+c+d+e+f+g+h+i+j < random && random <= a+b+c+d+e+f+g+h+i+j+k)
    printf("k");
  else if(a+b+c+d+e+f+g+h+i+j+k < random && random <= a+b+c+d+e+f+g+h+i+j+k+l)
    printf("l");
  else if(a+b+c+d+e+f+g+h+i+j+k+l < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m)
    printf("m");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n)
    printf("n");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o)
    printf("o");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p)
    printf("p");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q)
    printf("q");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r)
    printf("r");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s)
    printf("s");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t)
    printf("t");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u)
    printf("u");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v)
    printf("v");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w)
    printf("w");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x)
    printf("x");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y)
    printf("y");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z)
    printf("z");
  else if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z < random && random <= a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+sp)
    printf(" ");
  
      round +=1;
      }	  
  printf("\n");
	return 0;
	}
	
