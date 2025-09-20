#include <iostream>
using namespace std;
/*
ABC
ABC
ABC
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int col = 1;
    char val = 'A';
    while (col<=n) {
        cout << val;
        col++;
        val++;
    }
    cout << "\n";
    row++;
}
return 0;
}