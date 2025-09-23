#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];

/*
instead of taking array values like this - cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
do this, by using loop:
*/

    for(int i = 0; i<=4; i++) { // for taking array elements as input, through loop
        cin >> arr[i];
    }
    for(int i = 0; i<=4; i++) { // for printing array elements through loop
        cout << arr[i] << endl;
    }
    return 0;
}