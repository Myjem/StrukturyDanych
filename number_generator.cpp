#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;

int main(){
    fstream file;
    srand(time(NULL));
    file.open("test_data_small.txt",ios::out);
    for(int i=0;i<100000;i++) file<<(rand()%21)-10<<endl;
    file.close();
    file.open("test_data_big.txt",ios::out);
    for(int i=0;i<100000;i++) file<<(rand()%999000001)+1000000<<endl;
    file.close();
    return 0;
}