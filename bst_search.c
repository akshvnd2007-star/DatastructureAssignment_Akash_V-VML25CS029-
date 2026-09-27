#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node* createNode(int key)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* insert(struct node *root, int key)
{
    if (root == NULL)
        return createNode(key);

    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);

    return root;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}

int bstSearch(struct node *root, int key, int *comparisons)
{
    while (root != NULL)
    {
        (*comparisons)++;

        if (key == root->key)
            return 1;
        else if (key < root->key)
            root = root->left;
        else
            root = root->right;
    }

    return 0;
}

int linearSearch(int arr[], int n, int key, int *comparisons)
{
    int i;

    for (i = 0; i < n; i++)
    {
        (*comparisons)++;

        if (arr[i] == key)
            return 1;
    }

    return 0;
}

int main()
{
    int isbn[] = {45, 20, 60, 10, 30, 50, 70, 25, 55};
    int n = 9;

    int searchKeys[] = {25, 55, 90};
    int i;

    struct node *root = NULL;
    for (i = 0; i < n; i++)
    {
        root = insert(root, isbn[i]);
    }
    printf("INORDER TRAVERSAL:\n");
    inorder(root);

    printf("\n\nPREORDER TRAVERSAL:\n");
    preorder(root);

    printf("\n\nPOSTORDER TRAVERSAL:\n");
    postorder(root);
    printf("\n\nSEARCH COMPARISON:\n");
    printf("Key\tBST Comparisons\tLinear Comparisons\n");

    for (i = 0; i < 3; i++)
    {
        int bstComparisons = 0;
        int linearComparisons = 0;

        bstSearch(root, searchKeys[i], &bstComparisons);
        linearSearch(isbn, n, searchKeys[i], &linearComparisons);

        printf("%d\t%d\t\t%d\n",
               searchKeys[i],
               bstComparisons,
               linearComparisons);
    }

    return 0;
}
