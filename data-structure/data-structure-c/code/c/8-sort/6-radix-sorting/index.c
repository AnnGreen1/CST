#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGIT 10  // 基数（0~9）
#define MAX_NUM 1000  // 数字的最大位数限制

// 定义链表节点结构体
typedef struct Node {
    int data;           // 存储数据
    struct Node* next;  // 指向下一个节点
} Node;

// 创建新节点
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 释放链表内存
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// 获取数字的第k位（从右往左数）
int getDigit(int num, int k) {
    for (int i = 0; i < k; i++) {
        num /= 10;
    }
    return num % 10;
}

// 链式基数排序
void radixSort(Node** head) {
    Node* buckets[MAX_DIGIT];  // 10个桶
    Node* tails[MAX_DIGIT];    // 每个桶的尾指针
    Node* current;
    int maxDigits = 0;         // 最大位数

    // 计算最大位数
    current = *head;
    while (current != NULL) {
        int digits = 0;
        int temp = current->data;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }
        if (digits > maxDigits)
            maxDigits = digits;
        current = current->next;
    }

    // 对每一位进行排序
    for (int k = 0; k < maxDigits; k++) {
        // 初始化桶
        for (int i = 0; i < MAX_DIGIT; i++) {
            buckets[i] = NULL;
            tails[i] = NULL;
        }

        // 分配到桶中
        current = *head;
        while (current != NULL) {
            int digit = getDigit(current->data, k);
            if (buckets[digit] == NULL) {
                buckets[digit] = current;
                tails[digit] = current;
            } else {
                tails[digit]->next = current;
                tails[digit] = current;
            }
            current = current->next;
        }

        // 合并桶中的数据
        *head = NULL;
        Node* tail = NULL;
        for (int i = 0; i < MAX_DIGIT; i++) {
            if (buckets[i] != NULL) {
                if (*head == NULL) {
                    *head = buckets[i];
                    tail = tails[i];
                } else {
                    tail->next = buckets[i];
                    tail = tails[i];
                }
            }
        }
        if (tail != NULL)
            tail->next = NULL;
    }
}

// 打印链表
void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// 主函数测试
int main() {
    // 构造测试链表
    Node* head = createNode(170);
    head->next = createNode(45);
    head->next->next = createNode(75);
    head->next->next->next = createNode(90);
    head->next->next->next->next = createNode(2);
    head->next->next->next->next->next = createNode(802);

    printf("原始链表: ");
    printList(head);

    radixSort(&head);

    printf("排序后链表: ");
    printList(head);

    freeList(head);  // 释放内存
    return 0;
}