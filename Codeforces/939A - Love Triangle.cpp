#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, val1, val2, val3, arr[5005];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        val1 = arr[i];
        val2 = arr[val1];
        val3 = arr[val2];
        if(i == val3){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
