#include <iostream>
using namespace std;

class Base{
protected:
    int i;

public:
    Base(int i = 1):i(i){cout<<"construct base" << i <<endl;}
    virtual void out(){cout <<"Base" << i << endl;}
};

class Sub:public Base{
protected:
    int i;
public:
    Sub(int i = 2):i(i), Base(i+2){cout<<"construct sub" << i <<endl;}
    void out(){cout<< "Sub" << i<< endl;}
};

void exception1(int i) throw (int, float, const char *){
    switch (i){
        case 0: throw 2;
        case 1: throw 1.1f;
        case 2: throw "hello";
    }
}
//
//int main(){
////    Sub s(3);
////    s.out();
////    s.Base::out();
////
////    Base & br = s;
////    br.out();
////
////    Base b = s;
////    b.out();
//    const int cci = 10;
//    printf("cci before: %d\n", cci);
//    int* icccp = (int*)&cci;
//    printf("icccp is %p, cci is %p\n", icccp, &cci);
//    (*icccp) = 1000;
//    printf("icccp after: %d cci after: %d\n", (*icccp), *(&cci));
//    printf("icccp is %p, cci is %p\n", icccp, &cci);
//
//}