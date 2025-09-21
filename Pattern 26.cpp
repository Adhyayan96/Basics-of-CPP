#include <iostream>
using namespace std;
/*
1 2 3 4 
 2 3 4 
  3 4 
   4  
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int col = 1;
    int value = row;
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