#include <bits/stdc++.h>
using namespace std;
map <string, int> data;
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t, cnt;
    double freq;
    string tmp;
    cin >> t;
    cin.ignore(); //don't know why using two ignore :/ :/ 
    cin.ignore();
    while(t--){
        data.clear();
        cnt = 0;
        while(getline(cin, tmp)){
            if(tmp.size() == 0) break;
            data[tmp]++;
            cnt++;
        }
        map <string, int>::iterator it;
        for(it = data.begin(); it!= data.end(); it++){
            freq = double(it->second) / cnt * 100;
            cout << it->first;
            printf(" %.4lf\n", freq);
        }
        if(t != 0) cout << "\n";
    }
    return 0;
}
