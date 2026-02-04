#include <stdio.h>
#include <stdlib.h>

// 最大顶点数
#define MAX_VERTEX_NUM 20

// 十字链表边节点结构
typedef struct ArcBox {
    int tailvex;                // 弧尾顶点在图中的位置
    int headvex;                // 弧头顶点在图中的位置
    int weight;                 // 边的权重
    struct ArcBox *hlink;       // 指向弧头相同的下一条弧
    struct ArcBox *tlink;       // 指向弧尾相同的下一条弧
} ArcBox;

// 顶点节点结构
typedef struct VexNode {
    int data;                   // 顶点数据
    ArcBox *firstin;            // 指向以该顶点为弧头的第一条弧
    ArcBox *firstout;           // 指向以该顶点为弧尾的第一条弧
} VexNode;

// 图的十字链表表示
typedef struct {
    VexNode xlist[MAX_VERTEX_NUM];  // 顶点表
    int vexnum;                     // 顶点数
    int arcnum;                     // 弧数
} OLGraph;

/**
 * 初始化图
 * @param G 图的指针
 */
void initGraph(OLGraph *G) {
    G->vexnum = 0;
    G->arcnum = 0;
    
    // 初始化所有顶点的弧链表头指针为NULL
    for (int i = 0; i < MAX_VERTEX_NUM; i++) {
        G->xlist[i].firstin = NULL;
        G->xlist[i].firstout = NULL;
        G->xlist[i].data = 0;
    }
}

/**
 * 添加顶点
 * @param G 图的指针
 * @param vertex 顶点值
 */
void addVertex(OLGraph *G, int vertex) {
    if (G->vexnum >= MAX_VERTEX_NUM) {
        printf("图已满，无法添加更多顶点！\n");
        return;
    }
    
    G->xlist[G->vexnum].data = vertex;
    G->xlist[G->vexnum].firstin = NULL;
    G->xlist[G->vexnum].firstout = NULL;
    G->vexnum++;
}

/**
 * 获取顶点在图中的索引
 * @param G 图的指针
 * @param vertex 顶点值
 * @return 顶点在数组中的索引，如果不存在则返回-1
 */
int getVertexIndex(OLGraph *G, int vertex) {
    for (int i = 0; i < G->vexnum; i++) {
        if (G->xlist[i].data == vertex) {
            return i;
        }
    }
    return -1;  // 未找到
}

/**
 * 添加弧（有向边）
 * @param G 图的指针
 * @param v1 弧尾顶点值
 * @param v2 弧头顶点值
 * @param weight 弧的权重，默认为1
 */
void addArc(OLGraph *G, int v1, int v2, int weight) {
    int tailIdx = getVertexIndex(G, v1);  // 弧尾索引
    int headIdx = getVertexIndex(G, v2);  // 弧头索引
    
    // 检查顶点是否存在
    if (tailIdx == -1 || headIdx == -1) {
        printf("顶点不存在！\n");
        return;
    }
    
    // 创建新的弧节点
    ArcBox *newArc = (ArcBox*)malloc(sizeof(ArcBox));
    if (newArc == NULL) {
        printf("内存分配失败！\n");
        return;
    }
    
    // 初始化弧节点
    newArc->tailvex = tailIdx;
    newArc->headvex = headIdx;
    newArc->weight = weight;
    
    // 插入到弧尾顶点的出弧链表中（类似邻接表的插入）
    newArc->tlink = G->xlist[tailIdx].firstout;
    G->xlist[tailIdx].firstout = newArc;
    
    // 插入到弧头顶点的入弧链表中（类似逆邻接表的插入）
    newArc->hlink = G->xlist[headIdx].firstin;
    G->xlist[headIdx].firstin = newArc;
    
    G->arcnum++;
}

/**
 * 打印十字链表
 * @param G 图的指针
 */
void printOLGraph(OLGraph *G) {
    printf("图的十字链表表示：\n");
    
    printf("顶点列表：");
    for (int i = 0; i < G->vexnum; i++) {
        printf("%d ", G->xlist[i].data);
    }
    printf("\n\n");
    
    // 打印以每个顶点为弧尾的出弧
    printf("以各顶点为弧尾的弧（类似邻接表）：\n");
    for (int i = 0; i < G->vexnum; i++) {
        printf("顶点%d的出弧: ", G->xlist[i].data);
        
        ArcBox *current = G->xlist[i].firstout;
        while (current != NULL) {
            printf("<%d,%d>(w:%d) ", 
                   G->xlist[current->tailvex].data, 
                   G->xlist[current->headvex].data, 
                   current->weight);
            current = current->tlink;
        }
        printf("\n");
    }
    
    printf("\n");
    
    // 打印以每个顶点为弧头的入弧
    printf("以各顶点为弧头的弧（类似逆邻接表）：\n");
    for (int i = 0; i < G->vexnum; i++) {
        printf("顶点%d的入弧: ", G->xlist[i].data);
        
        ArcBox *current = G->xlist[i].firstin;
        while (current != NULL) {
            printf("<%d,%d>(w:%d) ", 
                   G->xlist[current->tailvex].data, 
                   G->xlist[current->headvex].data, 
                   current->weight);
            current = current->hlink;
        }
        printf("\n");
    }
    
    printf("\n顶点数：%d，弧数：%d\n", G->vexnum, G->arcnum);
}

