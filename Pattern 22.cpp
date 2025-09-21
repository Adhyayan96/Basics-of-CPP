#include <iostream>
using namespace std;
/*
****
 ***
  **
   * 
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    char star = '*';
    int col = 1;
    while (col<=row - 1) {
        cout << ' ';
        col++;
    }
    while (col>=row - 1 && col<=n) {
        cout << star;
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}