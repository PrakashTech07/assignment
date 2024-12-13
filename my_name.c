#include<stdio.h>
int main(){
char name[100];
int age;

printf("Enter name ");
scanf("%96s",name);

printf("Enter age ");
scanf("%d",&age);
printf("name:%s  age:%d",name,age);

    return 0;
}