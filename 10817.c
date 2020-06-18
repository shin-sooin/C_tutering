#include<stdio.h>
void main() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a >= b) && (b > c) || (c >= b) && (b >= a))
		printf("%d", b);
	else if ((b >= a) && (a > c) || (a >= b) && (c >= a))
		printf("%d", a);
	else
		printf("%d", c);
}