#include <bits/stdc++.h>
using namespace std;
template <typename T> string NumberToString (T Number){
    ostringstream ss;
    ss << Number;
    return ss.str();
}
int main(){
    int n, k;
    while(cin >> n >> k && n != 0){
        int tmp, sz, sum;
        vector <int> num, check;
        vector <string> ans;
        for(int i = 0; i < k; i++){
            cin >> tmp;
            num.push_back(tmp);
        }
        sz = pow(2, k);
        int cnt = 0;
        for(int counter = 0; counter < sz; counter++){
            sum = 0;
            for(int pos = 0; pos < k; pos++){
                if(counter & (1 << pos))
                    check.push_back(num[pos]);
            }
            for(int i = 0; i < check.size(); i++) sum += check[i];
            if(sum == n){
                string str = "";
                sort(check.rbegin(), check.rend());
                for(int i = 0; i < check.size(); i++){
                    str += NumberToString(check[i]);
                    if(i != check.size() - 1)
                        str += "+";
                }
                ans.push_back(str);
            }
            check.clear();
        }
        cout << "Sums of " << n << ":\n";
        if(ans.size() == 0) cout << "NONE" << "\n";
        else{
            ans.push_back("0");
            sort(ans.rbegin(), ans.rend());
            for(int i = 0; i < ans.size() - 1; i++){
                if(ans[i] != ans[i + 1])
                    cout << ans[i] << endl;
            }
        }
    }
    return 0;
}
