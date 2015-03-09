#define MAX 6

typedef struct{
	int front;
	int rear;
	char entry[MAX];
} queue;

bool empty(queue *q)
{
	return (q->rear < q->front);
}

void insert(queue *q, char newitem[MAX])
{
	if(empty(q))
		strcpy(q->entry, newitem);
	else
		strcat(q->entry, newitem);
	return;
}

char remove(queue *q)
{
	char x;
	x=q->entry[q->front];
	q->front++;
	return x;
}
