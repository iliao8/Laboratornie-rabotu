#include<iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(0,"");
int year;
cout<<"Введите год: ";
cin>>year;
if(year % 100 == 0){
    cout<<"Год считается вековым";
}else{
    cout<<"Год не считается вековым";
}
   

    return 0;
}