#include <iostream>
using namespace std;

class Base{
public:
    Base():i(1){}
    virtual void out(){ cout << "Base" << i << endl;}
    int i;
};

class Sub : public Base{
public:
    Sub(){i=2;}
    void out(){ cout << "Sub" << i << endl;}
};

void trickone(){
    Sub array1[3];
    Base array2[3];

    for(int i = 0; i < 3; i++){
        array1[i].out();
    }

    for(int i = 0; i < 3; i++){
        array2[i].out();
    }

    for(int i = 0; i < 3; i++){
        array2[i] = array1[i];
    }

    for(int i = 0; i < 3; i++){
        array2[i].out();
    }
}

class BaseClass{
public:
    int MyParam;
};

class SubClass: public BaseClass{
public:
    int MySubClassParam;
};

void question1(){
    SubClass s1, s2;
    BaseClass & rs1 = s1;
    BaseClass & rs2 = s2;
    rs1 = rs2;

    BaseClass * ps1 = &s1;
    BaseClass * ps2 = &s2;
    *ps1 = *ps2;
}


int main(){

}
