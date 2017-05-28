#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 1; ; i++){
        if(i % 2 == 1){
            a -= i;
            if(a < 0){
                printf("Vladik\n");
                return 0;
            }
        }
        else{
            b -= i;
            if(b < 0){
                printf("Valera\n");
                return 0;
            }
        }
    }
}
