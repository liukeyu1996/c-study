#include <iostream>
using namespace std;

template<typename T> //定义模板
T max(T a, T b,T c){//函数模板
    T temp=a;
    if(temp<b)
        temp=b;
    if(temp<c)
        temp=c;
    return temp;
}

int main() {
    int a=10,b=20,c=15,d;
    double f=1.1;
    d=max(a,b,c);
    cout<<"a,b,c max is "<<d<<endl;
    return 0;
}
