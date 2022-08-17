# include<stdio.h>
void reverse(int );
int main()
{
    int n;
    printf("recursive function to print reverse of a given number\n");
    printf("Give a number :");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int a)
{
    if(a==0)
    return;
    printf("%d",a%10);
    reverse(a/10);

}