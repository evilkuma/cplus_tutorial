#include "Collection.h"

StringItem::StringItem(string val) {
    this->value = val;
}

string StringCollection::get(int i) {
    StringItem *res = item;
    while (i) {
        res = (*res).item;
        i--;
    }
    return (*res).value;
}
StringItem* StringCollection::getItem(int i) {
    StringItem *res = item;
    while (i) {
        res = (*res).item;
        i--;
    }
    return res;
}

void StringCollection::add(string value) {
    if(item) {
        (*this->getItem(size-1)).item = new StringItem(value);
    } else {
        item = new StringItem(value);
    }
    size++;
}

string* StringCollection::toArray() {
    string *res = new string[size];
    StringItem *iter = item;
    int i = 0;

    while (iter) {
        res[i] = (*iter).value;
        iter = (*iter).item;
        i++;
    }

    return res;
}
