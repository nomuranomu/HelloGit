#include <stdio.h>
#include "queue.h"

int main(void){
	int i;
	Queue qA;
	Queue qB;
	int result;

	/*キューAの初期化*/
	qA.number = 0;
	qA.head = 0;
	qA.tail = 0;

	/*キューBの初期化*/
	qB.number = 0;
	qB.head = 0;
	qB.tail = 0;

	/*キューAが空であることを確認*/
	printQueue(&qA);

	/*キューAにデータをエンキューする*/
	printf("return value(%d)\n", enqueue(&qA, 10));
	printQueue(&qA);

	/*キューBが空であることを確認*/
	printQueue(&qB);

	/*キューB容量-1までデータをエンキューする*/
	for(i=0; i<QUEUE_SIZE-1; i++){
		printf("return value(%d)\n", enqueue(&qB, qB.number));
	}
	printQueue(&qB);

	/*キューB容量までデータをエンキューする*/
	printf("return value(%d)\n", enqueue(&qB, qB.number));
	printQueue(&qB);

	/*キューB容量をこえてデータをエンキューする*/
	printf("return value(%d)\n", enqueue(&qB, qB.number));
	printQueue(&qB);

	/*キューB容量までデータをデキューする*/
	for(i=0; i<QUEUE_SIZE; i++){
		int data = dequeue(&qB);
		printf("dequeued value(%d) ", data);
		printQueue(&qB);
	}
	
	/*キューAからデータをデキューする*/
	printf("return value(%d)\n", dequeue(&qA));
	printQueue(&qA);

	/*キューAが空の状態でデータをデキューする*/
	printf("return value(%d)\n", dequeue(&qA));
	printQueue(&qA);

	return 0;
}
