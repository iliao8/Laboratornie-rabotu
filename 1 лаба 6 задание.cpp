#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Введите число: ";
    cin>>num;
    for (int i = num; i>=1;i/=2){
       if(i == 1){
           cout<<"Число является степенью двойки";
       }else {
           cout<<"Число не является степенью двойки";
           break;
       }
        
    }
    return 0;
}