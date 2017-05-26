/*
 * Lec 05
 * You should be aware of that "Do not refer to data on the stack outside the function"
 * Like here : return &iLocal is dangerous
 */
#include <cstdio>

int iGlobal = 1;

int * funcstatic(){
    static int iStatic = 10;
    iStatic++;
    return &iStatic;
}

int * funclocal(){
    int iLocal = iGlobal;
    iLocal++;
    return &iLocal;
}

int overwrite(){
    int iOverwrite1 = 20;
    int iOverwrite2 = 30;
    iOverwrite1 = iOverwrite2;
    return iOverwrite1;
}

int main(){
    int * piStatic = funcstatic();
    int * piLocal = funclocal();

    funcstatic();
    funclocal();

    printf("%d, %d, %d\n", iGlobal, *piStatic, *piLocal);

    overwrite();

    printf("%d, %d, %d\n", iGlobal, *piStatic, *piLocal);
    return 0;
}