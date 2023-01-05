#include"Tree.h"

adrNode newNode_1301213070(infotype x){
    adrNode p = new ElmNode;
    info(p) = x;
    left(p) = NULL;
    right(p) = NULL;

    return p;
}

adrNode findNode_1301213070(adrNode root, int x){
    adrNode p = root;
    if(p == NULL || (info(p) == x)){
        return p;
    }else{
        if (info(p) < x){
            return findNode_1301213070(right(root), x);
        }else{
            return findNode_1301213070(left(root), x);
        }
    }
}

void insertNode_1301213070(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else{
         if(info(p) < info(root)){
            insertNode_1301213070(left(root), p);
        }else{
            insertNode_1301213070(right(root), p);
        }
    }
}

void printPreOrder_1301213070(adrNode root){
    if(root != NULL){
        cout << info(root) << " ";
        printPreOrder_1301213070(left(root));
        printPreOrder_1301213070(right(root));
    }
}

void printDescendant_1301213070(adrNode root, infotype x){
    if(root != NULL){
        adrNode p = findNode_1301213070(root, x);
        printPreOrder_1301213070(left(p));
        printPreOrder_1301213070(right(p));
    }
}

int sumNode_1301213070(adrNode root){
    if(root == NULL){
        return 0;
    }
    return (info(root) + sumNode_1301213070(left(root)) + sumNode_1301213070(right(root)));
}

int countLeaves_1301213070(adrNode root){
    if(root == NULL){
        return 0;
    }
    if(right(root) == NULL && left(root) == NULL){
        return 1;
    }else{
        return countLeaves_1301213070(left(root))+ countLeaves_1301213070(right(root));
    }
}

int heightTree_1301213070(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        int rightH = heightTree_1301213070(right(root));
        int leftH = heightTree_1301213070(left(root));

        if(rightH > leftH){
            return rightH + 1;
        }else{
            return leftH + 1;
        }
    }
}
