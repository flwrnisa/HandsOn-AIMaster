#include "graph.h"

adrNode newNode_1301213070(char x)
{
    adrNode p = new ElmNode;
    info(p) = x;
    child(p) = NULL;
    next(p) = NULL;
    return p;
}
adrEdge newEdge_1301213070(adrNode P)
{
    adrEdge p = new ElmEdge;
    info(p) = P;
    next(p) = NULL;
    return p;
}
void addNode_1301213070(adrNode &G, adrNode P)
{
    if(G == NULL){
        G = P;
    }
    else{
        adrNode Q = G;
        while(next(Q)!= NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}
adrNode findNode_1301213070(adrNode G, char x)
{
    adrNode P = G;
    while(P != NULL){
        if(info(P) == x){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
void addEdge_1301213070(adrNode &G, char x, char y)
{
    if(G != NULL){
        adrNode P = findNode_1301213070(G,x);
        adrNode Q = findNode_1301213070(G,y);
        if(P != NULL && Q != NULL){
            adrEdge p = newEdge_1301213070(P);
            adrEdge q = newEdge_1301213070(Q);
            if(child(Q)!= NULL){
                next(p) = child(Q);
                child(Q) = p;
            }
            else{
                child(Q) = p;
            }
            if(child(P)!= NULL){
                next(q) = child(P);
                child(P) = q;
            }
            else{
                child(P) = q;
            }
        }
        else{
            cout<<"Node tidak ditemukan"<<endl;
        }
    }
    else{
        cout<<"Graph kosong"<<endl;
    }
}
bool isConnected_1301213070(adrNode G, char x, char y)
{
    adrNode P = findNode_1301213070(G,x);
    adrNode Q = findNode_1301213070(G,y);
    adrEdge p = child(P);
    while(p != NULL){
        if(info(p) == Q){
            return true;
        }
        p = next(p);
    }
    return false;
}
void printGraph_1301213070(adrNode G)
{
    if(G != NULL){
        adrNode P = G;
        adrEdge p;
        while(P != NULL){
            cout<<"node "<<info(P)<<":";
            if(child(P)!=NULL){
                p = child(P);
                while(p != NULL){
                    cout<<" - "<<info(info(p));
                    p = next(p);
                }
            }
            cout<<endl;
            P = next(P);
        }
    }
    else{
        cout<<"Graph kosong"<<endl;
    }
}
