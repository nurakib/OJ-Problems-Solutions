#include <bits/stdc++.h>
using namespace std;
int main(){
    long k;
    vector < pair < long, long > > num;
    while(cin >> k){
        for(long i = k + 1; i <= 2 * k; i++){
            if((i * k) % (i - k) == 0)
                num.push_back(make_pair((i * k) / (i - k), i));
        }
        cout << num.size() << "\n";
        for(long i = 0; i < num.size(); i++)
            cout << "1/" << k << " = " << "1/" << num[i].first << " + " << "1/" << num[i].second << "\n";
        num.clear();
    }
    return 0;
}
