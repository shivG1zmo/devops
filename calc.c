#include <stdio.h>
#include <stdbool.h>
int main()
{
        int add(int a, int b)
        {
                int res = a + b;
                printf("\nSum = %d\n",res);
		return res;
        }

        int sub(int a, int b)
        {
                int res = a - b;
		printf("\nDiff = %d\n",res);
                return res;
        }
	int a;
	int b;
        while(true)
        {
		printf("Enter first number ");
		scanf("%d", &a);
		printf("Enter second number ");
		scanf("%d",&b);
		printf("\nEnter choice 1.add 2.sub 3.exit");
                int ch;
                scanf("%d",&ch);
                if(ch==1)              
		{
			add(a,b);	
		}	
		else if(ch==2)
		{
			sub(a,b);
		}
		else
			return false;
	}
}
