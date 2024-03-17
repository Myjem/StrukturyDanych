#include "node_double.h"

class DoubleList{
private:
    node_double* head;
    int size;
public:
    DoubleList();
    DoubleList(int s);
    void Append(int i,int data);
    void PushBack(int data);
    void DelBack(int data);
    void PushFront(int data);
    void DelFront(int data);
    void Del(int i, int data);
    int Search(int i);
    ~DoubleList();
};