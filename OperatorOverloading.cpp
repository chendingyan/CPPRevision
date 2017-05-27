#include <iostream>
using namespace std;
class MyFloat{
public:
    MyFloat() = default;
    MyFloat(const char * szName, float f)
            :f(f), strName(szName){}
    MyFloat(string strName, float f)
            :f(f), strName(strName){}
    void print(){
        cout << strName << " : " << f << endl;
    }
    //non-member function
    friend MyFloat operator -(const MyFloat &lhs, const MyFloat &rhs);

    //member function
    MyFloat operator +(const MyFloat &rhs) {
        return MyFloat(this->strName+"+"+rhs.strName, this->f+rhs.f);
    }

private:
    float f;
    string strName;
};

MyFloat operator - (const MyFloat &lhs, const MyFloat &rhs){
    return MyFloat(lhs.strName+"-"+ rhs.strName, lhs.f-rhs.f);
}


int main(){
    MyFloat f1("f1", 1.1f);
    f1.print();
    MyFloat f2("f2", 3.3f);
    f2.print();

    MyFloat f3 = f2 - f1;
    f3.print();

    MyFloat f4 = f1 + f2;
    f4.print();

}
