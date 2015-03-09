#include<stdio.h>
int heapsize=9;

int parent(int i)
{
	return i/2;
}

int left(int i)
{
	return 2*i;
}

int right(int i)
{
	return 2*i+1;
}

void max_heapify(int A[],int i)
{
	int largest, temp;
	int l=left(i);
	int r=right(i);
	if(l<=heapsize && A[l]>A[i])
	{
		largest=l;
	}
	else
	{
		largest=i;
	}
	if(r<=heapsize && A[r]>A[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		temp=A[i];
		A[i]=A[largest];
		A[largest]=temp;
		max_heapify(A,largest);
	}
}

void build_max_heap(int A[])
{
	int i;
	for(i=heapsize/2;i>=1;i--)
	{
		max_heapify(A,i);
	}
}

void heapsort(int A[])
{
	int temp,i;
	build_max_heap(A);
	for(i=heapsize;i>=2;i--)
	{
		temp=A[i];
		A[i]=A[1];
		A[1]=temp;
		heapsize--;
		max_heapify(A,1);
	}
}


int main()
{
	int A[]={0,71,52,83,66,12,99,34,54,67};
	int i;
	heapsort(A);
	for(i=1;i<9;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
