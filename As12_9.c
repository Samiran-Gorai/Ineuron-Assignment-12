# include<stdio.h>
void octal(int );
int main()
{
    int n;
    printf("recursive function to print octal of a given decimal number\n");
    printf("Give a number :");
    scanf("%d",&n);
    octal(n);
}
void octal(int a)
{
    if(a<1)
    {
        return;
    }
    octal(a/8);
    printf("%d",a%8);
}