#include <iostream>
using namespace std;

void kmi(); // прототип, если его тут не будет а функцию будешь прописывать под main(), то main()
// не будет знать о ее существовании

double svoris, ugis;
double indeksas;
int main() {
    cout << "Iveskite svori in kg" << endl;
    //юзер вводит свои данные
    cin >> svoris;
    cout << "Iveskite ugi in cm" << endl;
    cin >> ugis;
    ugis = ugis / 100; //переводим в метры
    //вызываем функцию
    kmi();

    //выведем комментарий опираясь на то какой индекс
    if (indeksas < 18.5) {
        cout << "Per mazas kmi" << endl;
    }
    else if (indeksas >= 18.5 && indeksas <= 24.9) {
        if (indeksas == 22) {
            cout << "Idealus indeksas" << endl;
        }
        else { cout << "Normalus indeksas" << endl; }
    }
    else {
        cout << "Per didelis indeksas" << endl;
    }

    return 0;
}

void kmi() {
    indeksas = svoris / (ugis * ugis);
}