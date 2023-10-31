#include<iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0,"");
double x;
cout<<"Введите число для проверки \n";
cin>>x;

if(x>0){
cout<<"Число положительное\n";
}else if(x<0){
cout<<"Число отрицательное \n";
}else if(x == 0){
cout<<"Число является нулём \n";
}else{
cout<<"Вы ввели неизвестные символы \n";
}




    return 0;
}