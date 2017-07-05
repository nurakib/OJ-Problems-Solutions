#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, cnt, tmp, fl = 0, ans = 1e9;
    deque <int> pos;
    string a, b;
    cin >> n >> m >> a >> b;
    for(int i = 0; i <= m - n; i++){
        cnt = 0;
        for(int j = i, k = 0; k < n; k++, j++){
            if(a[k] != b[j]){
                cnt++;
                pos.push_back(k + 1);
            }
        }
        if(ans > cnt){
            ans = cnt;
            if(fl == 1){
                int sz = pos.size();
                for(int i = sz; i > cnt; i--)
                    pos.pop_front();
            }
            fl = 1;
        }
    }
    cout << ans << "\n";
    for(int i = 0; i < ans; i++){
        cout << pos.front() << " ";
        pos.pop_front();
    }
    return 0;
}
