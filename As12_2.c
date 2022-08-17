# include<stdio.h>
void revprint(int );
int main()
{
    int n;
    printf("recursive function to print first N natural numbers in reverse order\n");
    printf("Give how many numbers to print :");
    scanf("%d",&n);
    revprint(n);
}
void revprint(int a)
{
    if (a<1){
        return;
    }
    printf("%d ",a);
    revprint(a-1);  

}