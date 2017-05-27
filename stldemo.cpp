//how to new an array
//how to traversal array in two ways(iterator and for each loop)
//how to sort the array using existing algorithm
//how to reverse an array
//how to reverse the array and output it using output stream
#include <cstdio>
#include <vector>
#include <array>
#include <iostream>
using namespace std;

void testvector(){
    vector<int> vector1(10);

    for(int i = 0; i< vector1.size(); i++){
        vector1[i] = i;
    }
    vector1.push_back(100); //what push_back do is to expand one size
    for(auto it = vector1.begin(); it != vector1.end(); it++){
        cout << *it <<" ";
    }
    cout <<endl;
}

void testarray(){
    array<int, 10> arr = {2,4,5,10,1,3,6,20,31,7};
    sort(arr.begin(), arr.end());

    array<int, 10>::iterator it = arr.begin();
    for(; it!= arr.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    reverse(arr.begin(), arr.end());
    //another way to traversal
    for(auto &i: arr){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    testvector();
    testarray();

}
