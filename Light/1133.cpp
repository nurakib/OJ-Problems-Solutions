#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, a, b, tmp;
    vector <int> num;
    char ch;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n >> m;
        for(int j = 0; j < n; j++){
            cin >> tmp;
            num.push_back(tmp);
        }
        while(m--){
            cin >> ch;
            if(ch == 'S'){
                cin >> tmp;
                for(int j = 0; j < n; j++)
                    num[j] += tmp;
            }
            else if(ch == 'M'){
                cin >> tmp;
                for(int j = 0; j < n; j++)
                    num[j] *= tmp;
            }
            else if(ch == 'D'){
                cin >> tmp;
                for(int j = 0; j < n; j++)
                    num[j] /= tmp;
            }
            else if(ch == 'R'){
                reverse(num.begin(), num.end());
            }
            else if(ch == 'P'){
                cin >> a >> b;
                swap(num[a], num[b]);
            }
        }
        cout << "Case " << i << ":\n";
        for(int j = 0; j < n; j++){
            if(j != 0) cout << " " << num[j];
            else cout << num[j];
        }
        cout << "\n";
        num.clear();
    }
    return 0;
}
