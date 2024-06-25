#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
//graph
struct Graph {
    int numVertices;
    struct Node **adjList;
};
struct Graph *createGraph(int vertices){
    struct Graph *graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
    graph->adjList = malloc(vertices * sizeof(struct Node*));
    for(int i=0; i<vertices; i++){
        graph->adjList[i] = NULL;
    }
    return graph;
};
struct Node *createNode(int data){
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};
void addEdges(struct Graph *graph, int source, int destination){
    struct Node *newNode = createNode(source);
    newNode->next = graph->adjList[destination];
    graph->adjList[destination] = newNode;   //acts as head
    
    newNode = createNode(destination);
    newNode->next = graph->adjList[source];
    graph->adjList[source] = newNode;       //acts as head
}
void printGraph(struct Graph *graph){
    for(int i=0; i<graph->numVertices; i++){
        struct Node *temp = graph->adjList[i];
        printf("The adjacency list of vertex %d\n", i);
        while(temp){
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
void DFS(struct Graph *graph, int src, int visited[]){
    visited[src] = 1;
    printf("%d ", src);
    //take the connected with source and all possibilities
    struct Node *temp = graph->adjList[src];
    while(temp){
        if(!visited[temp->data]){
            return DFS(graph, temp->data, visited);
        }
        temp = temp->next;
    }
}

int main(){
    int numVertices;
    scanf("%d",&numVertices);
    struct Graph *graph = createGraph(numVertices);
    int numEdges;
    scanf("%d",&numEdges);
    for(int i=0; i<numEdges; i++){
        int u, v;
        scanf("%d %d",&u, &v);
        addEdges(graph, u, v);
    }
    //printGraph(graph);
    int visited[numVertices+1];
    for(int i=0; i<numVertices+1; i++){
        visited[i] = 0;
    }
    DFS(graph, 1, visited);
}