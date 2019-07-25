#include<stdio.h>
int main()
{
    int n=5,i,j,k=69;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
            {
                if(i%2==0)
            {
                printf("%c",k);
            }
            else{
                printf("%d",n-i);
            }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
