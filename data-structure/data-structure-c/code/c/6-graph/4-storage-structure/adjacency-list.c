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

/**
 * 深度优先搜索遍历（DFS）
 * @param G 图的指针
 * @param v 当前访问的顶点索引
 * @param visited 访问标记数组
 */
void DFS(AdjList *G, int v, int *visited) {
    // 标记当前顶点为已访问
    visited[v] = 1;
    
    // 访问当前顶点
    printf("%d ", G->vertices[v].data);
    
    // 遍历当前顶点的所有邻接顶点
    ArcNode *current = G->vertices[v].firstarc;
    while (current != NULL) {
        int w = current->adjvex;
        if (!visited[w]) {
            DFS(G, w, visited);  // 递归访问下一个顶点
        }
        current = current->next;
    }
}

/**
 * 深度优先遍历图
 * @param G 图的指针
 */
void DFSTraverse(AdjList *G) {
    printf("深度优先遍历结果：");
    
    // 初始化访问标记数组
    int *visited = (int*)malloc(G->vertexNum * sizeof(int));
    for (int i = 0; i < G->vertexNum; i++) {
        visited[i] = 0;  // 0表示未访问
    }
    
    // 对每个未访问的顶点进行DFS
    for (int i = 0; i < G->vertexNum; i++) {
        if (!visited[i]) {
            DFS(G, i, visited);
        }
    }
    
    printf("\n");
    
    // 释放内存
    free(visited);
}

/**
 * 广度优先搜索遍历（BFS）
 * @param G 图的指针
 */
void BFSTraverse(AdjList *G) {
    printf("广度优先遍历结果：");
    
    // 初始化访问标记数组和队列
    int *visited = (int*)malloc(G->vertexNum * sizeof(int));
    int *queue = (int*)malloc(G->vertexNum * sizeof(int));
    int front = 0, rear = 0;
    
    for (int i = 0; i < G->vertexNum; i++) {
        visited[i] = 0;  // 0表示未访问
    }
    
    // 对每个未访问的顶点进行BFS
    for (int i = 0; i < G->vertexNum; i++) {
        if (!visited[i]) {
            // 将起始顶点加入队列
            queue[rear++] = i;
            visited[i] = 1;
            
            while (front != rear) {  // 队列非空
                int v = queue[front++];  // 出队
                printf("%d ", G->vertices[v].data);
                
                // 将v的所有未访问邻接顶点入队
                ArcNode *current = G->vertices[v].firstarc;
                while (current != NULL) {
                    int w = current->adjvex;
                    if (!visited[w]) {
                        queue[rear++] = w;
                        visited[w] = 1;
                    }
                    current = current->next;
                }
            }
        }
    }
    
    printf("\n");
    
    // 释放内存
    free(visited);
    free(queue);
}

/**
 * 获取顶点的度数
 * @param G 图的指针
 * @param vertex 顶点值
 * @return 顶点的度数
 */
int getDegree(AdjList *G, int vertex) {
    int index = getVertexIndex(G, vertex);
    if (index == -1) {
        return -1;  // 顶点不存在
    }
    
    int degree = 0;
    ArcNode *current = G->vertices[index].firstarc;
    while (current != NULL) {
        degree++;
        current = current->next;
    }
    
    return degree;
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
    
    // 添加边 (1-2, 1-3, 2-4, 3-4, 4-5)
    addEdge(&G, 1, 2, 1);  // 顶点1到顶点2
    addEdge(&G, 1, 3, 1);  // 顶点1到顶点3
    addEdge(&G, 2, 4, 1);  // 顶点2到顶点4
    addEdge(&G, 3, 4, 1);  // 顶点3到顶点4
    addEdge(&G, 4, 5, 1);  // 顶点4到顶点5
    
    // 打印邻接表
    printAdjList(&G);
    
    // 执行深度优先遍历
    DFSTraverse(&G);
    
    // 执行广度优先遍历
    BFSTraverse(&G);
    
    // 测试度数计算
    for (int i = 0; i < G.vertexNum; i++) {
        int degree = getDegree(&G, G.vertices[i].data);
        printf("顶点%d的度数: %d\n", G.vertices[i].data, degree);
    }
    
    return 0;
}