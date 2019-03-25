#include <iostream>
#include <regex>
#include "Collection.h"
using namespace std;

StringCollection multipleReg(string in, regex reg) {
    StringCollection sc;
    smatch matches;

    while (regex_search(in, matches, reg)) {
        sc.add(matches[0]);
        in = matches.suffix();
    }

    return sc;
};

void run_002() {
    const string in = "(123123+21323)+(4123)";
    const regex reg ("\\(.*?\\)" );

    StringCollection u = multipleReg(in, reg);

    StringItem* iter = u.getItem(0);
    while(iter) {
        cout << (*iter).value << endl;
        iter = (*iter).item;
    }
};

