#include <stdio.h>
#include <stdlib.h>

// 最大顶点数
#define MAX_VERTEX_NUM 20

// 边节点结构
typedef struct ArcNode {
    int adjvex;                 // 邻接顶点的索引
    int weight;                 // 边的权重
    struct ArcNode *next;       // 指向下一个边节点的指针
} ArcNode;

// 顶点节点结构
typedef struct VNode {
    int data;                   // 顶点数据
    ArcNode *firstarc;          // 指向第一条边的指针
} VNode;

// 图的邻接表表示
typedef struct {
    VNode vertices[MAX_VERTEX_NUM];  // 顶点数组
    int vertexNum;                  // 顶点数量
    int arcNum;                     // 边的数量
    int graphType;                  // 图的类型（0表示无向图，1表示有向图）
} AdjList;

/**
 * 初始化图
 * @param G 图的指针
 * @param graphType 图的类型（0表示无向图，1表示有向图）
 */
void initGraph(AdjList *G, int graphType) {
    G->vertexNum = 0;
    G->arcNum = 0;
    G->graphType = graphType;
    
    // 初始化所有顶点的邻接表头指针为NULL
    for (int i = 0; i < MAX_VERTEX_NUM; i++) {
        G->vertices[i].firstarc = NULL;
        G->vertices[i].data = 0;
    }
}

/**
 * 添加顶点
 * @param G 图的指针
 * @param vertex 顶点值
 */
void addVertex(AdjList *G, int vertex) {
    if (G->vertexNum >= MAX_VERTEX_NUM) {
        printf("图已满，无法添加更多顶点！\n");
        return;
    }
    
    G->vertices[G->vertexNum].data = vertex;
    G->vertices[G->vertexNum].firstarc = NULL;  // 初始化邻接表为NULL
    G->vertexNum++;
}

/**
 * 获取顶点在图中的索引
 * @param G 图的指针
 * @param vertex 顶点值
 * @return 顶点在数组中的索引，如果不存在则返回-1
 */
int getVertexIndex(AdjList *G, int vertex) {
    for (int i = 0; i < G->vertexNum; i++) {
        if (G->vertices[i].data == vertex) {
            return i;
        }
    }
    return -1;  // 未找到
}

/**
 * 添加边
 * @param G 图的指针
 * @param v1 起始顶点值
 * @param v2 终止顶点值
 * @param weight 边的权重，默认为1
 */
void addEdge(AdjList *G, int v1, int v2, int weight) {
    int i1 = getVertexIndex(G, v1);
    int i2 = getVertexIndex(G, v2);
    
    // 检查顶点是否存在
    if (i1 == -1 || i2 == -1) {
        printf("顶点不存在！\n");
        return;
    }
    
    // 创建新的边节点
    ArcNode *newArc = (ArcNode*)malloc(sizeof(ArcNode));
    if (newArc == NULL) {
        printf("内存分配失败！\n");
        return;
    }
    
    newArc->adjvex = i2;
    newArc->weight = weight;
    newArc->next = G->vertices[i1].firstarc;  // 插入到链表头部
    G->vertices[i1].firstarc = newArc;
    
    // 如果是无向图，还需要添加反向边
    if (G->graphType == 0) {
        newArc = (ArcNode*)malloc(sizeof(ArcNode));
        if (newArc == NULL) {
            printf("内存分配失败！\n");
            return;
        }
        
        newArc->adjvex = i1;
        newArc->weight = weight;
        newArc->next = G->vertices[i2].firstarc;  // 插入到链表头部
        G->vertices[i2].firstarc = newArc;
    }
    
    G->arcNum++;
}

/**
 * 深度优先搜索递归实现
 * @param G 图的指针
 * @param v 当前访问的顶点索引
 * @param visited 访问标记数组
 */
void DFS_Recursive(AdjList *G, int v, int *visited) {
    // 标记当前顶点为已访问
    visited[v] = 1;
    
    // 访问当前顶点
    printf("%d ", G->vertices[v].data);
    
    // 遍历当前顶点的所有邻接顶点
    ArcNode *current = G->vertices[v].firstarc;
    while (current != NULL) {
        int w = current->adjvex;
        if (!visited[w]) {
            DFS_Recursive(G, w, visited);  // 递归访问下一个顶点
        }
        current = current->next;
    }
}

/**
 * 深度优先遍历图（递归实现）
 * @param G 图的指针
 */
