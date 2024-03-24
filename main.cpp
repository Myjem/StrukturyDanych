#include <iostream>
#include "ArrayList.h"
#include "SingleListHead.h"
#include "SingleListHT.h"
#include "DoubleList.h"

using namespace std;

int main()
{
    /*ArrayList tab(10);
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
    cout<<tab.search(20);*/
    SingleListHead List;
    List.push_front(10);
    List.push_front(20);
    for(int i=0;i<List.get_size();i++) cout<<List.get(i)<<" ";
    cout<<endl;
    List.del_front();
    for(int i=0;i<List.get_size();i++) cout<<List.get(i)<<" ";
    cout<<endl;
    List.push_back(123);
    for(int i=0;i<List.get_size();i++) cout<<List.get(i)<<" ";
    List.push_front(1234);
    List.append(1,999);
    cout<<endl;
    for(int i=0;i<List.get_size();i++) cout<<List.get(i)<<" ";
    /*List.del_back();
    cout<<endl;
    for(int i=0;i<List.get_size();i++) cout<<List.get(i)<<" ";
    List.del(1);
    cout<<endl;
    for(int i=0;i<List.get_size();i++) cout<<List.get(i)<<" ";*/
    cout<<endl;
    //List.~SingleListHead();
    return(0);
}
