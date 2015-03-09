#include<stdio.h>
#include<conio.h>

double probability(int n, int d);

int main()
{
    int n, d;
    double p;
    
    printf("\nEnter the no of people in the room : ");
    scanf("%d",&n);
    
    printf("\nEnter the no of days : ");
    scanf("%d",&d);
    
    p = probability(n,d);
    printf("\nProbability of any 2 people sharing a common birthday is %lf, i.e., %.2lf%%\n\n", p, p * 100.0);
    
    system("PAUSE");
    return 0;
}

double probability(int n, int d)
{
     double p=1;
     int i;
     
     for(i = d;i > d-n;i--)
     {
           p *= (double)i/(double)d;
     }
     p = 1.0 - p;
     
     return p;
}
