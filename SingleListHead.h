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
    void append(int i,int data);
    void push_back(int data);
    void del_back(int data);
    void push_front(int data);
    void del_front(int data);
    void del(int i, int data);
    int search(int data);
    ~SingleListHead();

};
#endif
