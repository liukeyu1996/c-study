#include <iostream>
using namespace std;
inline int add(int x,int y);//内置函数
int main() {
    const int dx=10; //常变量
    int b = 1.1e3; //科学计数法
    int c,d,f;
    d= ( d=10)+(f=11); //连续赋值的顺序：从右到左
    cout<<"dx,b,d,f:"<<dx<<' '<<b<<' '<<d<<' '<<f<<endl;

    int x=5,y=10;
    int h;
    h=add(x,y);
    cout<<"h-x:"<<x<<" "<<h<<endl;
}

 int add(int x,int y){
    x= x+y;
    return x;
}
