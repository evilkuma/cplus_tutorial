
#if defined(_WIN32) || defined(_WIN64)
#include <Windows.h>
#endif

#include <iostream>
#include "src/001.h"
#include "src/002.h"

int main() {

    #if defined(_WIN32) || defined(_WIN64)
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    #endif

    run_002();

    return 0;
}