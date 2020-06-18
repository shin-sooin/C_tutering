#include <stdio.h>
int pibo(int n);
int main()
{
	int i;
	scanf_s("%d", & i);
	int result = pibo(i);
	printf("%d", result);
}
int pibo(int n)
{
	if (n == 1)
		return 1;
	else if (n < 1)
		return 0;
	else
		return pibo(n - 1) + pibo(n - 2);
}