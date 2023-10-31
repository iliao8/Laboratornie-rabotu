#include<iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(0,"");
string str ;
cout<<"Введите слово для проверки";
cin >>str;

bool f = 1;

for ( int i = 0;i < str.length() / 2; i++)
{
if(str[i] != str[str.length()-1-i])
    {
        f = 0;
       
        break;
    }
    
}
 cout<<f;
 cout<<"\n Если 1 то Палиндром,если 0 то не Палиндром";



    return 0;
}