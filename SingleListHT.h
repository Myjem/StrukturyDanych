#ifndef MAIN_CPP_SINGLELISTHT_H
#define MAIN_CPP_SINGLELISTHT_H
class SingleListHT{
private:
    node_single*head;
    node_single*tail;
    int size;
public:
    SingleListHT();
    SingleListHT(int s);
    void Append(int i,int data);
    void PushBack(int data);
    void DelBack(int data);
    void PushFront(int data);
    void DelFront(int data);
    void Del(int i, int data);
    int Search(int i);
    ~SingleListHT();
};

#endif
