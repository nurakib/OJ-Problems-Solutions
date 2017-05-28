#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m = 0, sum = 0, num[105];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        m = max(m, num[i]);
    }
    for(int i = 0; i < n; i++)
        sum += (m - num[i]);
    printf("%d", sum);
    return 0;
}
