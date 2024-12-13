// #include<stdio.h>

// int main(){
// float a, b, c;
// int choice;
// printf("simple calculator \n");
// printf("select an operator\n");
// printf("1. addition\n");
// printf("2. subtraction\n ");
// printf("3. multiplication\n ");
// printf("4. division\n");

// printf("Enter choice (1/2/3/4)");
// scanf("%d",&choice);
// if (choice < 1 || choice > 4 ){
//     printf("invalid operation. please select an valid operator\n");
//     return 1;
// }
// printf("enter number:");
// scanf("%f",&a);
// printf("enter number");
// scanf("%f",&b);

// switch (choice){
// case 1 :
// c=a + b;
// printf("%.2f + %.2f=%.2f\n", a, b,c);
// break;
// case 2 :
// c=a-b;
// printf("%.2f-%.2f=%.2f\n", a, b,c);
// break;
// case 3:
// c = a*b;
// printf("%.2f*%.2f=%.2f\n",a,b,c);
// break;
// case 4 :
// if (b==0)
// {
//     printf("Error: Division by zero is not allowed.\n");
// } else{
//     c= a/b;
//     printf("%.2f/%.2f=%.2f\n",a,b,c);
// }
// break;
// }


//     return 0;
// }





#include<stdio.h>
int main(){
float a,b,c;
int choice;

printf("1.  addition");
printf("2. subtraction");
printf("3. multiplication");
printf("4. division");
// to choose the method;
printf("choose (1/2/3/4)");
scanf("%d",&choice);

if (choice< 1 || choice >4 )
{
    printf("select a valid operator ");
    return 1;
}
// printf("enter first number: ");
scanf("%f",&a);
// printf("enter second number: ");
scanf("%f",&b);

switch(choice){
case 1:
c=a+b;
printf("result :%.2f",c);
break;
case 2:
c=a-b;
printf("result :%.2f",c);
break;
case 3:
c=a*b;
printf("result :%.2f",c);
break;
case 4:
if (b==0)
{
    printf("invalid number:");
}else{
    c=a/b;
    printf("result :%.2f",c);
    break;
}
}

    return 0;
}