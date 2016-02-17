#include <stdio.h>
int main(){
    float item_no, ammount;
    scanf("%f %f", &item_no, &ammount);
    if(item_no == 1)
        printf("Total: R$ %.2f\n", 4.0 * ammount);
    else if(item_no == 2)
        printf("Total: R$ %.2f\n", 4.5 * ammount);
    else if(item_no == 3)
        printf("Total: R$ %.2f\n", 5.0 * ammount);
    else if(item_no == 4)
        printf("Total: R$ %.2f\n", 2.0 * ammount);
    else if(item_no == 5)
        printf("Total: R$ %.2f\n", 1.5 * ammount);
    return 0;
}
