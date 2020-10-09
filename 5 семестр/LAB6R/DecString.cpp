//
// Created by RaCHe on 22.02.2020.
//

#include "DecString.h"

DecString::DecString(int d) : SymbString(s) {
    s = to_string(d);
}

void DecString::set(const int &d) {
    s = to_string(d);
}
