#include <bits/stdc++.h>

using namespace std;

int f[36];

int main() {
    
    f[1] = f[2] = 1;

    for (int i = 3; i <= 35; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    int n;
    cin >> n;

    cout << f[n];


    return 0;
}