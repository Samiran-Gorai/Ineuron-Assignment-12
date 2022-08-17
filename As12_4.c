# include<stdio.h>
void oddrevprint(int );
int main()
{
    int n;
    printf("recursive function to print first N odd natural numbers in reverse order\n");
    printf("Give how many odd numbers to print :");
    scanf("%d",&n);
    oddrevprint(2*n);
}
void oddrevprint(int a)
{
    if (a<1){
        return;
    }
    
    if(a%2!=0)
    printf("%d ",a);
    oddrevprint(a-1);
      

}