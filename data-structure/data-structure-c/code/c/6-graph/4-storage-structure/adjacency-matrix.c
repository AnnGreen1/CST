#include <stdio.h>
#include <stdlib.h>

// 图的最大顶点数
#define MAX_VERTEX_NUM 20

// 图的类型枚举：有向图或无向图
typedef enum {
    DG,  // 有向图
    UDG  // 无向图
} GraphType;

// 图的邻接矩阵表示
typedef struct {
    int vertices[MAX_VERTEX_NUM];                           // 顶点数组
    int arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];              // 邻接矩阵
    int vertexNum;                                         // 当前顶点数量
    int arcNum;                                            // 边的数量
    GraphType graphType;                                   // 图的类型
} AdjMatrix;

/**
 * 初始化图
 * @param G 图的指针
 * @param graphType 图的类型（有向图或无向图）
 */
void initGraph(AdjMatrix *G, GraphType graphType) {
    G->vertexNum = 0;
    G->arcNum = 0;
    G->graphType = graphType;
    
    // 初始化邻接矩阵，所有边的权重设为0（表示没有边）
    for (int i = 0; i < MAX_VERTEX_NUM; i++) {
        for (int j = 0; j < MAX_VERTEX_NUM; j++) {
            G->arcs[i][j] = 0;  // 0表示没有边，如果是带权图，可以用无穷大表示无边
        }
    }
}

/**
 * 添加顶点
 * @param G 图的指针
 * @param vertex 顶点值
 */
void addVertex(AdjMatrix *G, int vertex) {
    if (G->vertexNum >= MAX_VERTEX_NUM) {
        printf("图已满，无法添加更多顶点！\n");
        return;
    }
    
    G->vertices[G->vertexNum] = vertex;
    G->vertexNum++;
}

/**
 * 添加边
 * @param G 图的指针
 * @param v1 起始顶点索引
 * @param v2 终止顶点索引
 * @param weight 边的权重，默认为1
 */
void addEdge(AdjMatrix *G, int v1, int v2, int weight) {
    // 检查顶点索引是否有效
    if (v1 < 0 || v1 >= G->vertexNum || v2 < 0 || v2 >= G->vertexNum) {
        printf("顶点索引超出范围！\n");
        return;
    }
    
    // 设置邻接矩阵对应位置的值
    G->arcs[v1][v2] = weight;
    
    // 如果是无向图，还需要设置对称位置
    if (G->graphType == UDG) {
        G->arcs[v2][v1] = weight;
    }
    
    G->arcNum++;
}

/**
 * 获取顶点在图中的索引
 * @param G 图的指针
 * @param vertex 顶点值
 * @return 顶点在数组中的索引，如果不存在则返回-1
 */
int getVertexIndex(AdjMatrix *G, int vertex) {
    for (int i = 0; i < G->vertexNum; i++) {
        if (G->vertices[i] == vertex) {
            return i;
        }
    }
    return -1;  // 未找到
}

/**
 * 打印邻接矩阵
 * @param G 图的指针
 */
void printAdjMatrix(AdjMatrix *G) {
    printf("图的邻接矩阵表示：\n");
    
    // 打印列标题（顶点）
    printf("    ");
    for (int i = 0; i < G->vertexNum; i++) {
        printf("%3d ", G->vertices[i]);
    }
    printf("\n");
    
    // 打印每一行
    for (int i = 0; i < G->vertexNum; i++) {
        // 打印行标题（顶点）
        printf("%3d ", G->vertices[i]);
        
        // 打印邻接矩阵的每一列
        for (int j = 0; j < G->vertexNum; j++) {
            printf("%3d ", G->arcs[i][j]);
        }
        printf("\n");
    }
    
    printf("顶点数：%d，边数：%d\n", G->vertexNum, G->arcNum);
}

/**
 * 深度优先搜索遍历（DFS）
 * @param G 图的指针
 * @param v 当前访问的顶点索引
 * @param visited 访问标记数组
 */
void DFS(AdjMatrix *G, int v, int *visited) {
    // 标记当前顶点为已访问
    visited[v] = 1;
    
    // 访问当前顶点
    printf("%d ", G->vertices[v]);
    
    // 遍历所有可能的相邻顶点
    for (int w = 0; w < G->vertexNum; w++) {
        // 如果存在边且未被访问过
        if (G->arcs[v][w] != 0 && !visited[w]) {
            DFS(G, w, visited);  // 递归访问下一个顶点
        }
    }
}

/**
 * 深度优先遍历图
 * @param G 图的指针
 */
void DFSTraverse(AdjMatrix *G) {
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
 * 获取顶点v的第一个邻接顶点
 * @param G 图的指针
 * @param v 顶点索引
 * @return 第一个邻接顶点的索引，如果没有则返回-1
 */
int getFirstNeighbor(AdjMatrix *G, int v) {
    for (int j = 0; j < G->vertexNum; j++) {
        if (G->arcs[v][j] != 0) {
            return j;
        }
    }
    return -1;
}

/**
 * 获取顶点v相对于w的下一个邻接顶点
 * @param G 图的指针
 * @param v 当前顶点
 * @param w 相对于的顶点
 * @return 下一个邻接顶点的索引，如果没有则返回-1
 */
int getNextNeighbor(AdjMatrix *G, int v, int w) {
    for (int j = w + 1; j < G->vertexNum; j++) {
        if (G->arcs[v][j] != 0) {
            return j;
        }
    }
    return -1;
}

// 主函数演示
int main() {
    AdjMatrix G;
    
    // 初始化一个无向图
    initGraph(&G, UDG);
    
    // 添加顶点
    addVertex(&G, 1);
    addVertex(&G, 2);
    addVertex(&G, 3);
    addVertex(&G, 4);
    addVertex(&G, 5);
    
    // 添加边 (1-2, 1-3, 2-4, 3-4, 4-5)
    addEdge(&G, 0, 1, 1);  // 顶点1到顶点2
    addEdge(&G, 0, 2, 1);  // 顶点1到顶点3
    addEdge(&G, 1, 3, 1);  // 顶点2到顶点4
    addEdge(&G, 2, 3, 1);  // 顶点3到顶点4
    addEdge(&G, 3, 4, 1);  // 顶点4到顶点5
    
    // 打印邻接矩阵
    printAdjMatrix(&G);
    
    // 执行深度优先遍历
    DFSTraverse(&G);
    
    return 0;
}