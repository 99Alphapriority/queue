#include<stdio.h>
#include "queue.h"


void enqueue(queue_t *queue_temp, int data)
{
	if(isFull(queue_temp))
		printf("Queue is full\n");
	else
	{
		queue_temp->rear++;
		queue_temp->queueArr[queue_temp->rear] = data;
	}
}

void dequeue(queue_t *queue_temp)
{
	if(isEmpty())
		printf("Queue is empty\n");
	else
	{
		for(int i = 0; i < queue_temp->rear; i++)
		{
			queue_temp->queueArr[i] = queue_temp->queueArr[i+1];
		}
		queue_temp->rear--;
	}
}

int isFull(queue_t *queue_temp)
{
	if(queue_temp->rear == queue_temp->size - 1)
		return 1;
	else 
		return 0;
}

int isEmpty(queue_t *queue_temp)
{
	if(queue_temp->rear == -1)
		return 1;
	else 
		return 0;
}

int first(queue_t *queue_temp)
{
	int val;
	if(isEmpty(queue_temp))
		val = -1;
	else
		val = queue_temp->queueArr[0];
	return val;
}

int last(queue_t *queue_temp)
{
	int val;
	if(isEmpty(queue_temp))
		val = -1;
	else
		val = queue_temp->queueArr[queue_temp->rear];
	return val;
}
