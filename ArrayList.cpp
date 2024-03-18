#include "ArrayList.h"
#include <cmath>

using namespace std;

ArrayList::ArrayList() : tab(new int[4]),size(0),capacity(4){};

ArrayList::ArrayList(int s) : tab(new int[s]),size(0),capacity(s){};

void ArrayList::resize() {
    if(size>=capacity){
        capacity*=2;
        int*temp=new int[capacity];
        for(int i=0;i<size;i++) temp[i]=tab[i];
        delete[] tab;
        tab=temp;
    }
    if(size<floor(0.5*capacity)){
        capacity=floor(0.5*capacity);
        int*temp=new int[capacity];
        for(int i=0;i<size;i++) temp[i]=tab[i];
        delete[] tab;
        tab=temp;
    }
}

void ArrayList::append(int i, int data) {
    size++;
    resize();
    for(int j=size-1;j>i;j--) tab[j]=tab[j-1];
    tab[i]=data;
}

void ArrayList::push_back(int data) {
    size++;
    resize();
    tab[size-1]=data;
}

void ArrayList::del_back(int data) {
    size--;
    resize();

}

int ArrayList::get(int i){
    return tab[i];
}

int ArrayList::get_size() {
    return size;
}

int ArrayList::get_capacity() {
    return capacity;
}

void ArrayList::set(int i, int data) {
    tab[i]=data;
}

ArrayList::~ArrayList() {
    delete[] tab;
}