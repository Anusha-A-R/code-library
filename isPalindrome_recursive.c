#include<stdio.h>

int is_Palindrome(int );



int main()
{
int n;
int palindrome;
printf(“\n\nEnter a number : “);
scanf(“%d”, &n);
palindrome = is_Palindrome(n);
if(palindrome == 1){
printf(“\n%d is palindrome\n”, n);
}
else
printf(“\n%d is not palindrome\n”, n);

return 0;
}

int is_Palindrome(int aj)
{
static int sum = 0;
if(aj != 0)
{
sum = sum *10 + aj%10;
is_Palindrome(aj/10); // recursive call
}
else if(sum == n)
return 1;
else
return 0;
}

