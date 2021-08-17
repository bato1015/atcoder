//g++ New_Gereration_ABC.cpp -std=c++17 -Wall --pedantic-error
#include<iostream>
class Contest{
    public:
        int num_contest(){
            return N;
        }
        void user_input_contest(){
            int box;
            std::cin>>box;
            substutution(box);
        }
        int substutution(int input_custum){
            N=input_custum;
            return N;
        }
    private:
        int N=0;
};
int main(){
    Contest ccon;
    /*int select_user;
    std::cin>>select_user;
    ccon.input_contest(select_user);*/
    ccon.user_input_contest();
    
    if(1<=ccon.num_contest()&&ccon.num_contest()<=125){
        printf("4\n");
    }else if(126<=ccon.num_contest()&&ccon.num_contest()<=211){
         printf("6\n");
    }else if(212<=ccon.num_contest()&&ccon.num_contest()<=214){
         printf("8\n");

    }
    return 0;

}