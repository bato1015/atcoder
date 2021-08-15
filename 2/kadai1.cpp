#include<iostream>
#include<string>

using namespace std;

class CSample{
  public:
    void set(int num);
    int get();
    
  private:
    int m_num;
};

void CSample::set(int num){
   m_num = num;
}

int CSample::get(){
  return m_num;
}
int main(){
  CSample obj;
  int a;
  while(1){
    std::cin >> a;
    obj.set(a);
    std::cout << "input:"<<obj.get()<< std::endl;
     if(obj.get()%15==0){
    std::cout <<"FizzBuzz"<< std::endl;
    }else if(obj.get()%3==0){
    std::cout <<"Fizz"<< std::endl;
    }else if(obj.get()%5==0){
    std::cout <<"Buzz"<< std::endl;
    }
  }
  return 0;
  
}