void DFSTraverse_Recursive(AdjList *G) {
    printf("深度优先遍历结果（递归实现）：");
    
    // 初始化访问标记数组
    int *visited = (int*)malloc(G->vertexNum * sizeof(int));
    for (int i = 0; i < G->vertexNum; i++) {
        visited[i] = 0;  // 0表示未访问
    }
    
    // 对每个未访问的顶点进行DFS
    for (int i = 0; i < G->vertexNum; i++) {
        if (!visited[i]) {
            DFS_Recursive(G, i, visited);
        }
    }
    
    printf("\n");
    
    // 释放内存
    free(visited);
}

/**
 * 获取顶点v的下一个邻接顶点
 * @param G 图的指针
 * @param v 当前顶点
 * @param w 相对于的顶点
 * @return 下一个邻接顶点的索引，如果没有则返回-1
 */
int getNextNeighbor(AdjList *G, int v, int w) {
    ArcNode *current = G->vertices[v].firstarc;
    while (current != NULL) {
        if (current->adjvex > w) {
            return current->adjvex;
        }
        current = current->next;
    }
    return -1;
}

/**
 * 获取顶点v的第一个邻接顶点
 * @param G 图的指针
 * @param v 顶点索引
 * @return 第一个邻接顶点的索引，如果没有则返回-1
 */
int getFirstNeighbor(AdjList *G, int v) {
    if (G->vertices[v].firstarc != NULL) {
        return G->vertices[v].firstarc->adjvex;
    }
    return -1;
}

/**
 * 深度优先搜索非递归实现（使用栈）
 * @param G 图的指针
 * @param start 起始顶点索引
 */
void DFS_NonRecursive(AdjList *G, int start) {
    printf("深度优先遍历结果（非递归实现，从顶点%d开始）：", G->vertices[start].data);
    
    // 初始化访问标记数组
    int *visited = (int*)malloc(G->vertexNum * sizeof(int));
    for (int i = 0; i < G->vertexNum; i++) {
        visited[i] = 0;  // 0表示未访问
    }
    
    // 创建栈用于DFS
    int *stack = (int*)malloc(G->vertexNum * sizeof(int));
    int top = -1;  // 栈顶指针
    
    // 将起始顶点压入栈
    stack[++top] = start;
    visited[start] = 1;
    printf("%d ", G->vertices[start].data);
    
    while (top != -1) {
        int current = stack[top];  // 查看栈顶元素
        
        // 查找当前顶点的未访问邻接顶点
        int neighbor = -1;
        ArcNode *currentArc = G->vertices[current].firstarc;
        while (currentArc != NULL) {
            if (!visited[currentArc->adjvex]) {
                neighbor = currentArc->adjvex;
                break;
            }
            currentArc = currentArc->next;
        }
        
        if (neighbor != -1) {
            // 找到未访问的邻接顶点，将其压入栈
            stack[++top] = neighbor;
            visited[neighbor] = 1;
            printf("%d ", G->vertices[neighbor].data);
        } else {
            // 没有未访问的邻接顶点，弹出栈顶元素
            top--;
        }
    }
    
    printf("\n");
    
    // 释放内存
    free(visited);
    free(stack);
}

/**
 * 打印邻接表
 * @param G 图的指针
 */
void printAdjList(AdjList *G) {
    printf("图的邻接表表示：\n");
    
    for (int i = 0; i < G->vertexNum; i++) {
        printf("%d -> ", G->vertices[i].data);
        
        ArcNode *current = G->vertices[i].firstarc;
        while (current != NULL) {
            printf("(%d, w:%d)", G->vertices[current->adjvex].data, current->weight);
            current = current->next;
            if (current != NULL) {
                printf(" -> ");
            }
        }
        printf(" NULL\n");
    }
    
    printf("顶点数：%d，边数：%d\n", G->vertexNum, G->arcNum);
}

// 主函数演示
int main() {
    AdjList G;
    
    // 初始化一个无向图
    initGraph(&G, 0);
    
    // 添加顶点
    addVertex(&G, 1);
    addVertex(&G, 2);
    addVertex(&G, 3);
    addVertex(&G, 4);
    addVertex(&G, 5);
    
    // 添加边
    addEdge(&G, 1, 2, 1);  // 顶点1到顶点2
    addEdge(&G, 1, 3, 1);  // 顶点1到顶点3
    addEdge(&G, 2, 4, 1);  // 顶点2到顶点4
    addEdge(&G, 3, 4, 1);  // 顶点3到顶点4
    addEdge(&G, 4, 5, 1);  // 顶点4到顶点5
    
    // 打印邻接表
    printAdjList(&G);
    
    // 执行递归深度优先遍历
    DFSTraverse_Recursive(&G);
    
    // 执行非递归深度优先遍历（从顶点1开始）
    DFS_NonRecursive(&G, 0);  // 顶点1的索引是0
    
    return 0;
}