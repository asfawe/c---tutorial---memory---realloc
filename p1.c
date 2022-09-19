#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// malloc(), realloc(), free() �Լ��� ����Ǿ� �ִ� ��� ����(stdlib.h, malloc.h)�� �����մϴ�.

// realloc() �Լ��� ������ ������ �����ϴ�.

// void* realloc(char* memblock, unsigned int size);

// memblock�� ������ malloc() �Լ����� ��ȯ�� �������̸�, size�� ���Ҵ��� �޸��� ũ���Դϴ�. 

void main(void)
{
	char *pmem;
	
	pmem = malloc(100); // �޸𸮸� 100����Ʈ��ŭ �Ҵ��մϴ�. 
	// ���� �ý��� �ڿ��� �����Ͽ� �޸𸮸� �Ҵ��� �� ���� ����� NULL�� ��ȯ�Ǹ�, 
	// �Ҵ�� ��� �Ҵ�� �޸� ������ ����Ű�� ������ ���� ��ȯ�˴ϴ�. 
	
	if(pmem == NULL)
	{
		puts("�޸𸮸� �Ҵ��� �� �����ϴ�.");
	}
	else // �޸𸮰� �Ҵ�� ��� else���� �����մϴ�. 
	{
		printf("�Ҵ�� �޸� ���̴� %d����Ʈ�Դϴ�. \n", _msize(pmem));
		
		pmem = realloc(pmem, 200); // 100����Ʈ�� �Ҵ�� �޸𸮸� 200����Ʈ�� ���Ҵ��մϴ�. 
		// pmem�� ���Ҵ�� �޸𸮸� ����Ű�� �����ͷ� �ٽ� ���Ե˴ϴ�. 
		
		if(pmem == NULL)
		{
			puts("�޸𸮸� ���Ҵ��� �� �����ϴ�.");
		}
		else
		{
			printf("���Ҵ�� �޸� ���̴� %d����Ʈ�Դϴ�. \n", _msize(pmem));
		}
		
		free(pmem); // ���Ҵ�� �޸𸮸� �����մϴ�. 
	}
	
}
