#include <bits/stdc++.h>
using namespace std;
int main(){
    int b1, b2, b3, c1, c2, c3, g1, g2, g3;
    while(scanf("%d %d %d %d %d %d %d %d %d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) == 9){
        int m, fl = 0, a[6];
        a[0] = b2 + b3 + c1 + c3 + g1 + g2;
        a[1] = b2 + b3 + c1 + c2 + g1 + g3;
        a[2] = b1 + b3 + c2 + c3 + g1 + g2;
        a[3] = b1 + b2 + c2 + c3 + g1 + g3;
        a[4] = b1 + b3 + c1 + c2 + g3 + g2;
        a[5] = b2 + b1 + c1 + c3 + g3 + g2;
        m = a[0];
        for(int i = 1; i < 6; i++){
            if(m > a[i]){
                m = a[i];
                fl = i;
            }
        }
        if(fl == 0) printf("BCG %d\n", a[0]);
        else if(fl == 1) printf("BGC %d\n", a[1]);
        else if(fl == 2) printf("CBG %d\n", a[2]);
        else if(fl == 3) printf("CGB %d\n", a[3]);
        else if(fl == 4) printf("GBC %d\n", a[4]);
        else if(fl == 5) printf("GCB %d\n", a[5]);
    }
    return 0;
}
