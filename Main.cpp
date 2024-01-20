#include <iostream>
#include "Vector3D.h"
#include "Test.h"
using namespace std;
int main() {
    double x, y, z;
    setlocale(LC_ALL, "Russian");
    char operation;
    char back;

    Vector3D a, b;
    if (runTests()) {
        std::cout << "Юнит-тесты пройдены успешно!" << std::endl;
    }
    else {
        std::cerr << "Юнит-тесты не пройдены!" << std::endl;
    }

    do {
        cout << "1. Ввести векторы\n2. Сложить векторы\n3. Вычесть векторы\n4. Вычислить скалярное произведение\n5. Вычислить длину векторов\n6. Вычислить косинус угла между векторами\n7. Выйти\nВыберите операцию: ";
        cin >> operation;

        switch (operation) {
        case '1':
             
            while (true) {
                cout << "Введите координаты вектора a: ";
                if (std::cin >> x >> y >> z) {
                    break;
                }
                else {
                    std::cerr << "Ошибка ввода! Введите целочисленное значение." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
            a = Vector3D(x, y, z);

            while (true) {
                cout << "Введите координаты вектора b: ";
                if (std::cin >> x >> y >> z) {
                    break;
                }
                else {
                    std::cerr << "Ошибка ввода! Введите целочисленное значение." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
            b = Vector3D(x, y, z);
            break;

        case '2':
            cout << "Сумма векторов a и b равна ", (a + b).print();
            cout << "\n\nНажмите 1 для возврата к основному меню или любую другую клавишу для выхода: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '3':
            cout << "Разность векторов a и b равна ", (a - b).print();
            cout << "\n\nНажмите 1 для возврата к основному меню или любую другую клавишу для выхода: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '4':
            cout << "Скалярное произведение векторов a и b равно " << a.dotProduct(b);
            cout << "\n\nНажмите 1 для возврата к основному меню или любую другую клавишу для выхода: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '5':
            cout << "Длина вектора a: " << a.length() << "\nДлина вектора b: " << b.length();
            cout << "\n\nНажмите 1 для возврата к основному меню или любую другую клавишу для выхода: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '6':
            cout << "Косинус угла между векторами a и b: " << a.cosineAngle(b);
            cout << "\n\nНажмите 1 для возврата к основному меню или любую другую клавишу для выхода: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '7':
            cout << "Выход из программы.";
            break;

        default:
            cout << "Неверный ввод, попробуйте снова.";
        }

        cout << std::endl;
    } while (operation != '7');

    return 0;
}
