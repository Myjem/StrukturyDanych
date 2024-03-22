#ifndef MAIN_CPP_SINGLELISTHT_H
#define MAIN_CPP_SINGLELISTHT_H
class SingleListHT{
private:
    node_single*head = nullptr;
    node_single*tail = nullptr;
    int size;
public:
    SingleListHT();
    void append(int i,int data);  //TODO
    void push_back(int data); 
    void del_back();  //TODO
    void push_front(int data);
    void del_front();
    void del(int i);  //TODO
    int search(int data);  //TODO
    ~SingleListHT();   //TODO
};

#endif
