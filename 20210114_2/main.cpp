#include <iostream>
using namespace std;

template<typename T> //定义模板 且 typename和class相同，可以互换
T max(T a, T b,T c){//函数模板
    T temp=a;
    if(temp<b)
        temp=b;
    if(temp<c)
        temp=c;
    return temp;
}

int max(int a, int b,int c=10){//函数模板
    int temp=a;
    if(temp<b)
        temp=b;
    if(temp<c)
        temp=c;
    return temp;
}  //重载+默认值
int main() {
    int a=10,b=20,c=15,d,e;
    double f=1.1;
    d=max(a,b,c);
    e=max(8,7);
    cout<<"a,b,c max is "<<d<<endl;
    cout<<"e  is "<<e<<endl;
    return 0;
}
