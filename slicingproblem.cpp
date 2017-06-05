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
//    int i;
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
    BaseClass(int i = 1):MyParam(i){}
    virtual BaseClass& operator=(const BaseClass & rhs){
        cout << this->MyParam <<"-" << rhs.MyParam << endl;
        this->MyParam = rhs.MyParam;
        return *this;
    }

};

class SubClass: public BaseClass{
public:
    int MySubClassParam;
    SubClass(int i = 2):MySubClassParam(i){}


    virtual BaseClass &operator=(const BaseClass& rhs){
        try {
            const SubClass& rsub = dynamic_cast<const SubClass&>(rhs);
            *this = rsub;
        }catch (bad_cast){
            this->BaseClass::operator=(rhs);
        }
        return *this;

    }

    SubClass &operator=(const SubClass &rhs){
        this->BaseClass::operator=(rhs);
        this->MySubClassParam = rhs.MySubClassParam;
        cout <<"copied sub part"<<endl;
        return *this;
    }

};

void question1(){
    SubClass s1, s2;
    s1.MyParam = 1;
    s1.MySubClassParam = 2;
    s2.MyParam =3;
    s2.MySubClassParam = 4;
    cout << s1.MyParam <<","<<s1.MySubClassParam<<endl;
    cout << s2.MyParam <<","<<s2.MySubClassParam<<endl;
    BaseClass & rs1 = s1;
    BaseClass & rs2 = s2;
    rs1 = rs2;
    cout << s1.MyParam <<","<<s1.MySubClassParam<<endl;
    BaseClass * ps1 = &s1;
    BaseClass * ps2 = &s2;
    *ps1 = *ps2;
    cout << s1.MyParam <<","<<s1.MySubClassParam<<endl;
}

//
//int main(){
//    question1();
////    trickone();
//}
