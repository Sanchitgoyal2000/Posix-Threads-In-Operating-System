#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<string.h>
void *procedure(void *args);
int procedure1(int n);
int main(int args,char *argv[])
{
 pthread_t id[10];
int b=10;
for(int i=0;i<10;i++)
{
    pthread_create(&id[i],NULL,procedure,&i);
    pthread_join(id[i],NULL);
}
}
int procedure1(int n)
{
 if(n==0)
{
  return n;
}
if(n==1)
{
  return n;
}
return procedure1(n-2)+procedure1(n-1);  
}
void *procedure(void *args)
{
  int n=*(int *)args;
   printf("%d\n",procedure1(n));
}




