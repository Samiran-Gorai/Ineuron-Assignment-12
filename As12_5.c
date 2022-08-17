# include<stdio.h>
void evprint(int );
int main()
{
    int n;
    printf("recursive function to print first N even natural numbers \n");
    printf("Give how many even numbers to print :");
    scanf("%d",&n);
    evprint(2*n);
}
void evprint(int a)
{
    if (a<1){
        return;
    }
    evprint(a-1);
    if(a%2==0)
    printf("%d ",a);
    
      

}