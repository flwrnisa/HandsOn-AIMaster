#include"Tree.h"

using namespace std;

int main()
{
    cout << "====================================================" << endl;
    //Tampilkan isi dari array
    int x[9] = {5,3,9,10,4,7,1,8,6};
    for(int i = 0; i < 9; i++){
        cout<<x[i]<<" ";
    }

    //Tambah Elemen ke Tree
    adrNode p = newNode_1301213070(x[0]);
    adrNode q;
    for(int i = 1; i < 9; i++){
        q = newNode_1301213070(x[i]);
        insertNode_1301213070(p,q);
    }

    printf("\n");
    printf("\nPre Order\t\t: ");
    printPreOrder_1301213070(p);

    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant_1301213070(p, 9);

    printf("\n");
    printf("\nSum of BST Info\t\t: ");
    cout << sumNode_1301213070(p);

    printf("\nNumber of Leaves\t: ");
    cout << countLeaves_1301213070(p);

    printf("\nHeight of Tree\t\t: ");
    cout << heightTree_1301213070(p) << endl;

    cout << "====================================================" << endl;
    return 0;
}
