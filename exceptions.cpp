#include <iostream>
using namespace std;

void bar2(){
    switch (rand() % 3){
        case 0: throw 1.2f;
        case 1: throw "string";
        case 2: throw new string("String");
    }
}

void bar(){
    try {
        bar2();
    }catch (float f){
        cout << "Catch float!" << endl;
    }
}

void foo(){
    try {
        bar();
    }catch (const char * sz){
        cout << "Catch char *" << endl;
    }
}

int main(){
    for (int i = 0; i < 20; i++){
        try{
            foo();
        }catch(...){
            cout << "Other" << endl;
        }
    }
}
