#include <bits/stdc++.h>
using namespace std;
int power(int b, int n){
    int ans = 1;
    for(int i = 0; i < n; i++)
        ans = ans * b;
    return ans;
}
int main(){
    long long n, tmp, sum;
    int t, pos, fl, num[15];
    scanf("%d", &t);
    while(t--){
        scanf("%lld", &n);
        tmp = n;
        pos = fl = 0;
        while(n != 0){
            num[pos] = n % 10;
            n = n / 10;
            pos++;
        }
        for(int i = 1; i <= 15; i++){
            sum = 0;
            for(int j = 0; j < pos; j++){
                sum = sum + power(num[j], i);
            }
            if(sum == tmp){
                printf("Armstrong\n");
                fl = 1;
                break;
            }
        }
        if(fl != 1)
            printf("Not Armstrong\n");
    }
    return 0;
}
