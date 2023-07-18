#define   _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"



void SeqListInit(SL* ps)
{
	ps->a = 0;

	ps->size = ps->capacity = 0;
}



void SeqListCheck(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * (ps->capacity);
		int* tmp = (int*)realloc(ps->a, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

}


void SeqListPushBack(SL* ps, int x)
{
	SeqListCheck(ps);
	ps->a[ps->size] = x;

	ps->size++;

}
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPushFront(SL* ps, int x)
{
	SeqListCheck(ps);


	int end = ps->size - 1;
	
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;

}

void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	if(ps->size > 0)
		ps->size--;
}

void SeqListPopFront(SL* ps)
{
	int begin = 1;
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
}





