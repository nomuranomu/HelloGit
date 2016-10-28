#include "queue.h"
#include <stdio.h>

void printQueue(Queue *q)
{
	int i;
	printf("queue [");
	for(i=0; i<q->number; i++){
		printf("%3d", q->data[ (q->head + i) % QUEUE_SIZE]);
	}
	printf("]\n");
}
