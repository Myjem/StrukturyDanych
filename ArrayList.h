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
    void append(int i,int data);
    void push_back(int data);
    void del_back(int data);
    void push_front(int data);
    void del_front(int data);
    void del(int i, int data);
    int search(int data);
    void resize();
    int get(int i);
    int get_size();
    int get_capacity();
    void set(int i,int data);
    ~ArrayList();
};
#endif
