#include<stdio.h>
#include<stdlib.h>

int max(int a, int b);
int rod_cut(int p[],int n);
int main()
{
    int revenue,n,i,p[100]={0,1,5,8,9,10,17,17,20,24,30,31,32,33,34,35,35,36,37,38,39,39,39,39,40,50,50,51,52,53,54,55,56,57,58,59,60,60,60,60,70,70,70,70,70};
    
    printf("\n Enter n: ");
    scanf("%d",&n);
    revenue=rod_cut(p,n);
    printf("Revenue = %d",revenue);
    system("PAUSE");
    return 0;
}
int rod_cut(int p[],int n)
{
    int i,q;
    if(n==0)
        return 0;
    q=-9;
    for(i=1;i<=n;i++)
    {
          q=max(q,p[i]+rod_cut(p,n-i));
    }
    return q;
}





int max(int a, int b) {
  return a > b ? a : b;
}
