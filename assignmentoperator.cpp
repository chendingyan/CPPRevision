#include <cstdio>

class Example{
public:
    Example(int val = 1)
    :m_Val(val){
    }

    Example &operator= (const Example& rhs){
        m_Val = rhs.m_Val+10;
        return *this;
    }

    void print(){
        printf("%d\n", m_Val);
    }
private:
    int m_Val;
};

//int main(){
//    Example eg5 = 4;
//    Example eg6(5);
//    Example eg7(6);
//
//    //Assignment
//    eg7 = eg6 = eg5;
//
//    eg5.print();
//    eg6.print();
//    eg7.print();
//
//
//    return 0;
//
//}

