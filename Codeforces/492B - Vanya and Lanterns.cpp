#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l, tmp, mx = 0;
    double a, b, c, ans;
    vector <int> v;
    cin >> n >> l;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < v.size(); i++){
        mx = max(mx, v[i] - v[i - 1]);
    }
    a = (double) v[0];
    b = (double) mx / 2.0;
    c = (double) (l - v[n - 1]);
    ans = a;
    if(b > ans) ans = b;
    if(c > ans) ans = c;
    cout.precision(10);
    cout << fixed << ans << "\n";
    return 0;
}
