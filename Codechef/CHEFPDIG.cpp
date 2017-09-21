#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        int num[10] = {0};
        vector <int> v;
        cin >> s;
        for(int i = 0; i < s.size(); i++) num[s[i] - '0']++;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(num[i] > 0 && num[j] > 0){
                    int tmp = i * 10 + j;
                    if(i == j && !(num[i] > 1 || num[j] > 1))
                        tmp = 0;
                    if(tmp >= 65 && tmp <= 90)
                        v.push_back(tmp);
                }
            }
        }
        for(int i = 0; i < v.size(); i++)
            cout << (char)v[i];
        cout << "\n";
    }
    return 0;
}
