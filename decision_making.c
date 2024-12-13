#include<stdio.h>
int main(){

int num;
//first written the value; to check.
printf("enter number : ");
scanf("%d\n",&num);

// give statement for check;
if (num > 0)
{
    printf("the positive number\n");
}
else if (num < 0)
{
    printf("the negative number\n");
}
else{
    printf("it is zero\n");
}
return 0;
}