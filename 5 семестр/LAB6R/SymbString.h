//
// Created by RaCHe on 22.02.2020.
//
#include <string>
#include <iostream>
#ifndef LAB6R_SYMBSTRING_H
#define LAB6R_SYMBSTRING_H

using namespace std;

class SymbString {
protected:
    string s;


public:
    SymbString(const string& s) {
        this -> s = s;
    }
    string get() const;
    void set(const string& s1);
    string operator +(const SymbString& o);
};


#endif //LAB6R_SYMBSTRING_H
