//
// Created by RaCHe on 22.02.2020.
//

#include "SymbString.h"

string SymbString::get() const {
    return s;
}

void SymbString::set(const string& s1) {
    s = s1;
}
 string SymbString::operator+(const SymbString& o) {
    return s + o.get();
}
