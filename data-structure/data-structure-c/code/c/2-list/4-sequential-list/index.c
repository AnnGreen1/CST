#include <stdio.h>
#include <stdlib.h>

// 定义线性表的最大长度
#define MAXSIZE 100

// 定义线性表结构体
typedef struct {
    int data[MAXSIZE];  // 存储数据元素的数组
    int length;         // 线性表的当前长度
} SeqList;

/**
 * 线性表的初始化操作
 * 操作逻辑：创建一个空的线性表，将长度设置为0
 * @param L 要初始化的线性表指针
 * @return 成功返回1，失败返回0
 */
int InitList(SeqList *L) {
    // 将线性表长度初始化为0
    L->length = 0;
    return 1;  // 初始化成功
}

/**
 * 线性表的取值操作
 * 操作逻辑：根据位置获取线性表中对应位置的元素值
 * @param L 线性表指针
 * @param i 位置索引（从1开始计数）
 * @param e 用于接收元素值的指针
 * @return 成功返回1，失败返回0
 */
int GetElem(SeqList L, int i, int *e) {
    // 检查位置是否合法（1到length之间）
    if (i < 1 || i > L.length) {
        return 0;  // 位置不合法
    }
    // 获取第i个位置的元素值（数组从0开始，所以是i-1）
    *e = L.data[i-1];
    return 1;  // 取值成功
}

/**
 * 线性表的查找操作
 * 操作逻辑：根据元素值查找该元素在表中的位置
 * @param L 线性表
 * @param e 要查找的元素值
 * @return 找到返回位置（从1开始），未找到返回0
 */
int LocateElem(SeqList L, int e) {
    for (int i = 0; i < L.length; i++) {
        // 遍历线性表，查找值为e的元素
        if (L.data[i] == e) {
            return i+1;  // 返回位置（从1开始计数）
        }
    }
    return 0;  // 未找到，返回0
}

/**
 * 线性表的插入操作
 * 操作逻辑：在指定位置插入新元素，将该位置及其后的元素后移
 * @param L 线性表指针
 * @param i 插入位置（从1开始计数）
 * @param e 要插入的元素值
 * @return 成功返回1，失败返回0
 */
int ListInsert(SeqList *L, int i, int e) {
    // 检查插入位置是否合法
    if (i < 1 || i > L->length + 1) {
        return 0;  // 位置不合法
    }
    // 检查线性表是否已满
    if (L->length >= MAXSIZE) {
        return 0;  // 线性表已满
    }
    
    // 将第i个位置及之后的元素后移一位
    // 从后往前移动，防止覆盖数据
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j-1];
    }
    
    // 在第i个位置插入新元素（数组从0开始，所以是i-1）
    L->data[i-1] = e;
    
    // 线性表长度加1
    L->length++;
    
    return 1;  // 插入成功
}

/**
 * 线性表的删除操作
 * 操作逻辑：删除指定位置的元素，将该位置后的元素前移
 * @param L 线性表指针
 * @param i 删除位置（从1开始计数）
 * @param e 用于接收被删除元素值的指针
 * @return 成功返回1，失败返回0
 */
int ListDelete(SeqList *L, int i, int *e) {
    // 检查删除位置是否合法
    if (i < 1 || i > L->length) {
        return 0;  // 位置不合法
    }
    
    // 获取被删除的元素值
    *e = L->data[i-1];
    
    // 将第i个位置之后的元素前移一位
    for (int j = i; j < L->length; j++) {
        L->data[j-1] = L->data[j];
    }
    
    // 线性表长度减1
    L->length--;
    
    return 1;  // 删除成功
}

/**
 * 打印线性表的所有元素
 * @param L 线性表
 */
void PrintList(SeqList L) {
    printf("线性表内容：");
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
    printf("\n");
    printf("线性表长度：%d\n", L.length);
}

// 主函数，演示线性表的各种操作
int main() {
    SeqList L;
    int result, value;
    
    // 初始化线性表
    if (InitList(&L)) {
        printf("线性表初始化成功\n");
    }
    
    // 使用测试数据初始化线性表
    int arr[] = {1, 2, 3, 4, 5}; // 声明为数组
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    // 将数组元素插入到线性表中
    for (int i = 0; i < arr_size; i++) {
        ListInsert(&L, i+1, arr[i]);
    }
    
    printf("\n--- 初始化后的线性表 ---\n");
    PrintList(L);
    
    // 测试取值操作
    printf("\n--- 测试取值操作 ---\n");
    if (GetElem(L, 3, &value)) {
        printf("第3个位置的元素是：%d\n", value);
    } else {
        printf("取值失败，位置不合法\n");
    }
    
    // 测试查找操作
    printf("\n--- 测试查找操作 ---\n");
    result = LocateElem(L, 4);
    if (result) {
        printf("元素4在第%d个位置\n", result);
    } else {
        printf("未找到元素4\n");
    }
    
    // 测试插入操作
    printf("\n--- 测试插入操作 ---\n");
    if (ListInsert(&L, 4, 99)) {
        printf("在第4个位置插入99成功\n");
        PrintList(L);
    } else {
        printf("插入失败\n");
    }
    
    // 测试删除操作
    printf("\n--- 测试删除操作 ---\n");
    if (ListDelete(&L, 2, &value)) {
        printf("删除第2个位置的元素成功，被删除的元素是：%d\n", value);
        PrintList(L);
    } else {
        printf("删除失败\n");
    }
    
    return 0;
}