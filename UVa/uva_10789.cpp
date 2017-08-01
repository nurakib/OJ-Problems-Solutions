#include <bits/stdc++.h>
using namespace std;
bool Prime_test(int n){
    int x = sqrt(n);
    for(int i = 2; i <= x; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int t, tmp;
    string s;
    cin >> t;
    for(int no = 1; no <= t; no++){
        cin >> s;
        int fl = 0, freq[130] = {0};
        for(int i = 0; i < s.size(); i++)
            freq[s[i] - '\0']++;
        cout << "Case " << no << ": ";
        for(int i = 0; i < 130; i++){
            if((freq[i] != 0 && freq[i] != 1) && Prime_test(freq[i]) == true){
                //cout << i << endl;
                cout << (char)i;
                fl = 1;
            }
        }
        if(fl == 0) cout << "empty\n";
        else cout << "\n";
    }
    return 0;
}
