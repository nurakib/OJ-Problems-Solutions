#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, m, t_m = 0;
    string c;
    cin >> t;
    while(t--){
        cin >> c;
        if(c == "report")
            cout << t_m << endl;
        else{
            cin >> m;
            t_m += m;
        }
    }
    return 0;
}
