#include <cstdio>

void f1(){ printf("f1();"); }
void f2(){ printf("f2();"); }
int f3() {
    printf("f3();");
    return 3;
}

int f4(){
    printf("f4();");
    return 4;
}

int f5(int i){
    printf("f5();");
    return i+1;
}

int f6(int i){
    printf("f6();");
    return i-2;
}

int do10(int (*func)(int)){
    int i = 0; int j = 0;
    for(; i < 10; i++){
        j = func(j);
    }
    return j;
};
//
//
//int main(){
//    void (*g1)() = NULL;
//    void (*g2)() = NULL;
//
//    printf("Test 1: ");
//    g1 = &f1;
//    (*g1)();
//    g1();   //Two way of call function pointers
//
//    printf("\nTest 2: ");
//    g2 = &f2;
//    (*g2)();
//    g2();
//
//    printf("\nTest 3: ");
//    g2 = g1;
//    (*g2)();
//    g2();   //Here what g2 actually is g1 and g1 is f1
//
//    int (*g3)() = NULL;
//    int (*g4)() = NULL;
//
//    printf("\nTest 4: ");
//    g3 = &f3;
//    printf("result = %d ", (*g3)());
//    printf("result = %d ", g3());
//
//    printf("\nTest 5: ");
//    g4 = &f4;
//    printf("result = %d ", (*g4)());
//    printf("result = %d ", g4());
//
//    printf("\nTest 6: ");
//    int (*g5)(int) = NULL;
//    int (*g6)(int) = NULL;
//
//    g5 = &f5;
//    g6 = &f6;
//
//    printf("result = %d ", g5(g3()));
//    printf("result = %d ", g6(g4()));
//
//    printf("\nTest 7: ");
//    printf("%d", do10(g5)); //Callback function
//
//
//}