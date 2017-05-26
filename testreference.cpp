#include <cstdio>

void test1(){
    int i = 9;
    int &j = i;
    j = 4;
    printf("%d, %d\n", i, j);
}

int CopyFunction(int a, int b){
    a+=b;
    return b;
}

void test2(){
    int i = 2;
    int j = 3;
    int k = CopyFunction(i, j);
    k+= 4;
    printf("%d, %d, %d\n", i, j, k);
    return;
}

int RefFunction1(int &a, int &b){
    a+=b;
    return b;
}

void test3(){
    int i = 2;
    int j = 3;
    int k = RefFunction1(i, j);
    k+= 4;
    printf("%d, %d, %d\n", i, j, k);
    return;
}

int & RefFunction2(int &a, int &b){
    a+=b;
    return b;
}

void test4(){
    int i = 2;
    int j = 3;
    int &k = RefFunction2(i, j);
    k+= 4;
    printf("%d, %d, %d\n", i, j, k);
    return;
}
//
//int main(){
//    test1();
//    test2();
//    test3();
//    test4();
//}
