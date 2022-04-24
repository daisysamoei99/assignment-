// program to display cube of a number upto a given integer
#include<stdio.h>
int main()
{
 int i,ctr;
    printf ("input number of terms:");
    scanf("%d",&ctr);
    for(i=1;i<=ctr;i++)
    {
     printf("number is:&d and cube of the &d is:&d\n",i,i,(i*i*i));
    }
    return 0;
}