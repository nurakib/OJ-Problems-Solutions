#include <stdio.h>
#include <string.h>
int sumtotal(char n[]);
int sumfinal(int n);
int clac(int n);
int main(){
    char name1[26], name2[26];
    double ans;
    int a, b, temp;
    while(gets(name1)){
        gets(name2);
        a = sumtotal(name1);
        b = sumtotal(name2);
        a = sumfinal(a);
        b = sumfinal(b);
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        ans = (double) 100 * a / b;
        printf("%.2lf %%\n", ans);
    }
    return 0;
}
int sumtotal(char n[]){
    int i, len, sum = 0;
    len = strlen(n);
    for(i = 0; i < len; i++){
        if(n[i] >= 'a' && n[i] <= 'z')
            sum = sum + (n[i] - 96);
        else if(n[i] >= 'A' && n[i] <= 'Z')
            sum = sum + (n[i] - 64);
    }
    return sum;
}
int sumfinal(int n){
    while(n >= 10)
        n = clac(n);
    return n;
}
int clac(int n){
    int res, sum = 0;
    while(n != 0){
        res = n % 10;
        sum = sum + res;
        n = n / 10;
    }
    return sum;
}
