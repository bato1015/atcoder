#include<iostream>
#include<string>
int main(){
  int num=0;
  std::string S(6,0);
  std::cin>>S;
  for(int i=0;i<6; i++){
    num+= int(S[i]-'0');
  }
  std::cout<<num<<std::endl;
  return 0;
}