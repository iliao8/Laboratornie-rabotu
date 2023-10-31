#include<iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0,"");
int x;
cout<<"Введите год: ";
cin>>x;

if(x % 4 == 0 && x % 100 == 0 && x % 400 == 0){
cout<<"Високосный";
}else if(x % 4 == 0 && x % 100 == 0){
cout<<"Не високосный";
}else if(x % 4 == 0 )
{
cout<<"Високосный";
}
else{
cout<<"Вы ввели неизвестные символи,либо год является не високосным";
}




    return 0;
}