#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b;
	char op;
	printf("Enter two integer values: ");
	scanf("%d%d", &a, &b);
	fflush(stdin);
	printf("Enter a operand + or - or * or / or %: ");
	scanf("%c", &op);
	switch (op)
	{
	case '+':
		printf("Result is: %d", (a + b));
		break;
	case '-':
		printf("Result is: %d", (a - b));
		break;
	case '*':
		printf("Result is: %d", (a * b));
		break;
	case '/':
		printf("Result is: %d", (a / b));
		break;
	case '%':
		printf("Result is: %d", (a % b));
		break;
	default:
		printf("Invalid operand!");
	}
	getch();

	return 0;
}