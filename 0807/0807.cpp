//g++ 0807.cpp -std=c++17 -Wall --pedantic-errors
#include<iostream>
class sample{
    public:
        int A,B;
};
int main(){
    sample sa;
    std::cin>>sa.A>>sa.B;
    if(sa.B==0&&sa.A!=0){
        std::cout<<"Gold"<<std::endl;
    }else if(sa.A==0&&sa.B!=0){
        std::cout<<"Silver"<<std::endl;
    } else if(sa.A!=0&&sa.B!=0){
        std::cout<<"Alloy"<<std::endl;
    }
    return 0;
}