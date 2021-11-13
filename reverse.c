#include <stdio.h>

int main(){
    int num, a=0,rem;

    printf("Input any Integers: "); //user input
    scanf("%d", &num);              //get user input
    printf("\nRevised for %d is ",num);
    //while loop
    while(num !=0){ //if num is not equal to 0
        rem = num % 10; //remainder of user input devide to 10
        a = a*10+rem;   // a multiply to 10 add the remainder
        num /= 10;
    }
    printf("%d\n",a);

    return 0;
}
