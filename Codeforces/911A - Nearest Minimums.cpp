#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, po = 1e9 + 5, ans = 1e5 + 5;
    vector <int> num, pos;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        po = min(po, tmp);
        num.push_back(tmp);
    }
    for(int i = 0; i < n; i++){
        if(num[i] == po)
            pos.push_back(i);
    }
    for(int i = 0; i < pos.size() - 1; i++){
        ans = min(ans, pos[i + 1] - pos[i]);
    }
    cout << ans << "\n";
    return 0;
}
