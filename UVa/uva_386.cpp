#include <bits/stdc++.h>
using namespace std;
int main(){
    int a3, b3, c3, d3;
    for(int i = 6; i <= 200; i++){
        for(int j = 2; j < i; j++){
            for(int k = j; k < i; k++){
                for(int l = k; l < i; l++){
                    a3 = i * i * i;
                    b3 = j * j * j;
                    c3 = k * k * k;
                    d3 = l * l * l;
                    if(a3 == b3 + c3 + d3)
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", i, j, k, l);
                }
            }
        }
    }
    return 0;
}
