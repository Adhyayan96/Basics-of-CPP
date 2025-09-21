#include <iostream>
using namespace std;
/*
   1
  22
 333
4444
*/

int main() {
int n;
cin >> n;
int row = 1;
int value = 1;
while (row<=n) {
    int col = 1;
    while (col<=n-row) {
        cout << ' ';
        col++;
    }
    while (col>=n-row && col<=n) {
        cout << value;
        col++;
    }
    cout << "\n";
    value++;
    row++;
}
return 0;
}