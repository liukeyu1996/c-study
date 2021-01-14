#include <iostream> //预处理命令+头文件
using namespace std; //用来声明的命名空间

int main() {//所有的c++程序包含main且返回整数
    int max(int x,int y); //旧的c++语法，在max出现在main后需要声明，编译从前往后扫描文件
    int a,b,sum;
    cin>>a>>b;//cin输入对象，赋值；>>提取运算符
    sum =a+b;
    cout << "a+b=" <<sum<<endl;//cout是对象;<<是插入运算符;endl是控制符，相当于换行符

    int maxn;
    maxn=max(a,b);
    cout<< "a max b is " << maxn<<endl;
    return 0;
}

int max(int x,int y){
    if( x> y)
        return x;
    else
        return y;
}
