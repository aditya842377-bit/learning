#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n%5==0&& n%11==0)
    {
        printf("Number Is divisible by 5 and 11\n");

    }
    else {
        printf("Number Is Not divisible by 5 and 11\n");
    }
    return 0 ;
}
