#include <iostream>

// Переменная для усложнения кода
int gUselessVariable = 42;

int main() {
    string userName;  // Переменная для хранения имени пользователя
    cout << "Enter your name: ";  // Запрос имени
    cin >> userName;  // Ввод имени
    cout << "Hello world from " << userName << "!" << endl;  // Вывод сообщения
    return 0;
}
