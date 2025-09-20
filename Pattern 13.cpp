#include <iostream>
using namespace std;
/*
ABC
DEF
GHI
*/

int main() {
int n;
cin >> n;
int row = 1;
char count = 'A';
while (row<=n) {
    int col = 1;
    while (col<=n) {
        cout << count;
        col++;
        count++;
    }
    cout << "\n";
    row++;
}
return 0;
}