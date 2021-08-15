#include<iostream>
#include<string>

using namespace std;

class CSample{
  public:
    void set(int num);
    int get();
    std::string get1();
    void search(std::string juge);
    
  private:
    int m_num;
    std::string jput;
};

void CSample::set(int num){
   m_num = num;
}

int CSample::get(){
  return m_num;
}

void CSample::search(std::string juge){
  CSample obj;
  if(obj.get()%15==0){
      juge = "FizzBuzz";
  }else if(obj.get()%3==0){
      juge = "Fizz";
  }else if(obj.get()%5==0){
      juge = "Buzz";
  }else{
      juge = "not";
  }
      jput = juge;
}
std::string CSample::get1(){
  return jput;
}

int main(){
  CSample obj;
  int a;
  while(1){
    std::cin >> a;
    obj.set(a);
    std::cout << "input:"<<obj.get()<< std::endl;
    std::cout <<obj.get1()<< std::endl; 
  }
  return 0;
  
}

