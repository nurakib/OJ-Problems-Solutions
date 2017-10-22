#include <bits/stdc++.h>
using namespace std;
#define MAX 100000001
int n, x;
char status[MAX];
vector <int> prime;
void sieve(){
    status[0] = status[1] = 1;
    for(int i = 4; i <= MAX; i += 2) status[i] = 1;
    for(int i = 3; i * i <= MAX; i+= 2)
        if(status[i] == 0)
            for(int j = i * i; j <= MAX; j += i + i)
                status[j] = 1;
    prime.push_back(2);
    for(int i = 3; i <= MAX; i += 2)
        if(status[i] == 0) prime.push_back(i);
}
bool check(){
    if(n % 2){
        x = 2;
        return 1 - status[n - x];
    }
    int pos = lower_bound(prime.begin(), prime.end(), n / 2) - prime.begin();
    for(int i = pos; i >= 0; i--){
        if(prime[i] == n - prime[i]) continue;
        x = n - prime[i];
        if(binary_search(prime.begin(), prime.end(), x)){
            x = min(prime[i], n - prime[i]);
            return true;
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    sieve();
    while(cin >> n){
        if(check() && n > 4) cout << n << " is the sum of " << x << " and " << n - x << ".\n";
        else cout << n << " is not the sum of two primes!" << "\n";
    }
    return 0;
}
