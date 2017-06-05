#include <iostream>
using namespace std;
class Converter{
public:
    Converter(int i = 4);
    operator int();
    int _i;
};

//conversion constructor
Converter::Converter(int i):_i(i){
    cout << "Constructing from int\n";
};

//conversion operator
Converter::operator int() {
    cout <<"Constructing to int\n";
    return _i;
}

//int main(){
//    int i =14;
//    Converter c1(5);
//    Converter c2 = i;
//    cout << c2._i;
//
//    int j = (int)c1;
//    cout << j;
//}
