#include <iostream>
using namespace std;
/*
1 2 3 4 
 5 6 7 
  8 9 
   10 
*/

int main() {
int n;
cin >> n;
int row = 1;
int value = 1;
while (row<=n) {
    int col = 1;
    while (col<=row-1) {
        cout << ' ';
        col++;
    }
    while (col>row - 1 && col<=n) {
        cout << value << ' ';
        value++;
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}