#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 100
typedef int QElemType;  // 定义队列中元素的类型

// 定义顺序队列结构
typedef struct {
    QElemType* base;    // 存储队列元素的数组指针
    int front;          // 队头指针
    int rear;           // 队尾指针
} SqQueue;

// 构造一个空队列
SqQueue* InitQueue() {
    SqQueue* q = (SqQueue*)malloc(sizeof(SqQueue));
    if (q == NULL) {
        return NULL;
    }
    q->base = (QElemType*)malloc(MAXSIZE * sizeof(QElemType));
    if (q->base == NULL) {
        free(q);
        return NULL;
    }
    q->front = 0;
    q->rear = 0;
    return q;
}

// 销毁队列
void DestroyQueue(SqQueue* q) {
    if (q != NULL) {
        if (q->base != NULL) {
            free(q->base);
        }
        free(q);
    }
}

// 清空队列
void ClearQueue(SqQueue* q) {
    if (q != NULL) {
        q->front = 0;
        q->rear = 0;
    }
}

// 判断队列是否为空
bool QueueEmpty(SqQueue* q) {
    if (q == NULL) {
        return true;
    }
    return q->front == q->rear;
}

// 获取队列长度
int QueueLength(SqQueue* q) {
    if (q == NULL) {
        return 0;
    }
    return (q->rear - q->front + MAXSIZE) % MAXSIZE;
}

// 获取队头元素
bool GetHead(SqQueue* q, QElemType* e) {
    if (q == NULL || q->front == q->rear) {  // 队列为空
        return false;
    }
    *e = q->base[q->front];
    return true;
}

// 入队操作
bool EnQueue(SqQueue* q, QElemType e) {
    if (q == NULL) {
        return false;
    }
    // 判断队列是否已满
    if ((q->rear + 1) % MAXSIZE == q->front) {
        return false;
    }
    q->base[q->rear] = e;
    q->rear = (q->rear + 1) % MAXSIZE;  // 队尾指针后移
    return true;
}

// 出队操作
bool DeQueue(SqQueue* q, QElemType* e) {
    if (q == NULL || q->front == q->rear) {  // 队列为空
        return false;
    }
    *e = q->base[q->front];
    q->front = (q->front + 1) % MAXSIZE;  // 队头指针后移
    return true;
}

// 遍历队列中所有元素
void QueueTraverse(SqQueue* q) {
    if (q == NULL) {
        printf("Queue is NULL\n");
        return;
    }
    if (q->front == q->rear) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue elements from front to rear: ");
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->base[i]);
        i = (i + 1) % MAXSIZE;
    }
    printf("\n");
}

// 主函数用于测试
int main() {
    SqQueue* q = InitQueue();
    
    if (QueueEmpty(q)) {
        printf("Queue is empty\n");
    }
    
    // 入队操作
    printf("Enqueuing elements: 1, 2, 3, 4, 5\n");
    EnQueue(q, 1);
    EnQueue(q, 2);
    EnQueue(q, 3);
    EnQueue(q, 4);
    EnQueue(q, 5);
    
    printf("Queue length: %d\n", QueueLength(q));
    QueueTraverse(q);
    
    // 获取队头元素
    QElemType head;
    if (GetHead(q, &head)) {
        printf("Front element: %d\n", head);
    }
    
    // 出队操作
    QElemType deqElem;
    if (DeQueue(q, &deqElem)) {
        printf("Dequeued element: %d\n", deqElem);
    }
    
    printf("Queue after dequeue: ");
    QueueTraverse(q);
    
    // 继续入队和出队测试
    EnQueue(q, 6);
    printf("After enqueuing 6: ");
    QueueTraverse(q);
    printf("Queue length: %d\n", QueueLength(q));
    
    // 清空队列
    ClearQueue(q);
    if (QueueEmpty(q)) {
        printf("After clear, queue is empty\n");
    }
    
    // 销毁队列
    DestroyQueue(q);
    
    return 0;
}