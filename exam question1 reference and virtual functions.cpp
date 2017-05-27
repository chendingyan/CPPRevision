#include <cstdio>

class Base{
protected:
    int i;
public:
    virtual int a() { return  i+1; }
    int b(){ return i+2; }
    void set(int n){i = n;}

};

class Sub: public Base{
public:
    int a(){ return i+3; }
    int b(){ return i+4; }
    void set(int n){i = n+5;}
};

int main(){
    Sub s;
    Base& r = s;
    s.set(10);
    printf("%d, %d, %d, %d\n", s.a(), s.b(), r.a(), r.b());

    r.set(20);
    printf("%d, %d, %d, %d\n", s.a(), s.b(), r.a(), r.b());
    return 0;

}
