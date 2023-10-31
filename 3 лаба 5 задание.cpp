#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    int size;
    char input_char;
    int p = 0;
    bool work = true;
    char input;
     
    while (work)
    {
        cout << "1 - треугольник 2 - тропеция \nВведите номер фигуры - ";
        cin >> input;
        cout << "Введите размер желаемой фигуры - ";
        cin >> size;
        cout << "Введите символ из которого будет состоять желаемая фигура - ";
        cin >> input_char;
        switch (input)
        {
        case '1':
            p++;
            for (int i = size - 1; i >= 0; i--) {
                for (int spc = 0; spc < i; spc++) {
                    cout << "  ";
                }
                for (int a = 0; a < p; a++) {
                    cout << input_char << " ";
                }
                p += 2;
                cout << "\n";
            }
            work = false;
            break;
        case '2':
            for (int i = size - 1; i >= 0; i--) {
                for (int spc = 0; spc < i; spc++) {
                    cout << "  ";
                }
                for (int x = 0; x < size + p; x++) {
                    cout << input_char << " ";
                }
                p += 2;
                cout << endl;
            }
            work = false;
            break;
         
        default:
            cout << "Не верный символ";
            break;
        }
    }
}