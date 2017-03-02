#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, tmp;
    vector <int> dist;
    scanf("%d", &t);
    while(t--){
        int sum = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);
            dist.push_back(tmp);
        }
        sort(dist.begin(), dist.end());
        int house = dist[dist.size() / 2];
        for(int i = 0; i < n; i++)
            sum += abs(house - dist[i]);
        printf("%d\n", sum);
        dist.clear();
    }
    return 0;
}
