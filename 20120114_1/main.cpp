#include <iostream>
using namespace std;
int main() {
    const int dx=10; //常变量
    int b = 1.1e3; //科学计数法
    int c,d,f;
    d= ( d=10)+(f=11); //连续赋值的顺序：从右到左
    cout<<"dx,b,d,f:"<<dx<<' '<<b<<' '<<d<<' '<<f<<endl;
}
