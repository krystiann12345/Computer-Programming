 #include<stdio.h>
 int main()
 {
   char name[30];
    int age;
    printf("Enter name: ");
    scanf("%s", name);
    printf("\nEnter your age: ");
    scanf("%d", &age);

   if(age>=18)
   {
     printf("\nYou Are Eligible for Voting!\n",age);
   }
   else{
        if(age<=17){
            printf("\nYou are Not Eligible for Voting!\n",age);
        }
        else{
            printf("\nInvalid Age.\n");

        }
   }
   return 0;
 }