/**
 * 计算顶点的入度
 * @param G 图的指针
 * @param vertex 顶点值
 * @return 顶点的入度
 */
int getInDegree(OLGraph *G, int vertex) {
    int index = getVertexIndex(G, vertex);
    if (index == -1) {
        return -1;  // 顶点不存在
    }
    
    int degree = 0;
    ArcBox *current = G->xlist[index].firstin;
    while (current != NULL) {
        degree++;
        current = current->hlink;
    }
    
    return degree;
}

/**
 * 计算顶点的出度
 * @param G 图的指针
 * @param vertex 顶点值
 * @return 顶点的出度
 */
int getOutDegree(OLGraph *G, int vertex) {
    int index = getVertexIndex(G, vertex);
    if (index == -1) {
        return -1;  // 顶点不存在
    }
    
    int degree = 0;
    ArcBox *current = G->xlist[index].firstout;
    while (current != NULL) {
        degree++;
        current = current->tlink;
    }
    
    return degree;
}

/**
 * 深度优先搜索遍历（DFS）
 * @param G 图的指针
 * @param v 当前访问的顶点索引
 * @param visited 访问标记数组
 */
void DFS(OLGraph *G, int v, int *visited) {
    // 标记当前顶点为已访问
    visited[v] = 1;
    
    // 访问当前顶点
    printf("%d ", G->xlist[v].data);
    
    // 遍历当前顶点的所有出弧（即邻接顶点）
    ArcBox *current = G->xlist[v].firstout;
    while (current != NULL) {
        int w = current->headvex;  // 弧头是邻接顶点
        if (!visited[w]) {
            DFS(G, w, visited);  // 递归访问下一个顶点
        }
        current = current->tlink;  // 移动到同弧尾的下一条弧
    }
}

/**
 * 深度优先遍历图
 * @param G 图的指针
 */
void DFSTraverse(OLGraph *G) {
    printf("深度优先遍历结果：");
    
    // 初始化访问标记数组
    int *visited = (int*)malloc(G->vexnum * sizeof(int));
    for (int i = 0; i < G->vexnum; i++) {
        visited[i] = 0;  // 0表示未访问
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
 * 查找所有入度为0的顶点
 * @param G 图的指针
 */
void findZeroInDegreeVertices(OLGraph *G) {
    printf("入度为0的顶点：");
    for (int i = 0; i < G->vexnum; i++) {
        if (getInDegree(G, G->xlist[i].data) == 0) {
            printf("%d ", G->xlist[i].data);
        }
    }
    printf("\n");
}

// 主函数演示
int main() {
    OLGraph G;
    
    // 初始化图
    initGraph(&G);
    
    // 添加顶点
    addVertex(&G, 1);
    addVertex(&G, 2);
    addVertex(&G, 3);
    addVertex(&G, 4);
    addVertex(&G, 5);
    
    // 添加弧
    addArc(&G, 1, 2, 1);  // 1->2
    addArc(&G, 1, 3, 1);  // 1->3
    addArc(&G, 2, 4, 1);  // 2->4
    addArc(&G, 3, 4, 1);  // 3->4
    addArc(&G, 4, 5, 1);  // 4->5
    
    // 打印十字链表
    printOLGraph(&G);
    
    // 计算各顶点的入度和出度
    printf("\n各顶点的入度和出度：\n");
    for (int i = 0; i < G.vexnum; i++) {
        int inDegree = getInDegree(&G, G.xlist[i].data);
        int outDegree = getOutDegree(&G, G.xlist[i].data);
        printf("顶点%d: 入度=%d, 出度=%d\n", 
               G.xlist[i].data, inDegree, outDegree);
    }
    
    // 执行深度优先遍历
    printf("\n");
    DFSTraverse(&G);
    
    // 查找入度为0的顶点
    findZeroInDegreeVertices(&G);
    
    return 0;
}