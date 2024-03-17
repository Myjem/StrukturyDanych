#ifndef MAIN_CPP_SINGLELISTHEAD_H
#define MAIN_CPP_SINGLELISTHEAD_H
#include "node_single.h"
class SingleListHead{
private:
    node_single*head;
    int size;
public:
    SingleListHead();
    SingleListHead(int s);
    void Append(int i,int data);
    void PushBack(int data);
    void DelBack(int data);
    void PushFront(int data);
    void DelFront(int data);
    void Del(int i, int data);
    int Search(int i);
    ~SingleListHead();

};
#endif
