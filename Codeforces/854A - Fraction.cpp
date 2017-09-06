#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, check = 10000;
    cin >> n;
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - 1; j >= 0; j--){
            if(i == j) continue;
            if(i + j == n && __gcd(i, j) == 1){
                if(abs(i - j) < check){
                    check = abs(i - j);
                    a = j;
                    b = i;
                }
            }
        }
    }
    cout << a << " " << b << "\n";
    return 0;
}
