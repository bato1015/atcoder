#include<iostream>
#include<vector>

int main(){
  int N,A,B;
  long int num=0;
  std::cin>>N;
    for(int i=0;i<N;i++){
      std::cin>>A>>B;
      for(;A<B+1;A++){
        num+=A;
      }
    }
  std::cout<<num<<std::endl;
  return 0;
}