#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
char prime[MAX];
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
    int n;
    cin >> n;
    for(int i = 4; i <= n; i++){
        if(prime[i] == 1 && prime[n - i] == 1){
            cout << i << " " << n - i << endl;
            break;
        }
    }
    return 0;
}
