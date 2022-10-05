typedef struct queue
{
	int size;
	int rear;
	int *queueArr
}queue_t;

void enqueue();
void dequeue();
int isFull();
int isEmpty();
int first();
int last();
