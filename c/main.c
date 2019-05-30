// cd c; gcc -c -fPIC main.c -o main.o
// cd c; gcc main.o -shared -o main.so
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *myThread(void *vargp)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
        sleep(0.3);
    }
    printf("Thread finished\n");
    return NULL;
}

void runMyThreads()
{
    pthread_t thread_id1, thread_id2;
    pthread_create(&thread_id1, NULL, myThread, NULL);
    pthread_create(&thread_id2, NULL, myThread, NULL);
    pthread_join(thread_id1, NULL);
    pthread_join(thread_id2, NULL);
}

void sayHello()
{
    puts("Hello");
}

int main()
{
    return 0;
}
