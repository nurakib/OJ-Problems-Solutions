#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MAX 1005
int main(){
    int n, k, a[MAX], b[MAX], fl = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cin >> b[i];
    sort(b, b + k);
    for(int i = 0, j = k - 1; i < n; i++){
        if(a[i] == 0){
            a[i] = b[j];
            j--;
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            cout << "Yes" << "\n";
            fl = 1;
            break;
        }
    }
    if(!fl) cout << "No" << "\n";
    return 0;
}
