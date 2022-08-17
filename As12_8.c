# include<stdio.h>
void binary(int );
int main()
{
    int n;
    printf("recursive function to print binary of a given decimal number\n");
    printf("Give a number :");
    scanf("%d",&n);
    binary(n);
}
void binary(int a)
{
    if(a<1)
    {
        return;
    }
    binary(a/2);
    printf("%d",a%2);
}