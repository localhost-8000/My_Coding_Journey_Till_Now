// Program by - Rahul Tiwari, 19UCS125
// 1.b :- Write a program to implement Queue.

#include<stdio.h>
#include<stdlib.h>
#define max 50

int arr[max];
int head=-1,tail=-1;

void enqueue(int data){
    if(head==max-1){
        printf("Queue is full.Sorry!!\n");
        return;
    }
    if(head==-1&&tail==-1){
        arr[++tail]=data;
        ++head;
        return;
    }
    arr[++head]=data;
}

void dequeue(){
    if(head==-1&&tail==-1){
        printf("Sorry..nothing to dequeue\n");
        return;
    }
    if(head==tail){
        head=-1;
        tail=-1;
        return;
    }
    printf("Front element is removed....\n");
    ++tail;
}

void show(){
    if(head==-1&&tail==-1){
        printf("The Queue is empty..\n");
        return;
    }
    printf("The Queue is: ");
    for(int i = tail; i <= head; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void enqueue(int);
void dequeue();
void show();

int main(){
    show();
    enqueue(19);
    enqueue(12);
    enqueue(37);
    enqueue(44);
    enqueue(15);
    show();
    dequeue();
    dequeue();
    show();
    enqueue(12);
    enqueue(37);
    show();
    return 0;
}
