#include "node_double.h"

class DoubleList{
private:
    node_double* head;
    int size;
public:
    DoubleList();
    DoubleList(int s);
    void append(int i,int data);
    void push_back(int data);
    void del_back();
    void push_front(int data);
    void del_front();
    void del(int i);
    int search(int data);
    ~DoubleList();
};