#include<iostream>
#include<vector>
//g++ 0807.cpp -std=c++17 -Wall --pedantic-errors
//https://atcoder.jp/contests/abc213/tasks/abc213_a
class test{
    public:
        void set1(int index,int set_num){
            vec1[index]=set_num;
        }
        int get1(int index){
            return vec1[index];
        }
    private:
        std::vector<int> vec1;
};
int main(){

    return 0;
}