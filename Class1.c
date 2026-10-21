#include <stdio.h>
/*Print a multiplication table of a number entered by the user in a pretty form
Example:
Input
Enter the number you want multiplication table of: 
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
6 X 3 = 18
6 X 4 = 24
6 X 5 = 30
6 X 6 = 36
*/
int main()
{
    int n,i;

    printf("Enter the number you want multiplication table of : ");
    scanf("%d",&n);

    printf("Table of %d:\n",n);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}