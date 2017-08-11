#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF 1e9 + 1
int arr[MAX], tree[4 * MAX];
void build(int curr, int L, int R){
    if(L == R){
        tree[curr] = arr[L];
        return;
    }
    int mid = (L + R) / 2;
    int chd1 = 2 * curr;
    int chd2 = 2 * curr + 1;
    build(chd1, L, mid);
    build(chd2, mid+1, R);
    tree[curr] = min(tree[chd1], tree[chd2]);
}
int query(int curr, int L, int R, int st, int ed){
    if(L > ed || R < st) return INF;
    if(L >= st && R <= ed) return tree[curr];
    int mid = (L + R) / 2;
    int chd1 = query(2 * curr, L, mid, st, ed);
    int chd2 = query(2 * curr + 1, mid + 1, R, st, ed);
    return min(chd1, chd2);
}
int main(){
    int t, n, q, st, ed;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        printf("Case %d:\n", i);
        scanf("%d %d", &n, &q);
        for(int j = 1; j <= n; j++)
            scanf("%d", &arr[j]);
        build(1, 1, n);
        while(q--){
            scanf("%d %d", &st, &ed);
            printf("%d\n", query(1, 1, n, st, ed));
        }
    }
    return 0;
}
