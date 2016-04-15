#include <stdio.h>
int main(){
    int high, low, t, i, j, nwalls, njumps, wall[55];
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        high = low = 0;
        scanf("%d", &nwalls);
        for(j = 0; j < nwalls; j++)
            scanf("%d", &wall[j]);
        njumps = nwalls - 1;
        for(j = 0; j < njumps; j++){
            if(wall[j + 1] > wall[j])
                high++;
            else if(wall[j + 1] < wall[j])
                low++;
        }
        printf("Case %d: %d %d\n", i, high, low);
    }
    return 0;
}
