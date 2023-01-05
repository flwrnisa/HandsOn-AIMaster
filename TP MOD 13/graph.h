#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

#define info(p) (p->info)
#define next(p) (p->next)
#define child(p) (p->child)

typedef struct ElmNode *adrNode;
typedef struct ElmEdge *adrEdge;

struct ElmNode{
    char info;
    adrEdge child;
    adrNode next;
};

struct ElmEdge{
    adrNode info;
    adrEdge next;
};

adrNode newNode_1301213070(char x);
adrEdge newEdge_1301213070(adrNode P);
void addNode_1301213070(adrNode &G, adrNode P);
adrNode findNode_1301213070(adrNode G, char x);
void addEdge_1301213070(adrNode &G, char x, char y);
bool isConnected_1301213070(adrNode G, char x, char y);
void printGraph_1301213070(adrNode G);

#endif // GRAPH_H_INCLUDED
