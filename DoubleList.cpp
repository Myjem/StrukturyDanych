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
            node = node->next;    //ważne: Tworzymy nowy node PRZED tym który wskazuje node (dając  i=3, tworzymy node w trzecim miejscu, ale jego index tego node to 2 bo liczymy od 0)
        }                               //UPDATE: pomieszałem sie z tymi indexami ide zrobic przerwe XDDDDDD
        newnode->value = data;
        newnode->next = node->next;
        node->next->prev = newnode;
        node->next = newnode;
        newnode->prev = node;            // uhhhhhhhhhhhhhh mam nadzieje ze to jest dobrze lol
    }
    else
    {
        node_double* node = tail;
        for(int j = size - 1; j > i; j--)
        {
            node = node->prev;     //Z TEGO CO WIDZE TO JEST ŹLE, NODE SIE TWORZY ALE NA ZŁYM INDEXIE, POPRAWIE TO JUTRO
        }
        newnode->value = data;
        newnode->prev = node->prev;
        newnode->next = node;
        node->prev->next = newnode;
        node->prev = newnode;    //tu tez mam nadzieje xd (ale jak rysowalem w paincie to bylo git)
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
            node = node->next;      //ważne: USUWAMY TEN NA KTÓRY WSKAZUJE 'NODE'
        }
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
            node = node->prev;                                          //mam nadzieje że te indexy są poprawne ale jak wcześniej sprawdze to juz jutro ig
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
//czemu to sie nie chce zpushowac?