#include<stdio.h>
#include "test.h"
#include "queue.h"

queue_t *queue_p = NULL;

void run_test_single_pointer()
{

	test_create_queue_array();
	printf("Operations will be performed on the following queue: \n");
	display(queue_p);
	test_enqueue();
	printf("Queue after inserting a new value:\n");
	display(queue_p);
	test_dequeue();
	printf("Queue after deleting a value:\n");
	display(queue_p);
	test_first();
	test_last();
}

void test_create_queue_array()
{
	int numVal = 0;
	queue_p = (queue_t*)malloc(sizeof(queue_t));
	printf("Enter size of Queue: ");
	scanf("%d",&queue_p->size);
	queue_p->rear = -1;
	queue_p->queueArr = (int *)malloc(sizeof(queue_p->size*(sizeof(int))));
	printf("Enter number of values to add in stack (should be <= size of queue): ");
	scanf("%d", &numVal);
	if(numVal > queue_p->size)
	{
		printf("Number of values to add is greater than the size of the stack. Try again!!!\n");
		return;
	}

	for(int i = 0; i<numVal; i++)
	{
		printf("Enter value %d: ",i+1);
		queue_p->rear++;
		scanf("%d",&queue_p->queueArr[queue_p->rear]);
	}
}

void display(queue_t *queue_temp)
{
	for(int i = 0; i <= queue_temp->rear; i++)
	{
		printf("%d\n", queue_temp->queueArr[i]);
	}
}

void test_enqueue()
{
	int data;
	printf("\ntest_enqueue() started\n");
	printf("Enter data to add to the queue: ");
	scanf("%d",&data);
	enqueue(queue_p, data);
	printf("test_enqueue() finished\n");
}

void test_dequeue()
{
	printf("\ntest_dequeue() started\n");
	dequeue(queue_p);
	printf("test_dequeue() finished\n");
}

void test_first()
{
	printf("\ntest_first() started\n");
	int val = first(queue_p);
	if(val == -1)
		printf("Queue is empty\n");
	else
		printf("first value in the queue is: %d\n",val);
	printf("test_first() finished\n");
}

void test_last()
{
	printf("\ntest_last() started\n");
	int val = last(queue_p);
	if(val == -1)
		printf("Queue is empty\n");
	else 
		printf("last value in the queue is: %d\n",val);
	printf("test_last() finished\n");
}

