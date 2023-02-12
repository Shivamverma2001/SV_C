
#include <stdio.h>
#include <stdlib.h>
//wild pointer just declared not initialize
//initialized the pointer to null(NUll pointer)(pointer will start pointing to 0th memory address)
int main()
{
    int *p;//declare(not initialization) wild pointer
    int a=7;//again and again show new address
    printf("the content stored in this pointer %p\n",p);//garbage value or junk values
    //solution
    p=NULL;//initialized the pointer to null(NUll pointer)(pointer will start pointing to 0th memory address)
    printf("the address of this pointer%f\n",p);
    p=&a;//pointer
    printf("the address stored in this pointer%p\n",p);
    printf("the address of a variable %p\n",&a);
}
