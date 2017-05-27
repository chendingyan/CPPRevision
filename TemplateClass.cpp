#include <iostream>
using namespace std;

class MyLinkedList{
    struct Entry{
        struct Entry * pNext;
        int iData;
    };
    Entry * _pHead;
public:
    MyLinkedList():_pHead(nullptr){}

    void insertHead(int iData){
        Entry * pNewEntry = new Entry();
        pNewEntry->pNext = _pHead;
        pNewEntry->iData = iData;
        _pHead = pNewEntry;
    }

    void list(){
        Entry* pEntry = _pHead;
        while(pEntry!= nullptr){
            cout << pEntry->iData << endl;
            pEntry = pEntry->pNext;
        }
    }
};

template <typename T>
class TemplateLinkedList{
    struct Entry{
        struct Entry * pNext;
        T iData;
    };
    Entry * _pHead;

public:
    TemplateLinkedList():_pHead(nullptr){}
    void insertHead(T iData){
        Entry * pNewEntry = new Entry();
        pNewEntry->pNext = _pHead;
        pNewEntry->iData = iData;
        _pHead = pNewEntry;
    }

    void list(){
        Entry* pEntry = _pHead;
        while(pEntry!= nullptr){
            cout << pEntry->iData << endl;
            pEntry = pEntry->pNext;
        }
    }

};


int main(){
    MyLinkedList list;
    list.insertHead(4);
    list.insertHead(6);
    list.insertHead(7);
    list.insertHead(2);
    list.list();

    TemplateLinkedList<int> Tlist;
    Tlist.insertHead(4);
    Tlist.insertHead(6);
    Tlist.insertHead(7);
    Tlist.insertHead(2);
    Tlist.list();
    return 0;
}
