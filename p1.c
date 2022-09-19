#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// malloc(), realloc(), free() 함수가 선언되어 있는 헤더 파일(stdlib.h, malloc.h)을 포함합니다.

// realloc() 함수의 원형은 다음과 같습니다.

// void* realloc(char* memblock, unsigned int size);

// memblock은 기존에 malloc() 함수에서 반환된 포인터이며, size는 재할당할 메모리의 크기입니다. 

void main(void)
{
	char *pmem;
	
	pmem = malloc(100); // 메모리를 100바이트만큼 할당합니다. 
	// 만약 시스템 자원이 부족하여 메모리를 할당할 수 없는 경우라면 NULL이 반환되며, 
	// 할당된 경우 할당된 메모리 번지를 가리키는 번지의 값이 반환됩니다. 
	
	if(pmem == NULL)
	{
		puts("메모리를 할당할 수 없습니다.");
	}
	else // 메모리가 할당된 경우 else문을 실행합니다. 
	{
		printf("할당된 메모리 길이는 %d바이트입니다. \n", _msize(pmem));
		
		pmem = realloc(pmem, 200); // 100바이트가 할당된 메모리를 200바이트로 재할당합니다. 
		// pmem은 재할당된 메모리를 가리키는 포인터로 다시 대입됩니다. 
		
		if(pmem == NULL)
		{
			puts("메모리를 재할당할 수 없습니다.");
		}
		else
		{
			printf("재할당된 메모리 길이는 %d바이트입니다. \n", _msize(pmem));
		}
		
		free(pmem); // 재할당된 메모리를 해제합니다. 
	}
	
}
