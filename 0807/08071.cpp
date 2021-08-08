#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
int main(){
  int w=0,q=0;
  std::string str;

  std::cin>>str;

  
  for(int i=0;i<3;i++){
    if(str[i]==str[i+1]){
      q++;
    }else if((str[i]+1)==str[i+1]){
      w++;
    }else if(str[i]=='9'&&str[i+1]=='0'){
      w++;
    }
  }
  if(w==3||q==3){
    std::cout<<"Weak"<<std::endl;
  }else{
    std::cout<<"Strong"<<std::endl;
  }
  return 0;
}