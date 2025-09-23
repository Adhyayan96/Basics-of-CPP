#include<bits/stdc++.h>
using namespace std;

// Return function
// Take two numbers and print it's sum

int sum(int n1,int n2){
    int num3 = n1 + n2;
    return num3;
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int ans = sum(n1,n2);
    cout << ans;
    return 0;
}

// or, as a void function -
/*
void sum(int n1,int n2){
    int num3 = n1 + n2;
    cout << num3;
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    sum(n1,n2);
    return 0;
}
*/