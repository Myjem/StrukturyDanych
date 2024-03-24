#include "node_double.h"
#include<iostream>

class DoubleList{
private:
    node_double* head = NULL;
    node_double* tail = NULL;
    int size = 0;
public:
    DoubleList();
    void append(int i,int data);
    void push_back(int data);
    void del_back();
    void push_front(int data);
    void del_front(); 
    void del(int i);
    node_double* search(int data);
    void print_data();
    ~DoubleList();
};