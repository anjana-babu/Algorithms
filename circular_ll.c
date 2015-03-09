#include<stdio.h>
#include<malloc.h>

typedef struct {
	int info;
	struct node* next;
}node;

node* insert(int x, node* first)
{
	node* new=malloc(sizeof(node));
	new->info=x;
   printf("hi");
	if(first==NULL)
	{
		
		new->next=new;
		first=new;
	}
	else
	{
		new->next=first->next;
	}
   //first->next=new;
	//printf("\n%d %x\n",new->info,new->next);
	return(new);
}

node* insend(int x, node* first)
{
	node* new=malloc(sizeof(node));
	new->info=x;
   new->next=first;
	if(first==NULL)
	{
		return(&new);
	}
	node* save=first;
	while(save->next!=first)
	{
		save=save->next;
	}
	save->next=new;
   return(first);
}



void display_ll(node* first)
{
	if(first==NULL)
	{
		printf("Empty linked list\n");
		return;
	}
	node* save=first;
	printf("\n< - %d - ",save->info);
	while(save->next!=first)
	{
		save=save->next;
		printf("%d - ",save->info);
	}
	printf(">");
}

int detectloop(node *first)
{
	node  *slow_p = first, *fast_p = first;

  	while(slow_p && fast_p && fast_p->next )
  	{
    	slow_p = slow_p->next;
    	fast_p  = fast_p->next->next;
    	if (slow_p == fast_p)
    	{
       	printf("Found Loop");
       	return 1;
    	}
  	}
  	return 0;
}


int main()
{
	node* first=NULL;
	display_ll(first);
   printf("1");
	first=insert(2,first);
	//printf("%d\n",(*first).info);
	display_ll(first);
	first=insert(6,first);
	//printf("%d\n",(*first).info);
	//display_ll(first);
	first=insend(10,first);
	//display_ll(first);	
	return 0;
}

