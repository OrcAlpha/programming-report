#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

int get_random(int min, int max){
  return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));/*下限と上限を決めた乱数を生成する*/
}
char convert(char cap){/*大文字を小文字に変換する関数*/
  if (cap >= 'A' && cap <= 'Z')
    return (cap + 0x20);
  else
    return cap;    
}
int main(void){
  int max = 0;
  int round = 0;
  int random;
  double all;
  int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,sp=0,ex=0;
  char ch;
  FILE *fp;
  
  
  fp = fopen("NegroHistory.txt", "r");/*読み込むファイルを指定*/
  srand((unsigned int)time(NULL));/*出力する乱数が毎回変わるようにする*/
	
	while(feof(fp) == 0){
	  fscanf(fp, "%c", &ch);
	  ch = convert(ch);
	  /*if(isalpha(ch)){
	    max++;
	    printf("%d:%c\n", max, ch);
	  }else{
	    max++;
	    printf("%d; \n", max);
	    }*//*動作確認用*/
	  
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
	  
	  /*all = a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+sp;*//*記号を置換せずそのままの場合*/
	  all = a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+sp+ex-2;/*その他記号をスペースに置換する場合*/
       printf(" all:%.0f\n", all);/*文字の出現回数を表示する*/
       printf(" a:%d   %f%%\n", a, a/all*100);
       printf(" b:%d   %f%%\n", b, b/all*100);
       printf(" c:%d   %f%%\n", c, c/all*100);
       printf(" d:%d   %f%%\n", d, d/all*100);
       printf(" e:%d   %f%%\n", e, e/all*100);
       printf(" f:%d   %f%%\n", f, f/all*100);
       printf(" g:%d   %f%%\n", g, g/all*100);
       printf(" h:%d   %f%%\n", h, h/all*100);
       printf(" i:%d   %f%%\n", i, i/all*100);
       printf(" j:%d   %f%%\n", j, j/all*100);
       printf(" k:%d   %f%%\n", k, k/all*100);
       printf(" l:%d   %f%%\n", l, l/all*100);
       printf(" m:%d   %f%%\n", m, m/all*100);
       printf(" n:%d   %f%%\n", n, n/all*100);
       printf(" o:%d   %f%%\n", o, o/all*100);
       printf(" p:%d   %f%%\n", p, p/all*100);
       printf(" q:%d   %f%%\n", q, q/all*100);
       printf(" r:%d   %f%%\n", r, r/all*100);
       printf(" s:%d   %f%%\n", s, s/all*100);
       printf(" t:%d   %f%%\n", t, t/all*100);
       printf(" u:%d   %f%%\n", u, u/all*100);
       printf(" v:%d   %f%%\n", v, v/all*100);
       printf(" w:%d   %f%%\n", w, w/all*100);
       printf(" x:%d   %f%%\n", x, x/all*100);
       printf(" y:%d   %f%%\n", y, y/all*100);
       printf(" z:%d   %f%%\n", z, z/all*100);
       printf(" space:%d   %f%%\n", sp+ex-2, (sp+ex-2)/all*100);/*その他記号をスペースに置換する場合*/
       /*printf(" space:%d   %f%%\n", sp, sp/all*100);*//*スペースの数をそのまま表示する場合*/
       printf(" ex:%d\n", ex-2);/*その他記号の数*/
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
	
