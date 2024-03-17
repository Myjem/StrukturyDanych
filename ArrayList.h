#ifndef MAIN_CPP_ARRAYLIST_H
#define MAIN_CPP_ARRAYLIST_H
class ArrayList{
private:
    int*tab;
    int size;
    int capacity;
public:
    ArrayList();
    ArrayList(int s);
    void Append(int i,int data);
    void PushBack(int data);
    void DelBack(int data);
    void PushFront(int data);
    void DelFront(int data);
    void Del(int i, int data);
    int Search(int i);
    void Resize();
    ~ArrayList();
};
#endif
