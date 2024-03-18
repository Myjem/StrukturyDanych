
#include <iostream>
#include "ArrayList.h"
#include "SingleListHead.h"
#include "SingleListHT.h"
#include "DoubleList.h"

using namespace std;

int main()
{
    ArrayList tab(10);
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;

    for(int i=0;i<10;i++) tab.append(i,i*10);
    for(int i=0;i<tab.get_size();i++) cout<<tab.get(i)<<" ";
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;

    tab.push_back(2137);
    for(int i=0;i<tab.get_size();i++) cout<<tab.get(i)<<" ";
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;

    tab.push_back(222);
    for(int i=0;i<tab.get_size();i++) cout<<tab.get(i)<<" ";
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;

    tab.del_back();
    for(int i=0;i<tab.get_size();i++) cout<<tab.get(i)<<" ";
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;

    tab.del(0);
    for(int i=0;i<tab.get_size();i++) cout<<tab.get(i)<<" ";
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;

    tab.del(0);
    for(int i=0;i<tab.get_size();i++) cout<<tab.get(i)<<" ";
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;

    tab.push_front(2024);
    for(int i=0;i<tab.get_size();i++) cout<<tab.get(i)<<" ";
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;

    tab.del_front();
    for(int i=0;i<tab.get_size();i++) cout<<tab.get(i)<<" ";
    cout<<endl<<"capacity: "<<tab.get_capacity()<<endl;
    cout<<"size: "<<tab.get_size()<<endl;
    cout<<tab.search(20);
    return 0;
}