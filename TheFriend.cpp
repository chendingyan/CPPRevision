#include "TheFriend.h"
#include <cstdio>

void TheFriend::DoSomething(Friendly & dest, const Friendly & src){
    dest._i = src._i+1;
}

//int main(){
//    Friendly d1(2), d2;
//    TheFriend theFriend;
//    theFriend.DoSomething(d1, d2);
//    printf("%d", d1.getter());
//}