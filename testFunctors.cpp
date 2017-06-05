#include <iostream>
using namespace std;
//simple functors
class MyFunctor1{
public:
    MyFunctor1() = default;
    int operator() (int x, int y){
        return x+y;
    }
};

void simpleFunctors(){
    MyFunctor1 add;
    int a = add(1,2);
    cout << a << endl;
}

class MyFunctor2{
public:
    MyFunctor2(int iAdd):iAdd(iAdd){

    }
    int operator()(int x){
        return x+ iAdd;
    }

protected:
    int iAdd;
};

void FunctorswithMemberData(){
    MyFunctor2 add3(3);
    int b = add3(1);
    cout << b << endl;

    MyFunctor2 add10(10);
    int d = add10(add10(10));
    cout << d << endl;
}

class MyFunctor3{
public:
    MyFunctor3(int & var):var(var){
    }

    int operator() (int x){
        return x + var;
    }
protected:
    int & var;
};

void FunctorsByReference(){
    int iAdd = 5;
    MyFunctor3 addVariable(iAdd);
    cout << addVariable(1) << endl;

    iAdd = 19;
     cout << addVariable(1) << endl;
};

template <typename T>
void ApplyToAllElements(int * aiArray, int iNum, T addfunc){
    for(int i = 0; i < iNum; i++){
        aiArray[i] = addfunc(aiArray[i]);
    }
}

void functorsAsArguments(){
    int aiMyArray[] = {0,1,2,3,4,5,6};
    int iAdd = 20;
    MyFunctor3 addVariable(iAdd);
    ApplyToAllElements(aiMyArray, 7, addVariable);
    for(const int & myelem: aiMyArray){
        cout << myelem << " ";
    }
    cout << endl;
}

//int main(){
//    simpleFunctors();
//    FunctorswithMemberData();
//    FunctorsByReference();
//    functorsAsArguments();
//}
