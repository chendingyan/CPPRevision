#include <iostream>
#include <memory>
using namespace std;

class MyData{
public:
    MyData(const char * pName)
            :m_pName(pName)
    { cout << "Data created: " << m_pName << endl;}

    ~MyData(){
        cout << "Data destroyed: " << m_pName << endl;
    }

    void output(){
        cout << "Output called for: " << m_pName << endl;
    }
protected:
    const char* m_pName;
};
//int main(){
////    MyData * pData = new MyData("Data3");
////    {
////        {
////            cout << "Create Upointer which owns it" << endl;
////            unique_ptr<MyData> uptr2(pData);
////            uptr2->output();
////        }
////        cout << "Upointer destroyed - so was data" << endl;
////    }
//    unique_ptr<MyData>
//}
