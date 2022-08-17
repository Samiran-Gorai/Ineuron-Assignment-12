# include<stdio.h>
void evrevprint(int );
int main()
{
    int n;
    printf("recursive function to print first N even natural numbers in reverse order\n");
    printf("Give how many even numbers to print :");
    scanf("%d",&n);
    evrevprint(2*n);
}
void evrevprint(int a)
{
    if (a<1){
        return;
    }
    
    if(a%2==0)
    printf("%d ",a);
    evrevprint(a-1);
      

}