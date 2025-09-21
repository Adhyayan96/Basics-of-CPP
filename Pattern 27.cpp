#include <iostream>
using namespace std;
/*
    1
  121
 12321
1234321
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int col = 1;
    int value = 1;
    while (col<=n-row){
        cout << ' ';
        col++;
    }
    while (col>n-row && col<=n) {
        cout << value;
        value++;
        col++;
    }
    int start = row - 1;
    while (start) {
        cout << start;
        start -=1;
    }
        cout << "\n";
        row++;
    }
    return 0;
}