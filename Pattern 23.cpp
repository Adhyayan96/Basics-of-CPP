#include <iostream>
using namespace std;
/*
1111
 222
  33
   4
*/

int main() {
int n;
cin >> n;
int row = 1;
int value = 1;
while (row<=n) {
    int col = 1;
    while (col<=row - 1) {
        cout << ' ';
        col++;
    }
    while (col>=row - 1 && col<=n) {
        cout << value;
        col++;
    }
    cout << "\n";
    value++;
    row++;
}
return 0;
}