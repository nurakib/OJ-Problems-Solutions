#include <bits/stdc++.h>
using namespace std;
#define MAX 20000001
char prime[MAX+10];
int a[MAX];
void sieve(){
    prime[0] = prime[1] = 1;
    for(int i = 4; i <= MAX; i += 2)
        prime[i] = 1;
    for(int i = 3; i * i <= MAX; i += 2){
        if(prime[i] == 0){
            for(int j = i * i; j <= MAX; j += i)
                prime[j] = 1;
        }
    }
}
int main(){
    sieve();
    int n, k = 1;
    for(int i = 3; i <= MAX; i++)
        if(prime[i] == 0 && prime[i + 2] == 0)
            a[k++] = i;
    while(scanf("%d", &n) == 1)
        printf("(%d, %d)\n", a[n], a[n] + 2);
    return 0;
}
