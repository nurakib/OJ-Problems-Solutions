#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, res, pod = 1, cnt = 0;
    scanf("%d", &n);
    tmp = n;
    while(n != 0){
        cnt++;
        res = n % 10;
        n /= 10;
    }
    if(cnt == 1)
        printf("1\n");
    else{
        for(int i = 1; i < cnt; i++)
            pod = pod * 10;
        printf("%d\n", pod * (res + 1) - tmp);
    }
    return 0;
}
