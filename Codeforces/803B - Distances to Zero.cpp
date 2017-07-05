#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, num[200005];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        if(num[i] != 0) num[i] = 1e9 + 5;
    }
    for(int i = 0; i < n; i++){
        if(num[i] == 0){
            for(int j = i - 1, k = 1; j >= 0 ; j--, k++){
                if(num[j] == 0) break;
                if(num[j] > k) num[j] = k;
            }
            for(int j = i + 1, k = 1; j < n ; j++, k++){
                if(num[j] == 0) break;
                num[j] = k;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d ", num[i]);
    printf("\n");
    return 0;
}
