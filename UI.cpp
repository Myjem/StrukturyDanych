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
            case 1:{
                while(True)
                {
                    cout << "Wybierz operacje" << endl;
                    cout << "[1] ";

                }

            }
            case 2:{

            }
            case 3:{
                while(True)
                {
                    int n;
                    cout << "Wybierz operacje" << endl;
                    cout << "[1] Stwórz pustą liste" << endl;
                    cout << "[2] Stwórz listę z losowymi danymi" << endl;
                    cout << "[3] Dodaj na początek listy" << endl;
                    cout << "[4] Dodaj na koniec listy" << endl;
                    cout << "[5] Dodaj w dowolym miejscu" << endl;
                    cout << "[6] Usuń pierwszy element" << endl;                        //dobra nie chce mi sie tego robic na wykladzie, ide chwile posluchac co on gada
                    cout << "[7] Usuń ostatni element" << endl;
                    cout << "[8] Usuń dowolny element" << endl;
                    cout << "[9] Przeszukaj liste" << endl;
                    cout << "[10] Wróć" << endl;
                    cout << "Wybór" << end;
                    cin >> n;
                    cout << endl;
                    switch(n){
                        case 1:{

                        }
                        case 2:{
                            
                        }
                        case 3:{
                            
                        }
                        case 4:{
                            
                        }
                        case 5:{
                            
                        }
                        case 6:{
                            
                        }
                        case 7:{
                            
                        }
                        case 8:{
                            
                        }
                        case 9:{
                            
                        }
                        case 10:{
                            
                        }
                    }

                }

            }
            case 4: {

            }      
        }

        //menu wyswietlanie wyboru struktury
        //zbudujz pliku, usun, dodaj, znajdz, utworz losowo, wyswietl
    }

}