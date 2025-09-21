#include <iostream>
using namespace std;
/*
  *
 **
***
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    char space = ' ';
    int col = 1;
    while (col<=n-row) {
        cout << space;
        col++;
    }
    while (col>=n-row && col<=n) {
        cout << '*';
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}