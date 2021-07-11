#include<iostream>
#include<string>
int main(){
  //std::string  c(1,0);
  int c=0;
  std::string N(20000,0);
  std::cin>>N;
  //c=str[2]-'0';
 //std::cout<<c<<std::endl;
  for(unsigned int i= 0; i<N.size();i++){
    c+=int (N[i]-'0');
  }
  std::cout<<c<<std::endl;
  if(c%9==0){
    std::cout<<"Yes"<<std::endl;
  }else{
    std::cout<<"No"<<std::endl;
  }
  return 0;
}
