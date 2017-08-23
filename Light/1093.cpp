#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
#define MAX 200005
int arr[MAX], max_tree[4 * MAX], min_tree[4 * MAX];
void build_max_tree(int curr, int b, int e){
    if(b == e){
        max_tree[curr] = arr[b];
        return;
    }
    int mid = (b + e) >> 1;
    int chd1 = curr << 1;
    int chd2 = (curr << 1) | 1;
    build_max_tree(chd1, b, mid);
    build_max_tree(chd2, mid+1, e);
    max_tree[curr] = max(max_tree[chd1], max_tree[chd2]);
}
void build_min_tree(int curr, int b, int e){
    if(b == e){
        min_tree[curr] = arr[b];
        return;
    }
    int mid = (b + e) >> 1;
    int chd1 = curr << 1;
    int chd2 = (curr << 1) | 1;
    build_min_tree(chd1, b, mid);
    build_min_tree(chd2, mid+1, e);
    min_tree[curr] = min(min_tree[chd1], min_tree[chd2]);
}
int max_query(int curr, int b, int e, int i, int j){
    if(i > e || j < b) return -1;
    if(b >= i && e <= j) return max_tree[curr];
    int mid = (b + e) >> 1;
    int chd1 = curr << 1;
    int chd2 = (curr << 1) | 1;
    int p1 = max_query(chd1, b, mid, i, j);
    int p2 = max_query(chd2, mid+1, e, i, j);
    return max(p1, p2);
}
int min_query(int curr, int b, int e, int i, int j){
    if(i > e || j < b) return 100000050;
    if(b >= i && e <= j) return min_tree[curr];
    int mid = (b + e) >> 1;
    int chd1 = curr << 1;
    int chd2 = (curr << 1) | 1;
    int p1 = min_query(chd1, b, mid, i, j);
    int p2 = min_query(chd2, mid+1, e, i, j);
    return min(p1, p2);
}
int main(){
    IOS;
    int t, n, d, ans;
    cin >> t;
    for(int caseno = 1; caseno <= t; caseno++){
        ans = 0;
        cin >> n >> d;
        for(int i = 1; i <= n; i++) cin >> arr[i];
        build_max_tree(1, 1, n);
        build_min_tree(1, 1, n);
        for(int i = 1, j = d; j <= n; i++, j++){
            ans = max(ans, max_query(1, 1, n, i, j) - min_query(1, 1, n, i, j));
        }
        cout << "Case " << caseno << ": " << ans << "\n";
    }
    return 0;
}
