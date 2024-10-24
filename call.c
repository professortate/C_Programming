#include <stdio.h>

#define MAX_SIZE 5

typedef struct {
    long long phoneNumber;
} Call;

typedef struct {
    Call items[MAX_SIZE];
    int front, rear;
} CircularQueue;

void initQueue(CircularQueue *q) {
    q->front = q->rear = -1;
}

int isEmpty(CircularQueue *q) {
    return (q->front == -1);
}

int isFull(CircularQueue *q) {
    return ((q->rear + 1) % MAX_SIZE == q->front);
}

void addCall(CircularQueue *q, Call call) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q))
        q->front = 0;
    q->rear = (q->rear + 1) % MAX_SIZE;
    q->items[q->rear] = call;
    printf("Call added successfully\n");
}

void deleteCall(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Call deleted successfully\n");
    if (q->front == q->rear)
        initQueue(q);
    else
        q->front = (q->front + 1) % MAX_SIZE;
}

void displayCalls(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Current calls:\n");
    int i = q->front;
    do {
        printf("Call from phone number: %lld\n", q->items[i].phoneNumber);
        i = (i + 1) % MAX_SIZE;
    } while (i != (q->rear + 1) % MAX_SIZE);
}

int main() {
    CircularQueue q;
    initQueue(&q);

    int choice;
    Call newCall;

    do {
        printf("\n1. Add a call\n");
        printf("2. Delete the first call\n");
        printf("3. Display current calls\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter phone number of the caller: ");
                scanf("%lld", &newCall.phoneNumber);
                addCall(&q, newCall);
                break;
            case 2:
                deleteCall(&q);
                break;
            case 3:
                displayCalls(&q);
                break;
            case 4:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
