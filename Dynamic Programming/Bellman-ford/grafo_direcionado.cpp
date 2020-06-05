#include <iostream>
#include <vector>

using namespace std;

struct Edge{
    int src, dest, weight;
};
struct Graph{
  int V,E;
  struct Edge* edge;
};
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
};

int main(){
    //inicializando
    int V = 5;
    int E = 8;
    struct Graph* graph = createGraph(V, E);
//muito interessante essa maneira de criação
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = -1;



return 0;
}
