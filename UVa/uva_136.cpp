#include <bits/stdc++.h>
using namespace std;
int main(){
    int ugly[10000];
    int a = 1, b = 1, c = 1;
    int num1 = 2, num2 = 3, num3 = 5;
    int resnum1, resnum2, resnum3;
    ugly[1] = 1;
    for(int i = 2; i <= 1500; i++){
        resnum1 = num1 * ugly[a];
        resnum2 = num2 * ugly[b];
        resnum3 = num3 * ugly[c];
        ugly[i] = min(resnum1, min(resnum2, resnum3));
        if(resnum1 == ugly[i])
            a++;
        if(resnum2 == ugly[i])
            b++;
        if(resnum3 == ugly[i])
            c++;
    }
    printf("The 1500'th ugly number is %d.\n", ugly[1500]);
    return 0;
}
