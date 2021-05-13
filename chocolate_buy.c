//how many chocolate a use can but
//one chocolate of one rs
//can buy chocolate by 3 wrappers as well 
#include <stdio.h>
int main() {
    int coins=0, total_chocolate=0, wrapper=0;
    printf("Enter total coins: ");
    scanf("%d",&coins);
    total_chocolate = coins;
    wrapper = coins;
    
    do{
        total_chocolate = wrapper/3 + total_chocolate;
        wrapper = (wrapper/3) + (wrapper%3);
    }while(wrapper>=3);
    
    printf("\n Total chocolate you can buy is: %d",total_chocolate);
    return 0;
}
