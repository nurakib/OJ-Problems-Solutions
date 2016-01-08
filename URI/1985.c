#include <stdio.h>
int main(){
    int tcase, pro_code, quantity;
    float price, result, result_main = 0;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %d", &pro_code, &quantity);
        if(pro_code == 1001)
            price = 1.50;
        else if(pro_code == 1002)
            price = 2.50;
        else if(pro_code == 1003)
            price = 3.50;
        else if(pro_code == 1004)
            price = 4.50;
        else if(pro_code == 1005)
            price = 5.50;
        result = price * quantity;
        result_main = result_main + result;
    }
    printf("%.2f\n", result_main);
    return 0;
}
