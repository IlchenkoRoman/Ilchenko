#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    vector<string> s;
    char buf[20];
    ifstream f("fin.txt");
    while (!f.eof()) {
        f >> buf;
        cout << buf << endl;
        //s.emplace_back(buf);
        //cout << s.back();
        if ((s.back().length() > 4) || (s.back()[3] == '.') || (s.back()[3] == ',') || (s.back()[3] == '!') || (s.back()[3] == '?')) {
            s.pop_back();
        }
    }

    f.close();
    cout << s.size();
    return 0;
}
