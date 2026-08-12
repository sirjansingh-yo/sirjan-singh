//Q1: Write a program to input two numbers and display their sum.

# include<stdio.h>
int main(){
    int x,y;
    printf("enter x:");
    scanf("%d" , &x);
    printf("enter y:");
    scanf("%d" ,&y);
    int sum;
    sum = x + y;
    printf("sum of two no. is : %d" , sum);
}