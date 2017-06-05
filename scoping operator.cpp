#include <cstdio>

int i = 1;//global

struct Base{
    int i;

    Base():i(3){}
};

struct Sub : public Base{
    int i;

    Sub():i(2){}

    void modify() {
        int i = 7; //local
        ::i = 4; //global
        Sub::i = 5; //Sub's
        Base::i = 6; //Base's
    }
};


//
//int main(){
//    Sub s;
//    printf("%d, %d, %d\n", i, s.i, s.Base::i);
//    s.modify();
//    printf("%d, %d, %d\n", i, s.i, s.Base::i);
//    return 0;
//}
