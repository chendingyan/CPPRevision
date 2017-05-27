#include <cstdio>

class BaseClass{
public:
    char * foo(){
        return "Base Foo";
    }

    virtual char * bar(){
        return "Base Bar";
    }
};

class SubClass : public BaseClass{
public:
    char * foo(){
        return "Sub Foo";
    }

    char * bar(){
//        return BaseClass::bar();
        return "Sub Bar";
    }
};

void displayFunctionOverriden(){
    SubClass * pSub = new SubClass;
    printf("foo = %s, bar = %s", pSub->foo(), pSub->bar());
    delete pSub;
}

void displayNoVirtualFunction(){
    SubClass * pSub = new SubClass;
    BaseClass * pBase = pSub;
    printf("sub foo = %s, base foo = %s", pSub->foo(), pBase->foo());
    delete pSub;
}

void displayVirtualFunction(){
    SubClass * pSub = new SubClass;
    BaseClass * pBase = pSub;
    printf("sub bar = %s, base bar = %s", pSub->bar(), pBase->bar());
    delete pSub;
}

int main(){
//    displayNoVirtualFunction();
    displayVirtualFunction();
}
