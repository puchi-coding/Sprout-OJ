// Sprout OJ No.217 凱薩密碼
#include <bits/stdc++.h>
using namespace std;

int main() {
    char text;
    while( cin >> text ) {
        cout << (char)((text - 'a' + 3) % 26 + 'a');
    }
    cout << "" << endl;
    return 0;
}
