#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    printf("enter the incorrect number");
    scanf("%d",&a);
    reverse(&a);

}
void reverse(int *a)
{
    int rev=0,rem=0;
    printf("Reversed number =");
    for(;*a !=0;)
    {
        rem =*a%10;
        rev=rev*10+rem;
        *a/=10;
    }
    printf("%d",rev);


}
