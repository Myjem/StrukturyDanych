#include "UI.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include "ArrayList.h"
#include "SingleListHead.h"
#include "SingleListHT.h"
#include "DoubleList.h"
using namespace std;
void Ui(){
    while(true){
        int number;
        cout<<"Wybierz strukture: "<<endl;
        cout<<"[1] Tablica dynamiczna"<<endl;
        cout<<"[2] Lista jednokierunkowa z headem"<<endl;
        cout<<"[3] Lista jednokierunkowa z headem i tailem"<<endl;
        cout<<"[4] Lista dwukierunkowa"<<endl;
        cout<<endl<<"[0] Zakoncz"<<endl<<endl;
        cout<<"Wybor: "<<endl;
        cin>>number;
        cout<<endl;
        switch(number){
            case 0:{
                cout<<"END";
                return ;
            }
        }

        //menu wyswietlanie wyboru struktury
        //zbudujz pliku, usun, dodaj, znajdz, utworz losowo, wyswietl
    }

}