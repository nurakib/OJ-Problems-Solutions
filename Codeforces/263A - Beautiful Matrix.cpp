#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> n;
            if(n == 1){
                a = i;
                b = j;
                break;
            }
        }
    }
    cout << abs(a - 3) + abs(b - 3) << "\n";
    return 0;
}
