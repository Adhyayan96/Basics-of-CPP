#include <iostream>
using namespace std;
/*
     1
    121
   12321
  1234321
 123454321 
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int col = 1;
    int value = 1;
    while (col<=n-row + 1) {
        cout << ' ';
        col++;
    }
    while (col>n- row && col<=n) {
        cout << value;
        value++;
        col++;
    }
    int value2 = row;
    while (col>n && col<=n+row){
        cout << value2;
        value2--;
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}