#include<stdio.h>
int main()
{
    int test1, test2, first, last, time_total, move, time, sub1, sub2;
    time = 3 + 5 + 3 + 5 + 3;
    scanf("%d", &test1);
    for(test2 = 1; test2 <= test1; test2++){
        scanf("%d %d", &first, &last);
        sub1 = first - last;
        sub2 = last - first;
        move = first * 4;
        if(first > last){
            time_total = (sub1 * 4) + time + move;
        }
        else if(first == last){
            time_total = time + move;
        }
        else{
            time_total = (sub2 * 4) + time + move;
        }
        printf("Case %d: %d\n", test2, time_total);
    }
return 0;
}
