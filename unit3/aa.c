#include <stdio.h>
int main()
{
int intArray[3];
float floatArray[3];
char charArray[3];
int i;
printf("Enter 3 integer elements:\n");
for (i = 0; i < 3; i++)
{
scanf("%d", &intArray[i]);
}
printf("\nEnter 3 float elements:\n");
for (i = 0; i < 3; i++)
{
scanf("%f", &floatArray[i]);
}
printf("\nEnter 3 character elements:\n");
for (i = 0; i < 3; i++)
{
scanf(" %c", &charArray[i]);
}
printf("\nInteger Array:\n");
for (i = 0; i < 3; i++)
{
printf("Value = %d, Address = %p\n",
intArray[i], (void *)&intArray[i]);
}
printf("\nFloat Array:\n");
for (i = 0; i < 3; i++)
{
printf("Value = %.2f, Address = %p\n",
floatArray[i], (void *)&floatArray[i]);
}
printf("\nCharacter Array:\n");
for (i = 0; i < 3; i++)
{
printf("Value = %c, Address = %p\n",
charArray[i], (void *)&charArray[i]);
}
return 0;
}
Output
Enter 3 integer elements:
10
20
30
Enter 3 float elements:
1.5
2.5
3.5
Enter 3 character elements:
A
B
C
Integer Array:
Value = 10, Address = 0x7ffd1230
Value = 20, Address = 0x7ffd1234
Value = 30, Address = 0x7ffd1238
Float Array:
Value = 1.50, Address = 0x7ffd1240
Value = 2.50, Address = 0x7ffd1244
Value = 3.50, Address = 0x7ffd1248
Character Array:
Value = A, Address = 0x7ffd1250
Value = B, Address = 0x7ffd1251
Value = C, Address = 0x7ffd1252
Note: Memory addresses will be different each time the program is executed.