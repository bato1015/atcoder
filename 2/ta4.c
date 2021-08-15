move#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pl 3.1415926

double f,ang,a,r;
int mode = 0, count = 0,s,t,rcp,in;
char sw,e;



int main(){
  printf("start:");
  scanf("%lf",&a);/*first input*/
  srand(time(NULL));/*random*/
  while(1){
    scanf(" %c",&sw);
    switch(sw){
  /*mode change*/
      case 'e':    /*clear*/
        a = 0;
        printf("=%lf\n",a);
        mode = 0;
        scanf(" %c",&sw);
        break;
      case 's':    /*error mode*/
      case 'c':
      case 't':
        mode = 3;
        break;
      case 'f':    /*関数mode*/
        mode = 1;
        scanf(" %c",&sw);
        break;
      case 'a':    /*四則演算mode*/
        mode = 0;
        scanf(" %c",&sw);
        break;
      case 'w':  /*fortune mode*/
        mode = 2;
        break;
      case 'y':/*じゃんけんmode*/
        mode = 4;
        printf("rock:1,paper:2,scissors:3\n"); 
        scanf(" %c",&sw);
        break;
    }
/*四則演算*/ 
    if(mode == 0){
        t = rand() % 6+1;
      if(t ==1){
        scanf("%lf",&r);
        printf("ouch!!\n");
      }else{
        f =0;
        switch(sw){
          case '+':
            scanf("%lf",&f);
            a+=f,
            printf("=%lf\n",a);
            break;
          case '-':
            scanf("%lf",&f);
            a-=f,
            printf("=%lf\n",a);
            break;
          case '*':
            scanf("%lf",&f);
            a*=f,
            printf("=%lf\n",a);
            break;
          case '/':
            scanf("%lf",&f);
            a/=f,
            printf("=%lf\n",a);
            break;
          case 'q':                /*finishi mode*/
            printf("計算結果は%lfです。\n",a);
            count = 1;
            break;
        } 
      }
     /*関数計算*/ 
    }else if(mode == 1){
      if(sw == 'q'){
        count = 1;
        printf("計算結果は%lfです。\n",a);
      }else{
        ang =0;
        scanf(" %c%lf",&e,&ang);
        switch(e){
          case 's':
            f = sin(ang*pl/180.0);
            break;
          case 'c':
            f = cos(ang*pl/180.0);
            break;
          case 't':
            f = tan(ang*pl/180.0);
            break;
          default:
            printf("2error\n"); 
            f =0;
        }
        switch(sw){
          case '+':
            a+=f,
            printf("=%lf\n",a);
            break;
          case '-':
            a-=f,
            printf("=%lf\n",a);
            break;
          case '*':
            a*=f,
            printf("=%lf\n",a);
            break;
          case '/':
            a/=f,
            printf("=%lf\n",a);
            break;
          default:
            printf("1error\n");  
         } 
      }
       
       
    }else if(mode == 2){
      srand(time(NULL));/*random*/
      if(sw == 'w'){
        s = rand() % 5+1;
        switch(s){
          case 1:
            printf("=大吉\n");
            break;
          case 2:
            printf("=中吉\n");
            break;
          case 3:
            printf("=小吉\n");
            break;
          case 4:
            printf("=吉\n");
            break;
          case 5:
            printf("=凶\n");
            break;
          case 6:
            printf("=大凶\n");
            break;
        }
      }else if(sw == 'q'){
        count = 1;
        printf("計算結果は%lfです。\n",a);
      }else{
         printf("error\n");
      }
       
    }else if(mode == 3){
      printf("4error\n");
      mode = 0;
     /*ジャンケン*/ 
    }else if(mode == 4){
      rcp = rand() % 3+1;
      switch(rcp){
        case 1:
          printf("rock\n"); 
          break;
        case 2:
          printf("paper\n");
          break;
        case 3:
          printf("scissors\n");
          break;
      }
      if((rcp == 1 && sw == '2')||(rcp == 2 && sw == '3')||(rcp == 3 && sw == '1')) {
        printf("you win!!\n");
      }else if((rcp == 1 && sw == '1')||(rcp == 2 && sw == '2')||(rcp == 3 && sw == '3')){
        printf("replay!\n"); 
      }else{
        printf("I'm win!!\n");
      }
    
    }
    /*finishi*/
    if(count == 1){
      break;
    }
  }
  return 0;
 }
       
