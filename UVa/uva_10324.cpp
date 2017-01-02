#include <bits/stdc++.h>
using namespace std;
int main(){
    int caseno = 1, t, a, b, i, j;
    string str;
    while(cin >> str){
        cin >> t;
        cout << "Case " << caseno++ << ":" << endl;
        for(int n = 0; n < t; n++){
            cin >> a >> b;
            i = min(a, b);
            j = max(a, b);
            bool check = true;
            for(int u = i; u < j; u++){
                if(str[u] != str[u + 1]){
                    check = false;
                    break;
                }
            }
            if(check == true) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
