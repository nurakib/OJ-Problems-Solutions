#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l[100000];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> l[i];
    sort(l, l + n);
    for(int i = 0; i < n - 2; i++){
        if(l[i] + l[i + 1] > l[i + 2]){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
