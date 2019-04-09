#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

void run_001() {
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

        #if defined(_WIN32) || defined(_WIN64)
        Sleep(100);
        #else
        sleep(100);
        #endif

        process++;
    }

    cout << "И так, вот результат:" << endl <<
         a << " + " << b << " = " << res << endl;

    cout << "Спасибо, что воспользовались столь бесполезной программой. Удачи!" << endl;
}
