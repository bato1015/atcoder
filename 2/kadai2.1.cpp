#include<iostream>
class arrey{
  public:
    arrey(){
    for(int i=0;i<5;i++){
    num[i]=0;
    }
    }
    int get(int ar);
    int get1();
    void insert();
    void set(int a);
    void append();
  
  private:
    int num[5];
};

void arrey::set(int a){
  int we;
  num[a]= we;
}
int get1(){
  return num[a];
  }

int arrey::get(int ar){
  std::cin>>ar;
 return num[ar];

  }
int main(){
  arrey ar1;
for(int ie; ie<5; ie++){
  std::cout<<ar1.get[ie]<<std::endl;
  }
return 0;
}
    
 
    
