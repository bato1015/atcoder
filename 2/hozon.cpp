#include <iostream>

using namespace std;

class CSample
{
public:
    void set(int num);  			// m_numに値を設定するメソッド = メンバ関数
    int get();          			// m_numの値を取得するメソッド
private:
    int m_num;
};
void CSample::set(int num)		//クラス宣言の外で関数の定義を宣言する場合はそのクラスの名前と::
{					//が必要。つまり違うクラスの中ならば同じ名前の関数,変数があってもよい。
    m_num = num;
}
 
int CSample::get()
{
    return m_num;
}
int main() {
    CSample obj;			//インスタンス化
    obj.set(765);				//内部のm_numに値を入れる
    std::cout << obj.get() << std::endl; 	//m_numの値を表示
//ちなみにm_numはprivateにしているのでここでstd::cout << obj.m_num << std::endl; とするとエラーになる。
    return 0;
}

