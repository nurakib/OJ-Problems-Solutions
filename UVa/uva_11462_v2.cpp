#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d", &n) == 1 && n){
        int tmp;
        priority_queue< int, vector<int>, greater<int> >  num;
        while(n--){
            scanf("%d", &tmp);
            num.push(tmp);
        }
        int i = 0;
        while(!num.empty()){
            if(i == 0){
                tmp = num.top();
                num.pop();
                printf("%d", tmp);
                i = 1;
            }
            else{
                tmp = num.top();
                num.pop();
                printf(" %d", tmp);
            }
        }
        printf("\n");
    }
    return 0;
}
