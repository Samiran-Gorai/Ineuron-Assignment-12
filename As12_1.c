# include<stdio.h>
void print(int );
int main()
{
    int n;
    printf("recursive function to print first N natural numbers\n");
    printf("Give how many numbers to print :");
    scanf("%d",&n);
    print(n);
}
void print(int a)
{
   
    if (a<1){
        return;
    }
    print(a-1);

    printf("%d ",a);
}