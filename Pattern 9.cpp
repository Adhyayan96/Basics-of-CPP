#include <iostream>
using namespace std;
/*
1
2 3
3 4 5 
4 5 6 7
*/

int main() {
   int n;
   cin >> n;
   int row = 1;
   while (row<=n) {
    int col = 1;
    int value = row;
    while (col<=row) {
        cout << value << " ";
        col++;
        value++;
    }
    cout << "\n";
    row++;
   }
   // Another way to solve it 
   int row2 = 1;
   while (row2<=n) {
    int col = 1;
    while (col<=row2) {
        cout << row2 + col - 1 << " ";
        col++;
    }
    cout << "\n";
    row2++;
   }
return 0;
}