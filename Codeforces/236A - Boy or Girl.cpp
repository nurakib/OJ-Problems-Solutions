#include <bits/stdc++.h>
using namespace std;
int main(){
    int tic = 0, cnt[26] = {0};
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
        cnt[str[i] - 'a'] = 1;
    for(int i = 0; i < 26; i++){
        if(cnt[i] == 1)
            tic++;
    }
    if(tic % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}
