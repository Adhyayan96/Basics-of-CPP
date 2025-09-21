#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row = 1;
    while (row<=n) {
        int col = 1;
        while (col<=row) {
            cout << col + row - 1;
            col++;
        }
        cout << "\n";
        row++;
    }
    return 0;
}