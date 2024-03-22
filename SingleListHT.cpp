#include "SingleListHT.h"
#include "node_single.h"

SingleListHT::SingleListHT(){}

void SingleListHT::push_front(int data)
{
    node_single* node = new node_single;
    node->value = data;
    node->next = head;
    head = node;
    if(tail == nullptr)
    {
        tail = node;
    }
    size++;
}

void SingleListHT::push_back(int data)
{
    node_single* node = new node_single;
    node->value = data;
    node->next = nullptr;
    if(tail != nullptr)
    {
        tail->next = node;
    }
    tail = node;
    if(head == nullptr)
    {
        head = node;
    }
    size++;
}

void SingleListHT::del_front()
{
    if(size == 0)
    {
        return;
    }
    if(head == tail)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        size--;
        return;
    }
    node_single* temp = head;
    head = temp->next;
    delete temp;
    size--;
}

void SingleListHT::del_back()
{
    if(size == 0)
    {
        return;
    }
    if(head == tail)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        size--;
        return;
    }
    

}