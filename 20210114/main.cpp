#include <iostream>
using namespace std;

//申明一个类
class Student //声明一个类
{
private://设置私有部分
    int num; //私有变量
    int score;
public://类中共有部分
    void setdata() //定义公用函数
    {
        cin>>num;
        cin>>score;
    }

    void display()
    {
        cout<<"num="<<num<<endl;
        cout<<"score="<<score<<endl;
    }

};

Student stud1,stud2; //声明对象
int main() {
    stud1.setdata();
    stud2.setdata();
    stud1.display();
    stud2.display();
    return 0;
}
