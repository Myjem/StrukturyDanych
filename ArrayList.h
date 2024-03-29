#ifndef MAIN_CPP_ARRAYLIST_H
#define MAIN_CPP_ARRAYLIST_H
#include<iostream>
class ArrayList{
private:
    int*tab = NULL;
    int size;
    int capacity;
public:
    ArrayList();
    ArrayList(int s);
    void append(int i,int data);
    void push_back(int data);
    void del_back();
    void push_front(int data);
    void del_front();
    void del(int i);
    int search(int data);
    void resize();
    int get(int i);
    int get_size();
    int get_capacity();
    void set(int i,int data);
    ~ArrayList();
};
#endif

