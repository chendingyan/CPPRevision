#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void ApplyToAllElements(int * aiArray, int iNum, T addfunc){
    for(int i = 0; i < iNum; i++){
        aiArray[i] = addfunc(aiArray[i]);
    }
}

void basiclambda(){
    int aiMyArray[] = {0 ,1, 2, 3, 4, 5, 6};
    int iAdd = 5;
    iAdd = 7;
    ApplyToAllElements(aiMyArray, 7, [=](int i)->int { return i+iAdd;} );

    for(const int & elem :aiMyArray){
        cout << elem << " ";
    }
    cout << endl;
}

void STLuse(){
    vector<int> vec = {1,2,3,4,5,6,7};
    //Should know what is any_of
    cout << "any_of < 2 : " << any_of(vec.begin(), vec.end(), [](int i){ return i < 2;}) << endl;

    cout << "count_if > 4 : " << count_if(vec.begin(), vec.end(), [](int i)->int { return i > 4;}) << endl;

    cout << "find_if(divisible by 5): " << *find_if(vec.begin(), vec.end(), [](int i){ return !(i%5);}) << endl;
}

int main(){
    STLuse();
}

