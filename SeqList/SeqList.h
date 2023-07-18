#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


typedef struct SeqList
{
	int* a;
	int size;
	int capacity;
}SL;


void SeqListInit(SL* ps);

void SeqListPushBack(SL* ps, int x);

void SeqListPushFront(SL* ps, int x);

void SeqListPopBack(SL* ps);

void SeqListPopFront(SL* ps);

void SeqListCheck(SL* ps);

void SeqListPrint(SL* ps);

void SeqListDestory(SL* ps);








