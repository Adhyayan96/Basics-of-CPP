#include <iostream>
using namespace std;
/*
321
321
321
*/

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i<=n) {
        int j = 3;
        while (j>=1) {
            cout << j;
            j--;
    }
        cout << "\n";
        i++;
    }
    return 0;
}