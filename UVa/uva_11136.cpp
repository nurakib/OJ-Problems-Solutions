#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, tmp;
    multiset <int> st;
    while(scanf("%d", &t) && t){
        int h, l;
        long long sum = 0;
        while(t--){
            scanf("%d", &n);
            for(int i = 0; i < n; i++){
                scanf("%d", &tmp);
                st.insert(tmp);
            }
            h = *--st.end();
            l = *st.begin();
            sum += h - l;
            st.erase(--st.end());
            st.erase(st.begin());
        }
        printf("%lld\n", sum);
        st.clear();
    }
    return 0;
}
