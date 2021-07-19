//判定の関数
//勝利条件
//if else が出来なかった理由
//フラグもきれいにしたい


#include<stdio.h>
void date_print();
int change_gyou(char change_gyou);
void enter_array(int gyou, int retu, char player);
char array[4][4]={{'!','1','2','3'},{'a','.','.','.',},{'b','.','.','.'},{'c','.','.','.'}};//土台

/*表の表示*/
void date_print(){
  for(int i=0;i<4;i++){
    for(int a=0;a<4;a++){
      printf("%c",array[i][a]);
    }
      printf("\n");
  }
}

/*abc→123*/
int change_gyou(char abc_gyou){
  int gyou;
  switch(abc_gyou){
    case 'a':
      gyou=1;
      break;
    case 'b':
      gyou=2;
      break;
    case 'c':
      gyou=3;
      break;
    default:
      gyou=-1;
      break;
  }
  return gyou;
}
/*丸×を打つ関数、playerは×〇*/
void enter_array(int gyou, int retu, char player){
 
    array[gyou][retu]=player;
}


int date_jujing(){
}
//これから作る
int main(){
  int retu;
  char abc_gyou;
  
  int flag=0;
  int i=0;
  int end=0;
    while(1){
      if(i==0){
        scanf("%c%d",&abc_gyou,&retu);//読みとり
        i=1;
      }else{
        scanf(" %c%d",&abc_gyou,&retu);//読みとり
      }
      if(flag==1&&array[change_gyou(abc_gyou)][retu]=='.'){//ばつの場合
        flag=0;
        enter_array(change_gyou(abc_gyou),retu,'X');//(行、れつ,プレイヤー)
        if(change_gyou(abc_gyou)!=-1||(retu<4&&retu>0)){//enter対策（苦肉の策）
          date_print();
        }else{
          flag=1;
        }
      } else if(flag==0&&array[change_gyou(abc_gyou)][retu]=='.'){
        flag=1;
        enter_array(change_gyou(abc_gyou),retu<4,'O');
        if(change_gyou(abc_gyou)!=-1||(retu<4&&retu>0)){
         date_print();
        }else{
          flag=0;
        }
      }else{
        printf("えらー\n");
      }
      for(int i=1;i<4;i++){
          if(array[1][i]=='X'&&array[2][i]=='X'&&array[3][i]=='X'){
            printf("×勝利(縦)\n");
            end=1;
          }
      }
      for(int i=1;i<4;i++){
          if(array[i][1]=='X'&&array[i][2]=='X'&&array[i][3]=='X'){
            printf("×勝利(横)\n");
            end=1;
          }
      }
      if(array[1][1]=='X'&&array[2][2]=='X'&&array[3][3]=='X'){
        printf("×勝利(なんめ１)\n");
          end=1;
      }
        
      if(array[1][3]=='X'&&array[2][2]=='X'&&array[3][1]=='X'){
          printf("×勝利(何目2)\n");
          end=1;
        }
      for(int i=1;i<4;i++){
          if(array[1][i]=='O'&&array[2][i]=='O'&&array[3][i]=='O'){
            printf("o勝利(たて)\n");
            end=1;
          }
      }
      for(int i=1;i<4;i++){
          if(array[i][1]=='O'&&array[i][2]=='O'&&array[i][3]=='O'){
            printf("お勝利(横)\n");
            end=1;
          }
      }
      if(array[1][1]=='O'&&array[2][2]=='O'&&array[3][3]=='O'){
          printf("お勝利(ななめ)\n");
          end=1;
      }
        
      if(array[1][3]=='O'&&array[2][2]=='O'&&array[3][1]=='O'){
        printf("お勝利(斜め２)\n");
          end=1;
        }
      if(end==1){
        break;
      }
      
    }
  return 0;
}



































