#include <stdio.h>
#include <stdlib.h>

// 最大顶点数
#define MAX_VERTEX_NUM 20

// 邻接多重表边节点结构
typedef struct EBox {
    int ivex;                   // 该边依附的第一个顶点的位置
    int jvex;                   // 该边依附的第二个顶点的位置
    int weight;                 // 边的权重
    struct EBox *ilink;         // 指向依附于顶点ivex的下一条边
    struct EBox *jlink;         // 指向依附于顶点jvex的下一条边
    int mark;                   // 访问标记（用于遍历）
} EBox;

// 顶点节点结构
typedef struct VexNode {
    int data;                   // 顶点数据
    EBox *firstedge;            // 指向第一条依附该顶点的边
} VexNode;

// 图的邻接多重表表示
typedef struct {
    VexNode adjmulist[MAX_VERTEX_NUM];  // 邻接多重表
    int vexnum;                         // 顶点数
    int edgenum;                        // 边数
} AMGraph;

/**
 * 初始化图
 * @param G 图的指针
 */
void initGraph(AMGraph *G) {
    G->vexnum = 0;
    G->edgenum = 0;
    
    // 初始化所有顶点的边链表头指针为NULL
    for (int i = 0; i < MAX_VERTEX_NUM; i++) {
        G->adjmulist[i].firstedge = NULL;
        G->adjmulist[i].data = 0;
    }
}

/**
 * 添加顶点
 * @param G 图的指针
 * @param vertex 顶点值
 */
void addVertex(AMGraph *G, int vertex) {
    if (G->vexnum >= MAX_VERTEX_NUM) {
        printf("图已满，无法添加更多顶点！\n");
        return;
    }
    
    G->adjmulist[G->vexnum].data = vertex;
    G->adjmulist[G->vexnum].firstedge = NULL;
    G->vexnum++;
}

/**
 * 获取顶点在图中的索引
 * @param G 图的指针
 * @param vertex 顶点值
 * @return 顶点在数组中的索引，如果不存在则返回-1
 */
int getVertexIndex(AMGraph *G, int vertex) {
    for (int i = 0; i < G->vexnum; i++) {
        if (G->adjmulist[i].data == vertex) {
            return i;
        }
    }
    return -1;  // 未找到
}

/**
 * 添加边
 * @param G 图的指针
 * @param v1 顶点1的值
 * @param v2 顶点2的值
 * @param weight 边的权重，默认为1
 */
void addEdge(AMGraph *G, int v1, int v2, int weight) {
    int i1 = getVertexIndex(G, v1);  // 第一个顶点的索引
    int i2 = getVertexIndex(G, v2);  // 第二个顶点的索引
    
    // 检查顶点是否存在
    if (i1 == -1 || i2 == -1) {
        printf("顶点不存在！\n");
        return;
    }
    
    // 检查边是否已存在
    EBox *current = G->adjmulist[i1].firstedge;
    while (current != NULL) {
        if ((current->ivex == i1 && current->jvex == i2) || 
            (current->ivex == i2 && current->jvex == i1)) {
            printf("边已存在！\n");
            return;
        }
        if (current->ivex == i1) {
            current = current->ilink;
        } else {
            current = current->jlink;
        }
    }
    
    // 创建新的边节点
    EBox *newEdge = (EBox*)malloc(sizeof(EBox));
    if (newEdge == NULL) {
        printf("内存分配失败！\n");
        return;
    }
    
    // 初始化边节点
    newEdge->ivex = i1;
    newEdge->jvex = i2;
    newEdge->weight = weight;
    newEdge->mark = 0;  // 初始化访问标记为未访问
    
    // 插入到顶点i1的边链表中
    newEdge->ilink = G->adjmulist[i1].firstedge;
    G->adjmulist[i1].firstedge = newEdge;
    
    // 插入到顶点i2的边链表中
    newEdge->jlink = G->adjmulist[i2].firstedge;
    G->adjmulist[i2].firstedge = newEdge;
    
    G->edgenum++;
}

/**
 * 打印邻接多重表
 * @param G 图的指针
 */
void printAMGraph(AMGraph *G) {
    printf("图的邻接多重表表示：\n");
    
    printf("顶点列表：");
    for (int i = 0; i < G->vexnum; i++) {
        printf("%d ", G->adjmulist[i].data);
    }
    printf("\n\n");
    
    // 打印邻接多重表
    for (int i = 0; i < G->vexnum; i++) {
        printf("顶点%d关联的边: ", G->adjmulist[i].data);
        
        EBox *current = G->adjmulist[i].firstedge;
        while (current != NULL) {
            // 确定当前边的另一个顶点
            int otherVex = (current->ivex == i) ? current->jvex : current->ivex;
            printf("(%d-%d)(w:%d) ", 
                   G->adjmulist[i].data, 
                   G->adjmulist[otherVex].data, 
                   current->weight);
            
            // 移动到下一条边
            if (current->ivex == i) {
                current = current->ilink;
            } else {
                current = current->jlink;
            }
        }
        printf("\n");
    }
    
    printf("\n顶点数：%d，边数：%d\n", G->vexnum, G->edgenum);
}

/**
 * 计算顶点的度数
 * @param G 图的指针
 * @param vertex 顶点值
 * @return 顶点的度数
 */
