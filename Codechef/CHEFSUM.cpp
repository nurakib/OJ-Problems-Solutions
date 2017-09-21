#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
int main(){
    IOS;
    int t, n, tmp;
    cin >> t;
    while(t--){
        int pos, prev = 1e6;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> tmp;
            if(tmp < prev){
                prev = tmp;
                pos = i;
            }
        }
        cout << pos << "\n";
    }
    return 0;
}
