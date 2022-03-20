#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,s=0;
        scanf("%d%d",&n,&m);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            s+=a[i];
        }
        if((s+m)%n==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
