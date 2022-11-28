typedef int ElemType;

typedef struct AVLNode{
    ElemType ElemType;
    struct AVLNode *Left;
    struct AVLNode *Right;
    int height;
}AVLNode,*AVLTree,*Position;

AVLTree MakeEmpty(AVLTree T);
Position Find(ElemType X, AVLTree T);
Position FindMin(AVLTree T);
Position FindMax(AVLTree T);
AVLTree Insert(ElemType X, AVLTree T);
AVLTree Delete(ElemType X, AVLTree T);