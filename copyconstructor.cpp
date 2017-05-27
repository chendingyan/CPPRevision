#include <cstdio>

class Example{
public:
    Example(int val = 1)
    :m_Val(val){
    }

    Example(const Example& rhs)
    :m_Val(rhs.m_Val+1){
    }

    void print(){
        printf("%d\n", m_Val);
    }
private:
    int m_Val;
};

int main(){
    Example eg1;
    Example eg2(2);

    Example eg3 = eg2;  //In this way, it is initialisation, will use copy constructor

    Example eg4;
    eg4 = eg2;  //In this way, it is declare and assignment, will not use copy constructor

    eg1.print();
    eg2.print();
    eg3.print();
    eg4.print();
    return 0;

}
