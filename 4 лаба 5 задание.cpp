#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int n;
    int id[100];
    int score[100];

    cout << "Введите количество участников: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Введите идентификационный номер участника: ";
        cin >> id[i];
        cout << "Введите количество баллов участника: ";
        cin >> score[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (score[i] < score[j]) {
                id[i], id[j] = id[j], id[i];

                score[i], score[j] = score[j], score[i];

                
               
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "Участник с идентификационным номером " << id[i] << " набрал " << score[i] << " баллов." << endl;
    }

    return 0;
}