#include <bits/stdc++.h>
using namespace std;
int main(){
    int tcase, u, v, cnt, ans1, ans2;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %d", &u, &v);
        ans1 = 0;
        for(int n = u; n <= v; n++){
            cnt = 0;
            for(int i = 1; i * i <= n; i++){
                if(n % i == 0){
                    if(n / i == i) cnt++;
                    else cnt += 2;
                }
            }
            if(cnt > ans1){
                ans1 = cnt;
                ans2 = n;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", u, v, ans2, ans1);
    }
    return 0;
}
