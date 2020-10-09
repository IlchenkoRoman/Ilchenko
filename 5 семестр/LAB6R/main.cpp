#include <iostream>
#include "DecString.h"

using namespace std;

int main() {
    DecString A(15);
    SymbString B("Kuku");
    cout << A.get() << ' ' << A + B;
    return 0;
}
