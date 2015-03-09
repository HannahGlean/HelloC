#ifndef H_Queue
#define H_Queue

#include <stdbool.h>

#define MAX 6

typedef struct{
	int front;
	int rear;
        int size;
	char entry[MAX];
} queue;


void createQueue(queue *q) // empty list
{
        q-> front = -1;
	q-> rear = -1;
        q-> size = 0; 
	return;
}


int length(queue *q)
{
	return q-> size;
}


bool isEmpty(queue *q)
{
	return (q-> size == 0);
}

bool isFull(queue *q)
{
	return (q-> size == MAX);
}


void insert(queue *q, char newitem)
{
   if(isFull(q)){
	if(isEmpty(q))
		strcpy(q->entry, newitem);
	else
		strcat(q->entry, newitem);
	return;
    }
    else {
               printf("Overflow");
    }
}

char removeQ(queue *q)
{
    if (q-> size != 0){
	char x;
	x = q -> entry[q->front];
	q-> entry[q->front] = ' ';
	q-> front++;
	return x;
     }
     else {
          printf("Underflow");
          return ' ';
     }
}

/*

void display(queue *q)
{
	if (q->size == 0)
		printf("\n\nQueue Empty!\n");
	else
	{
	printf("\n");
		for(int i = 0; i < MAX; i++)
		     printf("%s ", q->entry[i].y);
		printf("\n");
	}
	return;
}

*/

#endif
