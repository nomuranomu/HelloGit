#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 10

typedef struct queue {
	int number; /*キューのデータ数*/
	int head;				/*キュー配列の先頭要素の添え字*/
	int tail;				/*キュー配列の末尾要素の添え字*/
	int data[QUEUE_SIZE];	/*キューのデータ*/
} Queue;

int enqueue(Queue *q, int data);
int dequeue(Queue *q);
void printQueue(Queue *q);

#endif /* QUEUE_H */
