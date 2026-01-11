#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 定义链式队列节点结构
typedef int QElemType;  // 定义队列中元素的类型

typedef struct QueueNode {
    QElemType data;                 // 数据域
    struct QueueNode* next;         // 指向下一个节点的指针
} QueueNode, *QueuePtr;

// 定义链式队列结构
typedef struct LinkQueue {
    QueuePtr front;                 // 队头指针
    QueuePtr rear;                  // 队尾指针
    int count;                      // 队列中元素个数
} *LinkQueue;

// 构造一个空队列
LinkQueue InitQueue() {
    LinkQueue q = (LinkQueue)malloc(sizeof(struct LinkQueue));
    if (q == NULL) {
        return NULL;
    }
    
    // 创建一个头节点，简化操作
    QueuePtr headNode = (QueuePtr)malloc(sizeof(QueueNode));
    if (headNode == NULL) {
        free(q);
        return NULL;
    }
    
    headNode->next = NULL;
    q->front = q->rear = headNode;
    q->count = 0;
    return q;
}

// 销毁队列
void DestroyQueue(LinkQueue q) {
    if (q == NULL) {
        return;
    }
    
    // 从头节点开始，逐个释放所有节点
    while (q->front != NULL) {
        q->rear = q->front->next;
        free(q->front);
        q->front = q->rear;
    }
    free(q);
}

// 清空队列
void ClearQueue(LinkQueue q) {
    if (q == NULL || q->front == NULL) {
        return;
    }
    
    QueuePtr temp;
    // 保留头节点，只删除数据节点
    q->rear = q->front->next;
    while (q->rear != NULL) {
        temp = q->rear;
        q->rear = q->rear->next;
        free(temp);
    }
    q->front->next = NULL;  // 头节点的next指针置空
    q->count = 0;
}

// 判断队列是否为空
bool QueueEmpty(LinkQueue q) {
    if (q == NULL) {
        return true;
    }
    // 队列为空当且仅当头节点的next指针为空
    return q->front->next == NULL;
}

// 获取队列长度
int QueueLength(LinkQueue q) {
    if (q == NULL) {
        return 0;
    }
    return q->count;
}

// 获取队头元素
bool GetHead(LinkQueue q, QElemType* e) {
    if (q == NULL || q->front->next == NULL) {  // 队列为空
        return false;
    }
    *e = q->front->next->data;
    return true;
}

// 入队操作
bool EnQueue(LinkQueue q, QElemType e) {
    if (q == NULL) {
        return false;
    }
    
    QueuePtr p = (QueuePtr)malloc(sizeof(QueueNode));
    if (p == NULL) {
        return false;  // 内存分配失败
    }
    
    p->data = e;
    p->next = NULL;
    q->rear->next = p;    // 新节点连接到队尾
    q->rear = p;          // 更新队尾指针
    q->count++;           // 队列元素个数加1
    
    return true;
}

// 出队操作
bool DeQueue(LinkQueue q, QElemType* e) {
    if (q == NULL || q->front->next == NULL) {  // 队列为空
        return false;
    }
    
    QueuePtr p = q->front->next;  // 指向第一个数据节点
    *e = p->data;                 // 获取数据
    q->front->next = p->next;     // 头节点的next指向第二个节点
    
    // 如果删除的是最后一个节点，则更新rear指针到头节点
    if (q->rear == p) {
        q->rear = q->front;
    }
    
    free(p);              // 释放节点内存
    q->count--;           // 队列元素个数减1
    
    return true;
}

// 遍历队列中所有元素
void QueueTraverse(LinkQueue q) {
    if (q == NULL) {
        printf("Queue is NULL\n");
        return;
    }
    if (q->front->next == NULL) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue elements from front to rear: ");
    QueuePtr current = q->front->next;  // 从第一个数据节点开始
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// 主函数用于测试
int main() {
    LinkQueue q = InitQueue();
    
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