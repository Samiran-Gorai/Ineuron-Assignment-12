# include<stdio.h>
void sqprint(int );
int main()
{
    int n;
    printf("recursive function to print squares of first N natural numbers\n");
    printf("Give how many numbers to print :");
    scanf("%d",&n);
    sqprint(n);
}
void sqprint(int a)
{
    if (a<1){
        return;
    }
    sqprint(a-1);
    printf("%d ",a*a);
    
      

}