#include<iostream>
#include<vector>
 
int main(){
  int n;
  int w=0;
  std::cin>>n;
  std::vector<int> vec(n);
  for(int i=0;i<n;i++){
    std::cin>>vec[i];
  }
  for(int i=1;i<n-1;i++){
    if(vec[i-1]<vec[i]&&vec[i]<vec[i+1]){
      w++;
    }
    if(vec[i-1]>vec[i]&&vec[i]>vec[i+1]){
      w++;
    }
  }
  std::cout<<w<<std::endl;
  return 0;
}