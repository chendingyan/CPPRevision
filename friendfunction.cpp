#include <cstdio>

class Friendly{
private:
    int _i;
public:
    Friendly(int i = 4): _i(i){

    }

    friend void FriendFunc(const char * msg, Friendly & ob);

};

void FriendFunc(const char * msg, Friendly &ob){
    printf( "%s : _i = %d\n", msg, ob._i );
}
//
//int main(){
//    Friendly d1(2), d2;
//    FriendFunc("d1", d1);
//    FriendFunc("d2", d2);
//}
