#include <bits/stdc++.h>
using namespace std;
int main(){
    char ans[2000], str[2000];
    int l, p;
    cin >> l;
    for(int i = 0; i < l; i++) cin >> str[i];
    p = l / 2;
    for(int i = 0, j = p, k = p - 1; i < l; i++){
        if(i % 2 == 0){
            ans[j] = str[i];
            j++;
        }
        else{
            ans[k] = str[i];
            k--;
        }
    }
    if(l % 2 == 0) for(int i = l - 1; i >= 0; i--) cout << ans[i];
    else for(int i = 0; i < l; i++) cout << ans[i];
    return 0;
}
