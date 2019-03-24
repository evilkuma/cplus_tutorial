#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a, b;

    cout << "Добра пожаловать в сумовалку." << endl
         << "Начнем, введите первое число:" << endl;

    cin >> a;

    cout << "Есть, теперь второе, пожалуйста:" << endl;

    cin >> b;

    cout << "Все верно, выволняю подсчет результата ... " << endl;

    int res = a + b;
    int process = 0;
    while(process != 100) {
        cout << "[" << process << "%]" << " Выполняю расчет" << endl;
        Sleep(100);
        process++;
    }

    cout << "И так, вот результат:" << endl <<
         a << " + " << b << " = " << res << endl;

    cout << "Спасибо, что воспользовались столь бесполезной программой. Улачи!" << endl;

    return 0;
}