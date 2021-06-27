#include <stdio.h>

int main(void) {
	long long int t,i;
	scanf("%lli",&t);
	for(i=0;i<t;i++)
	{
	    long long int n,m,ans=0,k;
	    scanf("%lli",&n);
	    scanf("%lli",&m);
        long long int arr[n+1],j;
        for(j=0;j<n+1;j++)
        {
            arr[j]=1;
        }
        for(j=2;j<=n;j++)
        {
            long long int a=m%j;
            ans=ans+arr[a];
            for(long long int k=a;k<=n;k=k+j)
            {
                arr[k]++;
            }
        }
        printf("%lli\n",ans);

	}
	return 0;
}