int getDegree(AMGraph *G, int vertex) {
    int index = getVertexIndex(G, vertex);
    if (index == -1) {
        return -1;  // 顶点不存在
    }
    
    int degree = 0;
    EBox *current = G->adjmulist[index].firstedge;
    while (current != NULL) {
        degree++;
        // 根据当前顶点确定是通过ilink还是jlink继续遍历
        if (current->ivex == index) {
            current = current->ilink;
        } else {
            current = current->jlink;
        }
    }
    
    return degree;
}

/**
 * 深度优先搜索遍历（DFS）
 * @param G 图的指针
 * @param v 当前访问的顶点索引
 * @param visited 访问标记数组
 */
void DFS(AMGraph *G, int v, int *visited) {
    // 标记当前顶点为已访问
    visited[v] = 1;
    
    // 访问当前顶点
    printf("%d ", G->adjmulist[v].data);
    
    // 遍历当前顶点的所有关联边
    EBox *current = G->adjmulist[v].firstedge;
    while (current != NULL) {
        // 检查这条边是否已经被访问过
        if (current->mark == 0) {
            current->mark = 1;  // 标记边为已访问
            
            // 确定下一个要访问的顶点
            int nextVex = (current->ivex == v) ? current->jvex : current->ivex;
            
            if (!visited[nextVex]) {
                DFS(G, nextVex, visited);  // 递归访问下一个顶点
            }
        }
        
        // 移动到下一条边
        if (current->ivex == v) {
            current = current->ilink;
        } else {
            current = current->jlink;
        }
    }
}

/**
 * 深度优先遍历图
 * @param G 图的指针
 */
void DFSTraverse(AMGraph *G) {
    printf("深度优先遍历结果：");
    
    // 初始化访问标记数组
    int *visited = (int*)malloc(G->vexnum * sizeof(int));
    for (int i = 0; i < G->vexnum; i++) {
        visited[i] = 0;  // 0表示未访问
    }
    
    // 重置所有边的访问标记
    for (int i = 0; i < G->vexnum; i++) {
        EBox *current = G->adjmulist[i].firstedge;
        while (current != NULL) {
            current->mark = 0;
            if (current->ivex == i) {
                current = current->ilink;
            } else {
                current = current->jlink;
            }
        }
    }
    
    // 对每个未访问的顶点进行DFS
    for (int i = 0; i < G->vexnum; i++) {
        if (!visited[i]) {
            DFS(G, i, visited);
        }
    }
    
    printf("\n");
    
    // 释放内存
    free(visited);
}

/**
 * 广度优先遍历图
 * @param G 图的指针
 */
void BFSTraverse(AMGraph *G) {
    printf("广度优先遍历结果：");
    
    // 初始化访问标记数组和队列
    int *visited = (int*)malloc(G->vexnum * sizeof(int));
    int *queue = (int*)malloc(G->vexnum * sizeof(int));
    int front = 0, rear = 0;
    
    for (int i = 0; i < G->vexnum; i++) {
        visited[i] = 0;  // 0表示未访问
    }
    
    // 重置所有边的访问标记
    for (int i = 0; i < G->vexnum; i++) {
        EBox *current = G->adjmulist[i].firstedge;
        while (current != NULL) {
            current->mark = 0;
            if (current->ivex == i) {
                current = current->ilink;
            } else {
                current = current->jlink;
            }
        }
    }
    
    // 对每个未访问的顶点进行BFS
    for (int i = 0; i < G->vexnum; i++) {
        if (!visited[i]) {
            // 将起始顶点加入队列
            queue[rear++] = i;
            visited[i] = 1;
            
            while (front != rear) {  // 队列非空
                int v = queue[front++];  // 出队
                printf("%d ", G->adjmulist[v].data);
                
                // 将v的所有未访问邻接顶点入队
                EBox *current = G->adjmulist[v].firstedge;
                while (current != NULL) {
                    if (current->mark == 0) {
                        current->mark = 1;  // 标记边为已访问
                        
                        int w = (current->ivex == v) ? current->jvex : current->ivex;
                        if (!visited[w]) {
                            queue[rear++] = w;
                            visited[w] = 1;
                        }
                    }
                    
                    if (current->ivex == v) {
                        current = current->ilink;
                    } else {
                        current = current->jlink;
                    }
                }
            }
        }
    }
    
    printf("\n");
    
    // 释放内存
    free(visited);
    free(queue);
}

// 主函数演示
int main() {
    AMGraph G;
    
    // 初始化图
    initGraph(&G);
    
    // 添加顶点
    addVertex(&G, 1);
    addVertex(&G, 2);
    addVertex(&G, 3);
    addVertex(&G, 4);
    addVertex(&G, 5);
    
    // 添加边
    addEdge(&G, 1, 2, 1);  // 1-2
    addEdge(&G, 1, 3, 1);  // 1-3
    addEdge(&G, 2, 4, 1);  // 2-4
    addEdge(&G, 3, 4, 1);  // 3-4
    addEdge(&G, 4, 5, 1);  // 4-5
    
    // 打印邻接多重表
    printAMGraph(&G);
    
    // 计算各顶点的度数
    printf("\n各顶点的度数：\n");
    for (int i = 0; i < G.vexnum; i++) {
        int degree = getDegree(&G, G.adjmulist[i].data);
        printf("顶点%d的度数: %d\n", G.adjmulist[i].data, degree);
    }
    
    // 执行深度优先遍历
    printf("\n");
    DFSTraverse(&G);
    
    // 执行广度优先遍历
    printf("\n");
    BFSTraverse(&G);
    
    return 0;
}