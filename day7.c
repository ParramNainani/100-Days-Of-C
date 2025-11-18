#include<stdio.h>
#include<stdlib.h>
// void addEdge(int matrix[5][5],int u,int v){
//     matrix[u][v] = 1;
//     matrix[v][u] = 1;
// }
// int main(){
//     int matrix[5][5];
//     for (int i = 0; i < 5;i++){
//         for (int j = 0; j < 5;j++){
//             matrix[i][j] = 0;
//         }
//     }

//     addEdge(matrix, 0, 1);
//     addEdge(matrix, 0, 4);
//     addEdge(matrix, 1, 2);
//     addEdge(matrix, 1, 3);
//     addEdge(matrix, 1, 4);
//     addEdge(matrix, 2, 3);
//     addEdge(matrix, 3, 4);

//     for (int i = 0; i < 5;i++){
//         for (int j = 0; j < 5;j++){
//             printf("%d |", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }


struct Node{
    int data;
    struct Node *next;
};
struct Graph{
    int V;
    struct Node **adjlist;
};

struct Graph* createGraph(int v){
    struct Graph *g;
    g = (struct Graph *)malloc(sizeof(struct Graph));
    if(g==NULL){
        printf("Allocation Failed!");
        return NULL;
    }
    g->V = v;
    g->adjlist = malloc(v * sizeof(struct Node *));
    if(g->adjlist==NULL){
        printf("Allocation Failed!");
        return NULL;
    }
    for (int i = 0; i < v;i++){
        g->adjlist[i] = NULL;
    }
    return g;
};

int main(){
    struct Graph *graph;
    graph = createGraph(5);
    printf("Number of Vertices: %d\n", graph->V);
    if(graph->adjlist[0]==NULL){
        printf("Checked !!");
    }

}
