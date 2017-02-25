#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d", &n) == 1 && n){
        int tmp;
        vector <int> num;
        while(n--){
            scanf("%d", &tmp);
            num.push_back(tmp);
        }
        sort(num.begin(), num.end());
        for(int i = 0; i < num.size(); i++){
            if(i == 0) printf("%d", num[i]);
            else printf(" %d", num[i]);
        }
        printf("\n");
    }
    return 0;
}
