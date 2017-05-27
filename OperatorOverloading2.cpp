#include <iostream>
#include <string>
using namespace std;

class MyClass{
private:
    int i;
    string str;
public:
    MyClass(int i, string str):i(i), str(str){}

    bool operator == (const MyClass & rhs){
        if(this->i == rhs.i && this->str == rhs.str){
            return true;
        }
        return false;
    }

};

int main(){
    MyClass myClass1(1,"C++Exam");
    MyClass myClass2(1, "C++Exam");
    if(myClass1 == myClass2){
       cout << "Match" << endl;
    }
}
