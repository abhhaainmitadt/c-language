#include <stdio.h>
long int factorial(int n)
{
int i;
long int fact = 1;
for (i = 1; i <= n; i++)
{
fact = fact * i;
}
return fact;
}
int main()
{
int num;
long int result;
printf("Enter a number: ");
scanf("%d", &num);
result = factorial(num);
printf("Factorial of %d = %ld\n", num, result);
return 0;
}
Output
Enter a number: 5
Factorial of 5 = 120
5. Area of a Triangle Using Four Types of User-Defined Functions
Problem Statement
Write a C program to calculate the area of a triangle by implementing the following four types
of user-defined functions:
1. No Arguments, No Return Value
2. Arguments, No Return Value
3. No Arguments, Returns a Value
4. Arguments, Returns a Value
Formula
𝐴 =
1
2 8. 0
( ) 6. 0
( ) = 24. 00
𝑏
𝑏
ℎ
ℎ
b = 8.0h = 6.0
Give feedback
The area of a triangle is:
Area = ½ × Base × Height