#include<iostream>
#include<vector>

int main(){
  unsigned long  N,A,B;
  long int num=0;
  std::cin>>N;
    for(unsigned long i=0;i<N;i++){
      std::cin>>A>>B;
      num+=(B*(B+1)-A*(A-1))/2;
           /* for(;A<B+1;A++){
        num+=A;
      }*/
    }
  std::cout<<num<<std::endl;
  return 0;
}
