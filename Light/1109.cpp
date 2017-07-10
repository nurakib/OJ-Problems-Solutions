#include <bits/stdc++.h>
using namespace std;
int divisors(int n){
    int cnt = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(n / i == i) cnt += 1;
            else cnt += 2;
        }
    }
    return cnt;
}
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first) return a.first < b.first;
    else return a.second > b.second;
}
int main(){
    int t, n;
    vector < pair<int, int> > v;
    for(int i = 1; i <= 1000; i++)
        v.push_back(make_pair(divisors(i), i));
    sort(v.begin(), v.end(), cmp);
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        printf("Case %d: %d\n", i, v[n - 1].second);
    }
    return 0;
}
