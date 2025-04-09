#include <iostream>

using namespace std;

int main(void)
{
    int a = 1, b = 2;
    void obmen (int, int);
    void obmen2 (int*, int*);
    void obmen3 (int&, int&);
    cout << "до обмена: a="<< a << " b=" <<b<< endl;
    //вызов obmen1(int, int);
    obmen (a,b);
    cout<<"после обмена 1: а="<< a << " b=" <<b<< endl;
    //вызов obmen2(int*, int*);
    obmen2 (&a,&b);
    cout<<"после обмена 2: а="<< a << " b=" <<b<< endl;
    //вызов obmen3(int&, int&);
    obmen3 (a,b);
    cout<<"после обмена 3: а="<< a << " b=" <<b<< endl;
    
}

void obmen (int x, int y){
    int a = x, b = y;
    a=a+b;
    b=a-b;
    a=a-b;
}

void obmen2 (int* x, int* y){
    int buf;
    buf = *x;
    *x = *y;
    *y = buf;
}

void obmen3 (int& x, int& y){
    int buff;
    buff = x;
    x = y;
    y = buff;
}