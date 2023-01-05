#include "graph.h"

int main()
{
    adrNode A = newNode_1301213070('A');
    adrNode B = newNode_1301213070('B');
    adrNode C = newNode_1301213070('C');
    adrNode D = newNode_1301213070('D');

    addNode_1301213070(A,B);
    addNode_1301213070(A,C);
    addNode_1301213070(A,D);

    addEdge_1301213070(A,'B','D');
    addEdge_1301213070(A,'A','B');
    addEdge_1301213070(A,'A','D');
    addEdge_1301213070(A,'A','C');

    printGraph_1301213070(A);
    return 0;
}
