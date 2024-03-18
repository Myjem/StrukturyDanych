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
    void append(int i,int data);
    void push_back(int data);
    void del_back();
    void push_front(int data);
    void del_front();
    void del(int i);
    int search(int data);
    ~SingleListHT();
};

#endif
