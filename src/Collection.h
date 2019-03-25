#include <iostream>
using namespace std;

#ifndef TUTORIAL_COLLECTION_H
#define TUTORIAL_COLLECTION_H

class StringItem {
public:
    StringItem(string value);
    string value;
    StringItem *item = nullptr;
};

class StringCollection {
private:
    StringItem *item = nullptr;
    int size = 0;
public:
    void add(string value);
    string get(int i);
    StringItem* getItem(int i);
    int getSize() { return size; };
    string* toArray();
};

#endif //TUTORIAL_COLLECTION_H
