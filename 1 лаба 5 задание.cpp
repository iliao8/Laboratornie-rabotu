#include<iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(0,"");
int a;
cout<<"Введите число: \n";
cin >> a;
if(a % 3 == 0 && a % 5 == 0){
cout <<"Число является кратным 3 и 5 одновременно";
}else if(a % 3 != 0 && a % 5 != 0){
cout <<"Число не является кратным 3 и 5 одновременно";
}
else 
cout<<"Вы ввели неизвестные символы";




    return 0;
}