#include<pthread.h>
#include<stdio.h>
#include<string.h>
void *procedure(void *args);
int main()
{
	pthread_t thread1;
	pthread_t thread2;
	char *str="Hello";
	char *str1="hii";
	pthread_create(&thread1,NULL,procedure,str);
	pthread_create(&thread2,NULL,procedure,str1);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
}
void *procedure(void *args)
{
 	char *str=(char *)(args);
	for(int i=0;i<4;i++)
  	 printf("%c\n",str[i]);
}


