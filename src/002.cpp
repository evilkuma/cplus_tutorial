#include <iostream>
#include <regex>
using namespace std;

/**
 * Возводит число num в степень count.
 * @param num int возводимое в степень
 * @param count int значение степерни
 * @return int
 */
int pow(int num, int count) {
    int res = 1;
    for(;count; count--) {
        res *= num;
    }
    return res;
}
/**
 * Возвращает количество чисел в цифре
 * @param num int цифра
 * @return int количество чисел
 */
int cnt_digits(int num) {
    int i = 0;
    for(; num > 0; i++) {
        num /= 10;
    }
    return i;
}

// список целых чисел в формате char
const char charInts[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
/**
 * Преобразует символ в число.
 * @param match char символ соответствующий числу.
 * @return int число, либо если символ не соответствует ни одному из чисел -1.
 */
int charToInt(char match) {
    for(int i = 0; i < 10; i++) {
        if(charInts[i] == match) {
            return  i;
        }
    }
    return -1;
};
/**
 * Преобразует строку в int. Возвращает первое вхожждение цифры в строку.
 *  т.е. 10dasd => 10, dfsfd10 => 0
 * @param match string
 * @return int
 */
int strToInt(string match) {
    int len = match.length();
    int res_len = 0;
    int res_vals[len];

    for(;res_len < len; res_len++) {
        int val = charToInt(match[res_len]);
        res_vals[res_len] = val;
        if(val == -1) break;
    }

    int res = 0;
    for(int i = 0; i < res_len; i++) {
        res += (res_vals[i] * pow(10, res_len - i - 1));
    }

    return res;
};

void run_002() {
    string in = "-10-10+5-8+32";

    int res = 0;

    while(!in.empty()) {
        bool isDiv = false;
        int num = strToInt(in);
        if(!num) {
            isDiv = in[0] == '-';
            in.erase(0, 1);
            num = strToInt(in);
        }
        res += isDiv ? -1*num : num;
        in.erase(0, cnt_digits(num));
    }

    // out 9
    cout << res << endl;
};
