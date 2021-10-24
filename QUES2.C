#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void insertion_sort(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    int count=a[i];
    int j=i-1;
    while(count<a[j] && j>=0)
    {
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=count;
  }
}
int main()
{
  int n,ch;
  scanf("%d",&n);
  int a[n];
  printf("Enter 1 for best case\n 2 for average case : \n3 for worst case");
  scanf("%d",&ch );
  switch(ch)
  {
    case 1 : for(int i=0;i<n;i++)
             {
               a[i]=i;
             }
             break;
    case 2 : for(int i=0;i<n;i++)
            {
              a[i]=rand();
            }
    case 3:  for(int i=0;i<n;i++)
            {
             a[i]=n-i
            }  
  }

  clock_t start,end;
  long int t;
  start=clock();
  insertion_sort(a,n);
  end=clock();
  t=end-start;
  printf("Total time elapsed for insertion sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
}
