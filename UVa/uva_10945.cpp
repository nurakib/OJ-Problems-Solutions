#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, tmp, che;
    while(getline(cin, s)){
        tmp = "";
        if(s == "DONE") break;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90)
                tmp += s[i] + 32;
            else if(s[i] >= 97 && s[i] <= 122)
                tmp += s[i];
        }
        che = tmp;
        reverse(tmp.begin(), tmp.end());
        if(tmp == che) cout << "You won't be eaten!" << endl;
        else cout << "Uh oh.." << endl;
    }
    return 0;
}
