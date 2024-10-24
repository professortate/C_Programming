#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct Queue {
    int front, rear;
    long int calls[MAX];

};

void initializeQueue (struct Queue *q){
    q->front = q->rear = -1;
}
int isFull (struct Queue *q){
    return (q->front ==(q->rear +1)% MAX);

}
int isEmpty (struct Queue *q){
    return (q->front == -1);
}