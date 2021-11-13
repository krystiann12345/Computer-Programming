#include <stdio.h>
#include <stdlib.h>

int main( ){
    int num,i;
    char word[100];

     FILE *file;
     file=fopen("C:\\Users\\ACER\\Desktop\\text.txt","a");//open file from location if not found then create

    printf("Input how many lines to be appended:");//ask user for numbers
    scanf("%d", &num);  //scan the inputed numbers

    //for loop
    for(i=0;i<=num;i++){//index start at 0,if index is less than the users input add 1
            printf("",i);   //this continue until i is less than or equal to user input
            gets(word); //get user input words
            fputs(word,file);//fputs use to write strings in file
    }
     fclose(file);//close the file
     return 0;
}
