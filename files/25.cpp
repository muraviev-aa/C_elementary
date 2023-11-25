#include <stdio.h>

int main()
{
	int var = 7;
	unsigned long address;
	// The first way to find the address
	printf("Address of var is %X\n", (int)&var);

	// The second way to find the address
	__asm
	{
		LEA EBX, var
		MOV address, EBX
	}
	printf("Address of var is %X\n", address);

	return 0;
}