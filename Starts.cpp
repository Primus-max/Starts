//  Написать рекурсивную функцию, которая
//  выводит N звезд в ряд, число N задает пользователь.Проиллюстрируйте работу функции примером.

#include <iostream>
#include <iostream>
#include <windows.h>
using namespace std;

void PrintStars(int N);

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N;

    cout << "Введите число N чтобы увидеть звёзды: ";
    cin >> N;

    cout << "Вывод " << N << " звезд в ряд: ";
    PrintStars(N);
    cout << endl;

    return 0;
}

void PrintStars(int N) {
    if (N <= 0) {
        return;
    }
    else {
        cout << "* ";
        PrintStars(N - 1);
    }
}
