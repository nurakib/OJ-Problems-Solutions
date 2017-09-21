#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n % 2 == 0){
            for(int i = 2, j = 1; i <= n; i += 2, j += 2){
                cout << i << " " << j << " ";
            }
            cout << "\n";
        }
        else{
            for(int i = 2, j = 1; i <= n - 2; i += 2, j += 2){
                cout << i << " " << j << " ";
            }
            cout << n - 1 << " " << n << " " << n - 2 << "\n";
        }
    }
    return 0;
}
