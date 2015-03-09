#include <stdio.h>
#include <stdlib.h>

int heapsize=0;

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
    return (2*i)+1;
}

void max_heapify(int A[],int i)
{
     int l = left(i);
     int r = right(i);
     int largest;
     
     if(l <= heapsize && A[l]>A[i])
     {
          largest = l;
     }
     else
     {
         largest = i;
     }
     
     if(r <= heapsize && A[r]>A[largest])
     {
          largest = r;
     }
     
     if(largest != i)
     {
          A[largest] = A[largest] + A[i];
          A[i] = A[largest] - A[i];
          A[largest] = A[largest] - A[i];
          
          max_heapify(A, largest);
     }
      
}

void build_max_heap(int A[])
{
     int i;
     for(i=heapsize/2;i>0;i--)
     {
           max_heapify(A,i);
     }
     
}

void heapsort(int A[])
{
     int i, length;

     build_max_heap(A);
     length=heapsize;
     for(i=length;i>1;i--)
     {
          A[1]=A[1]+A[i];
          A[i]=A[1]-A[i];
          A[1]=A[1]-A[i];
          
          heapsize--;
          
          max_heapify(A,1);
     }
     
     printf("\n HEAP SORT \n");
     for(i=1;i<=length;i++)
     {
          printf("%d\t",A[i]);
     }                     
}

int main(int argc, char *argv[])
{
  int A[100]={0,4,1,3,2,16,9,10,14,8,7};
  heapsize = 10;
  heapsort(A);
    
  system("PAUSE");	
  return 0;
}
