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

class SmarterPtr{
public:
    SmarterPtr(MyData * pData)
            :m_pData(pData),
             m_pCount(new int){
        * m_pCount = 1;
    }
    SmarterPtr( SmarterPtr& refOther )
            : m_pData( refOther.m_pData )
            ,m_pCount( refOther.m_pCount )
    {
        cout << "\tPointer incrementing ref count on object" << endl;
        (*m_pCount)++;
    }

    SmarterPtr& operator = (SmarterPtr& refOther)
    {
        release();
        m_pData = refOther.m_pData;
        m_pCount = refOther.m_pCount;
        cout << "\tPointer incrementing ref count on object" << endl;
        (*m_pCount)++;
        return *this;
    }

    MyData & operator * ()
    {
        return *m_pData;
    }

    MyData* operator -> ()
    {
        return m_pData;
    }

    void release()
    {
        if ( *m_pCount == 1 )
        {
            cout << "\tPointer destroying object" << endl;
            if ( m_pData != nullptr )
                delete m_pData;
        }
        else
        {
            cout << "\tPointer decrementing ref count on object" << endl;
            (*m_pCount)--;
        }
        m_pData = nullptr;
        m_pCount = nullptr;
    }

    ~SmarterPtr()
    {
        release();
    }


protected:
    MyData * m_pData;
    int * m_pCount;
};

//int main(){
////    MyData* pStupidPtr = new MyData("Data1");
////    pStupidPtr->output();
////
////    MyData* pStupidPtr2 = pStupidPtr;
////
////    (*pStupidPtr2).output();
////
////    delete pStupidPtr;
////
////    delete pStupidPtr2;
////    SmarterPtr ptr1(new MyData("Data2"));
////    {
////        SmarterPtr ptr2 = ptr1;
////        ptr2->output();
////        cout << "ptr2 about to die" << endl;
////    }
////    (*ptr1).output();
////    cout <<"ptr1 about to die" << endl;
//    MyData* pData = new MyData("Data3");
//    {
//        {
//            cout << "Create Upointer which owns it" << endl;
//            unique_ptr<MyData> uptr2(pData);
//            uptr2->output();
//        }
//        cout <<"Upointer destroyed - so was data" << endl;
//        unique_ptr<MyData> uptr1;
//        {
//            cout << "Create upointer which owns new object" << endl;
//            unique_ptr<MyData> uptr2(new MyData("Data4"));
//            uptr2->output();
//            uptr1.swap(uptr2);
//
//        }
//        uptr1->output();
//        cout <<"Upointer2 destruction has not destroyed object"<<endl;
//    }
//    cout <<"Upointer1 destruction should have destroy object"<<endl;
//}
