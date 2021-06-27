#include <stdio.h>

int main(void) {
	// your code goes here
	int a[3];
	for(int i=0;i<3;i++)
	{
	    scanf("%d",&a[i]);
	}
	if(a[0]==a[1] || a[0]==a[2] || a[1]==a[2])
	{
	    printf("Yes");
	}
	else
	printf("No");
	return 0;
}

