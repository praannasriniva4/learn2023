#include <stdio.h>
 
int main()
{
    int n1,n2, max;
     scanf("%d %d",&n1,&n2);
     max = (n1 > n2) ? n1 : n2;
    printf("Largest number between %d and %d is %d. ",
                                         n1, n2, max);
 
    return 0;
}