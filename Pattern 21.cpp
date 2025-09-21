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
    while (col<=n-row + 1) {
        cout << star;
        col++;
    }
    while (col>=n-row && col<=n) {
        cout << ' ';
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}