#include<stdio.h>
#include<stdlib.h>

typedef struct node
{ 
    int key;
    struct node* p;
    struct node* l;
    struct node* r;
}node;

void tree_insert(node* tree,node z)
{
    node y;
    node x;
    
    x=*tree;
    while(x!=NULL)
    {
         y=x;
         if(x.key<z.key)
         {
             x=*(x.l);
         }
         else
         {
             x=*(x.r);
         }    
    }
}

int main()
{
    int choice;
    node *tree;
    node z;
    do{
          printf("\n 1. Insert");
          printf("\n 2. Delete");
          printf("\n 3. Successor");
          printf("\n 4. Predecessor");
          printf("\n 5. Query");
          printf("\n 6. Inorder tree display");
          printf("\n 7. Exit");
          
          printf("\n\nEnter your choice");
          scanf("%d",&choice);
    }while(choice==7);
    
    switch(choice)
    {
          case 1: 
                  //z=(node*)malloc(sizeof(node));
                  printf("\n Enter the value to be inserted: ");
                  scanf("%d",&z.key);
                  tree_insert(tree,z);
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          default: break;
    }
    system("PAUSE");
    return 0;
}
