#ifndef MAIN_CPP_SINGLELISTHT_H
#define MAIN_CPP_SINGLELISTHT_H
#include "node_single.h"
class SingleListHT{
private:
    node_single*head = nullptr;
    node_single*tail = nullptr;
    int size;
public:
    SingleListHT();
    void append(int i,int data);
    void push_back(int data); 
    void del_back(); 
    void push_front(int data);
    void del_front();
    void del(int i);
    node_single* search(int data);
    ~SingleListHT();
};

#endif
