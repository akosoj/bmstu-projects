#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main() {
    int a=0; // инициализация переменной
    // вывод выбора на экран
    cout << "Введите '1' , чтобы узнать телефоны экстренных служб" << endl;
    cout << "Введите '2' , чтобы узнать телефон справочной службы" << endl;
    cout << "Введите '3' , чтобы оставить положительный отзыв" << endl;
    cout << "Введите '4' , чтобы оставить отрицательный отзыв" << endl;
    // ввод соответсвующего числа
    cout << "Ввод: ";
    cin >> a;
    switch (a) {
        case 1: { // вывод информации при нажатии 1
            cout << "Пожарная (МЧС) - 01" << endl;
            cout << "Полиция - 02" << endl;
            cout << "Скорая медицинская помощь - 03" << endl;
            cout << "Аварийная служба газовой сети - 04" << endl;
            cout << "Единая служба спасения - 112" << endl;
            break;
        }
        case 2: { // вывод информации при вводе 2
            cout << "Телефон справочной службы - (495)777-77-77" << endl;
            break;
        }
        case 3: { // вывод информации при вводе 3
            cout << "Спасибо за положительный отзыв!" << endl;
            break;
        }
        case 4: { // вывод информации при вводе 4
            cout << "Спасибо! Мы учтем ваш отзыв." << endl;
            break;
        }
        default: { // вывод информации при вводе остальных цифр
            cout << "Такой команды не существует" << endl;
        }
    }
    return 0;
}
