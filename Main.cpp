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
        std::cout << "����-����� �������� �������!" << std::endl;
    }
    else {
        std::cerr << "����-����� �� ��������!" << std::endl;
    }

    do {
        cout << "1. ������ �������\n2. ������� �������\n3. ������� �������\n4. ��������� ��������� ������������\n5. ��������� ����� ��������\n6. ��������� ������� ���� ����� ���������\n7. �����\n�������� ��������: ";
        cin >> operation;

        switch (operation) {
        case '1':
             
            while (true) {
                cout << "������� ���������� ������� a: ";
                if (std::cin >> x >> y >> z) {
                    break;
                }
                else {
                    std::cerr << "������ �����! ������� ������������� ��������." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
            a = Vector3D(x, y, z);

            while (true) {
                cout << "������� ���������� ������� b: ";
                if (std::cin >> x >> y >> z) {
                    break;
                }
                else {
                    std::cerr << "������ �����! ������� ������������� ��������." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
            b = Vector3D(x, y, z);
            break;

        case '2':
            cout << "����� �������� a � b ����� ", (a + b).print();
            cout << "\n\n������� 1 ��� �������� � ��������� ���� ��� ����� ������ ������� ��� ������: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '3':
            cout << "�������� �������� a � b ����� ", (a - b).print();
            cout << "\n\n������� 1 ��� �������� � ��������� ���� ��� ����� ������ ������� ��� ������: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '4':
            cout << "��������� ������������ �������� a � b ����� " << a.dotProduct(b);
            cout << "\n\n������� 1 ��� �������� � ��������� ���� ��� ����� ������ ������� ��� ������: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '5':
            cout << "����� ������� a: " << a.length() << "\n����� ������� b: " << b.length();
            cout << "\n\n������� 1 ��� �������� � ��������� ���� ��� ����� ������ ������� ��� ������: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '6':
            cout << "������� ���� ����� ��������� a � b: " << a.cosineAngle(b);
            cout << "\n\n������� 1 ��� �������� � ��������� ���� ��� ����� ������ ������� ��� ������: ";
            cin >> back;
            if (back != '1') operation = '7';
            break;

        case '7':
            cout << "����� �� ���������.";
            break;

        default:
            cout << "�������� ����, ���������� �����.";
        }

        cout << std::endl;
    } while (operation != '7');

    return 0;
}