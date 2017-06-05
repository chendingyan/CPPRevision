#include <iostream>
using namespace std;

void foo1(){
    int *iarray = new int[100];
    for(int i = 0; i < 100; i++){
        iarray[i] = rand();
        if((iarray[i]%5) == 0){
            cout << "end" << i;
            return;
        }
        cout << iarray[i] << " ";
    }
    delete [] iarray;
}

struct MyClass1{
    MyClass1(){cout << "C";}
    ~MyClass1(){cout << "D";}
};

void barbar(){
    throw 1;
}

void foofoo(){
    MyClass1 * pOb = new MyClass1;
    barbar();
    delete pOb;
}


//int main(){
////    foo1();
//    try{
//        foofoo();
//    }catch (...){
//        cout << "E";
//    }
//    cout << endl;
//}

