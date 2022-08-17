# include<stdio.h>
void oddprint(int );
int main()
{
    int n;
    printf("recursive function to print first N odd natural numbers\n");
    printf("Give how many odd numbers to print :");
    scanf("%d",&n);
    oddprint(2*n);
}
void oddprint(int a)
{
    if (a<1){
        return;
    }
    oddprint(a-1);
    if(a%2!=0)
    printf("%d ",a);
    
      

}