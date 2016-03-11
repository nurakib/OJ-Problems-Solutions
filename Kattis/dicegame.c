#include <stdio.h>
int main()
{
    int a1, a2, b1, b2;
    int x1, y1, x2, y2;
    int gunner, emma;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    gunner = a1 + b1 + a2 + b2;
    emma = x1 + y1 + x2 + y2;
    if(gunner > emma){
        printf("Gunnar");
    }
    else if(gunner < emma){
        printf("Emma");
    }
    else{
        printf("Tie");
    }
    return 0;
}
