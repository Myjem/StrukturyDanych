#ifndef MAIN_CPP_SINGLELISTHEAD_H
#define MAIN_CPP_SINGLELISTHEAD_H
#include "node_single.h"
#include <iostream>
class SingleListHead{
private:
    node_single*head=NULL;
    int size=0;
public:
    SingleListHead();
    void append(int i,int data);
    void push_back(int data);
    void del_back();
    void push_front(int data);
    void del_front();
    void del(int i);
    node_single* search(int data);
    int get(int i);
    int get_size();
    ~SingleListHead();

};
#endif
