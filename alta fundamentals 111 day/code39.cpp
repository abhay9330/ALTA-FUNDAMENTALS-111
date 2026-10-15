#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<m;i++)
        scanf("%d",&arr2[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==arr2[j])
            {
                int k;
                for(k=0;k<i;k++)
                {
                    if(arr[k]==arr[i])
                        break;
                }
                if(k==i)
                    printf("%d ",arr[i]);
                break;
            }
        }
    }
    return 0;
}