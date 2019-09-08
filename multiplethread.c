#include<pthread.h>
#include<stdio.h>
#include<string.h>
void *procedure(void *args);
int main()
{
	pthread_t id[10];
	for(int i=0;i<10;i++)
	{
	pthread_create(&id[i],NULL,procedure,&i);
	pthread_join(id[i],NULL);
	}
}
void *procedure(void *args)
{
	int *p;
         p=*(int *)(args);
	printf("%d\n",p);
}



