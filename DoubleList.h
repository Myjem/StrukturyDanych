#include "node_double.h"

class DoubleList{
private:
    node_double* head = NULL;
    node_double* tail = NULL;
    int size = 0;
public:
    DoubleList();
    void append(int i,int data); //TODO
    void push_back(int data);
    void del_back();
    void push_front(int data);
    void del_front(); 
    void del(int i); //TODO
    node_double* search(int data);
    void printdata();
    ~DoubleList();
};