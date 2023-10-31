#include<iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0,"");

    int x;
    cout<<"Введите число для проверки \n";
cin>> x;

int i = 2;

while(x% i != 0){
i++;
}
if(x==1){
cout<<"Простое число";
}else{
cout<<"Не простое";}




    return 0;
}