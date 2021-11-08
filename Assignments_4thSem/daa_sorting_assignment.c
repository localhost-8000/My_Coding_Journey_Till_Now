// Program by - Rahul Tiwari, 19UCS125
// 2 :- Write a program to implement Selection Sort.

#include<stdio.h>
#include<stdlib.h>

void Selection_Sort(int arr[],int n){
    int temp,last=n-1;
    for(int i=0;i<n-1;i++){
        int max=0;
        for(int j=1;j<n-i;j++){
            if(arr[j]>arr[max]){
                max=j;
            }
        }
        temp=arr[last];
        arr[last]=arr[max];
        arr[max]=temp;
        last--;
    }
}

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    Selection_Sort(arr, n);
    printf("Sorted array is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
