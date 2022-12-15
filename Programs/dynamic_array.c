#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int* create_array(int size)
{
  int *a = (int *) malloc(size*sizeof(int));
  return a;
}


int main()
{
    clock_t t;
    t=clock();
    int m_s_a=5,s=0;
    int *a=create_array(m_s_a);
    for(int i=0;i<10;i++){
      if(s<m_s_a)
      {
        a[i]=i;
        s++;
      }
      else{
        m_s_a *= 2;
        int *b=create_array(m_s_a);
        for(int j=0; j<s; j++)
        {
          b[j]=a[j];
        }
        free(a);
        a=b;
        a[i]=i;
        s++;
      }
    }
    for(int i=0;i<s;i++)
    {
      printf("%d ",a[i]);
    }
    t=clock()-t;
    printf("\n%f", ((double)t)/CLOCKS_PER_SEC);
    return 0;
}
