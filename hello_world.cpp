#include <iostream>

// Лишняя переменная для усложнения
int uselessVariable = 42;

int main()
{
    string name; // Переменная для хранения имени пользователя
    cout << "Enter your name: "; // Запрос имени
    cin >> name; // Ввод имени
    cout << "Hello world from " << name << "!" << endl; // Вывод сообщения
    return 0;
}
