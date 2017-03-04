#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, tmp;
    set <int> s;
    while(cin >> n >> m){
        if(n == 0 && m == 0)
            break;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            s.insert(tmp);
        }
        for(int i = 0; i < m; i++){
            cin >> tmp;
            s.insert(tmp);
        }
        cout << n + m - s.size() << "\n";
        s.clear();
    }
    return 0;
}
