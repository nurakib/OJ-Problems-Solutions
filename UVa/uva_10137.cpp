#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d", &n) == 1 && n){
        double sum = 0, avg, res_h = 0, res_l = 0, num[1005];
        for(int i = 0; i < n; i++){
            scanf("%lf", &num[i]);
            sum += num[i];
        }
        sum = sum / n;
        for(int i = 0; i < n; i++){
            if(num[i] < sum)
                res_l += (int)((sum - num[i]) * 100) / 100.0;
            else
                res_h += (int)((num[i] - sum) * 100) / 100.0;
        }
        printf("%0.2lf %0.2lf\n", res_h, res_l);
    }
    return 0;
}
