#include <stdio.h>
#include <windows.h>

int main()
{
	//system("chcp 1251>0");
	int var = 0;
	int str1, str2, str3;
	unsigned long address = 0;

	printf("The var variable is stored at %p\n\n", &var);

	__asm
	{
		MOV EAX, 0
		CPUID
		MOV var, EAX
		MOV str1, EBX
		MOV str2, EDX
		MOV str3, ECX
	}

	printf("Maximum possible value for calling an instruction CPUID = %d\n", var);
	printf("Processor manufacturer code: %X-%X-%X\n\n", str1, str2, str3);

	__asm
	{
		LEA EAX, var
		MOV address, EAX
	}

	printf("The var variable is stored at %p\n\n", address);

	return 0;
}