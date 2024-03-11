#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	    int A, B;
		
		scanf("%d", &A);
		scanf("%d", &B);
	

		if (A > 10000 || A < -10000)
		{
			return 0;
		}
		if (B > 10000 || B < -10000)
		{
			return 0;
		}
		if (A > B)
		{
			printf(">");
		}
		if (A < B)
		{
			printf("<");
		}
		else if(A==B)
			printf("==");
	return 0;
}