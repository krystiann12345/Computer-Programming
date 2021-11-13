#include <stdio.h>

int main()
{
    int num;

    printf("Input any Integers: ");
    scanf("%d", &num);

    switch (num > 0){
        case 1:
            printf("\nThe Integer is a positive number.\n");
            break;
        case 2:
            switch (num < 0)
            {
                case 1:
                    printf("\nThe Integer is a negative number.\m");
                    break;
                case 2:
                    printf("Invalid inputted data");
                    break;
            }
    }

    return 0;
}
