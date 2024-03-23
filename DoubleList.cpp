#include "DoubleList.h"
#include "node_double.h"
#include <iostream>

DoubleList::DoubleList(){};

void DoubleList::push_front(int data)
{
    node_double* node = new node_double;
    node->value = data;
    node->next = head;
    node->prev = nullptr;
    if(head != nullptr) // ustawienie prev pointera nastepnej wartosci na obecnie nowo dodaną
    {
        head->prev = node;
    }
    head = node;
    if(tail == nullptr)  //jeśli lista jest pusta to tail oraz head wskazuja na ten sam node.
    {
        tail = node;
    }
    size++;

}
void DoubleList::push_back(int data)
{
    node_double* node = new node_double;
    node->value = data;
    node->next = nullptr;
    node->prev = tail;
    if(head == nullptr)
    {
        head = node;
    }
    if(tail != nullptr)
    {
        tail->next = node;
    }
    tail = node;
    size++;

}

void DoubleList::del_front()
{
    if(head == nullptr)
    {
        return;
    }
    node_double* temp = head;
    head = head->next;
    if(head != nullptr)
    {
        head->prev = nullptr;
    }
    delete temp;
    size--;
}

void DoubleList::del_back()
{
    if(tail == nullptr)
    {
        return;
    }
    node_double* temp = tail;
    tail = tail->prev;
    if(tail != nullptr)
    {
        tail->next = nullptr;
    }
    delete temp;
    size--;
}

node_double* DoubleList::search(int data)
{
    if(head || tail == nullptr)
    {
        return nullptr;
    }
    node_double* searched = head;
    while(searched != nullptr)
    {
        if(searched->value == data)
        {
            return searched;
        }
        searched = searched->next;
    }
    return nullptr;
}

void DoubleList::append(int i, int data)
{
    if(i > size)
    {
        return;
    }
    else if(i == 0)
    {
        push_front(data);
        return;
    }
    else if(i == size)
    {
        push_back(data);
        return;
    }
    node_double* newnode = new node_double;
    if(i <= (size/2))
    {
        node_double* node = head;
        for(int j = 0; j < i-1; j++)
        {
            node = node->next;              //ważne: Tworzymy nowy node PRZED tym który wskazuje 'node' (dając  i=3, tworzymy node na czwartym miejscu, ale jego index tego node to 3 bo liczymy od 0)
        }                               
        newnode->value = data;
        newnode->next = node->next;
        node->next->prev = newnode;
        node->next = newnode;
        newnode->prev = node;            
    }
    else
    {
        node_double* node = tail;
        for(int j = size - 1; j > i; j--)
        {
            node = node->prev;   
        }
        newnode->value = data;
        newnode->prev = node->prev;
        newnode->next = node;
        node->prev->next = newnode;
        node->prev = newnode;           //Tworzymy nowy node ZA tym na który wskazuje 'node'(i=6 to index nowego node, ale przez to ze liczymy od 0, jest to 7 node w kolejnosci)
    }
    size++;
}

void DoubleList::del(int i) 
{
    if(i > size)
    {
        return;
    }
    else if(i == 0)
    {
        del_front();
        return;
    }
    else if(i == size-1)
    {
        del_back();
        return;
    }
    if(i <= size/2)
    {
        node_double* node = head;
        for (int j = 0; j < i; j++)
        {
            node = node->next;      //usuwamy ten node na który wskazuje wskaźnik
        }                           // jeśli i=6 to usuwamy node z indexem 6. (7 node od początku)
        node->prev->next = node->next;
        node->next->prev = node->prev;
        delete node;
        size--;
    }
    else
    {
        node_double* node = tail;
        for(int j = size - 1; j > i; j--)
        {   
            node = node->prev;                                          
        }                                                                
        node->prev->next=node->next;
        node->next->prev=node->prev;
        delete node;
        size--;
    }

}

void DoubleList::print_data()
{
    node_double* searched = head;
    while(searched != nullptr)
    {
        std::cout << searched->value;
        searched = searched->next;
    }
    return;
}

DoubleList::~DoubleList() {
    while (head != nullptr)
    {
        del_front();
    }
}