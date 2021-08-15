#include<iostream>
class arrey{
  public:
    arrey(){
      for(int i=0;i<5;i++){
        num[i]=0;
      }
    }
    int get();
    int num_get();
    void append(int x);
    void insert(int y);
    
  private:
    int num[5];
    int el=0;
};

void arrey::append(int x){
  num[el]=x;
  el++;
  return; 
  }

int arrey::get(){
  return el;
}

void arrey::insert(int y){
  int num_serve[el];

    num_serve=num;
    num[0]=y;
  for(int i1=0; i1<el; i1++){
    num[i1+1]=num_serve[i1];
  }
}


int arrey::num_get(){
   return num[1];
  }
  


int main(){
  arrey ar1;
  ar1.insert(5);
  ar1.insert(9);
    std::cout<<ar1.num_get()<<std::endl;
return 0;
}
    
 
    
