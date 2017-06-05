#include <iostream>
using namespace std;

class C{
public:
    float& get1(){
        return f;
    }

    const float & get3()const{
        return f;
    }

private:
    float f;
};

int main(){
    C ob;
    const C & ref = ob;
    float f1 = ob.get1();
    const float  cf1 = ob.get1();
    float & rf1 = ob.get1();
    const float & crf1 = ob.get1();

    float f3 = ob.get3();
    const float  cf3 = ob.get3();
    const float & rf3 = ob.get3();

}
