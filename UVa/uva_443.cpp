#include <bits/stdc++.h>
using namespace std;
int n, humble[10000];
void humble_number(){
    humble[1] = 1;
    int a = 1, b = 1, c = 1, d = 1;
    int num1 = 2, num2 = 3, num3 = 5, num4 = 7;
    int resnum1, resnum2, resnum3, resnum4;
    for(int i = 2; i <= 5842; i++){
        resnum1 = num1 * humble[a];
        resnum2 = num2 * humble[b];
        resnum3 = num3 * humble[c];
        resnum4 = num4 * humble[d];
        humble[i] = min(resnum1, min(resnum2, min(resnum3, resnum4)));
        if(resnum1 == humble[i]) a++;
        if(resnum2 == humble[i]) b++;
        if(resnum3 == humble[i]) c++;
        if(resnum4 == humble[i]) d++;
    }
}
int main(){
    humble_number();
    while(scanf("%d", &n) == 1 && n != 0){
        if(n % 10 == 1 && (n % 100) / 10 != 1) printf("The %dst humble number is %d.\n", n, humble[n]);
        else if(n % 10 == 2 && (n % 100) / 10 != 1) printf("The %dnd humble number is %d.\n", n, humble[n]);
        else if(n % 10 == 3 && (n % 100) / 10 != 1) printf("The %drd humble number is %d.\n", n, humble[n]);
        else printf("The %dth humble number is %d.\n", n, humble[n]);
    }
    return 0;
}
