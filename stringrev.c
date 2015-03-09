// This is the text editor interface. 
// Anything you type or change here will be seen by the other person in real time.
#include<stdio.h>
#include<malloc.h>
#include<string.h


void strrev(char []);
int main()
{
    char s[1000];
    //char *s2;
    
    scanf("%[^\n]",s);
    strrev(s);
    printf("%s",s);
        return 0;
}

void strrev(char s[1000])
{
    char temp;
    int i,j;
    for(i=0;s[i]!='\0';i++);
    
  //  s1=malloc(i+1);
    for(j=i-1;j>=(i-1)/2;j--)
    {
        temp=s[i-j-1];
        s[i-j-1]=s[j];
        s[j]=temp;
        
    }
    
   //   return  s1;
}
