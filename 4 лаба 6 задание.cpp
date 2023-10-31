#include <iostream>
#include <string>
using namespace std;


int convertBinaryToDecimal(int n) {
    int num = n;
    int DecimalValue = 0;//счетчик,если бы не ноль , то нельзя было бы провдить арифм. действия;
    int base = 1;//начальная степень;
    int temp = num;//темп равно числу который введет пользователь;
    while (temp) { //если темп>0 то цикл выполняется ;
        int lastdigit = temp % 10;//остаток от ;
        temp = temp / 10;
        DecimalValue += lastdigit * base;//увеличивается на значение;
        base = base * 2; //Увеличивается на два, потому что в двочной системе всего два значения 0 и 1;

    }
    return DecimalValue;
}


int main()
{
    setlocale(0, "");

    int num,dec,menu;
    cout << "[1]Из двочиной в 10\n[2]В шестнадцатиричную\nВвод: ";
    cin >> menu;
    switch (menu) {
    case 1:
cout << "Введите число для перевода из двочной СС в десятичную: ";
    cin >> num;

    cout << convertBinaryToDecimal(num);
    break;
    case 2:
        string digits[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
        cin >> dec;//dec-чтение/запись целочисленных значений с использованием десятичного базового формата.
        string hex;//Если установлено значение , целочисленные значения, вставленные в поток, 
        // выражаются в шестнадцатеричной системе счисления (например, в системе счисления 16)
        //Для входных потоков извлеченные значения также должны быть выражены в шестнадцатеричной системе счисления, когда установлен этот флаг.
        do
        {
            hex.insert(0, digits[dec % 16]);
            dec /= 16;
        } while (dec != 0);
        cout << hex << "\n";
        break;
    }
    

    return 0;
}