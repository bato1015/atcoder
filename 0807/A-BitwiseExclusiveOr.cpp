#include<iostream>
#include<vector>
//https://atcoder.jp/contests/abc213/tasks/abc213_a
class test{
    test(){  //コンストラクタ
        vec1.assign(8,0);
    }
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
    test t;


    return 0;
}