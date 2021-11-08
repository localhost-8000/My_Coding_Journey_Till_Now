#include <stdio.h>
int max(int a, int b) {
    if(a>b)
       return a;
    else
       return b;
}

int main()
{
    int n, profit[50],wt[50],W,i;
    printf("Enter number of weights: ");
    scanf("%d",&n);
    printf("Enter weights:");
    for(i=0;i<n;i++){
        scanf("%d",&wt[i]);
    }
    printf("Enter profits:");
    for(i=0;i<n;i++){
        scanf("%d",&profit[i]);
    }
    printf("Enter weight limit(W): ");
    scanf("%d",&W);
    int  w;
    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(profit[i - 1] +
                    K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    int binary[10]={0};
    int res = K[n][W];
    printf("Max profit=%d\n",res);
    printf("Weights selected are:- ");
    w = W;i=n;
    while ( i > 0 && res > 0) {
        if (res == K[i - 1][w])
            continue;
        else {
            printf("%d ", wt[i - 1]);
            binary[i-1]=1;
            res = res - profit[i - 1];
            w = w - wt[i - 1];
        }
        i--;
    }
   printf("\nBinary set :- ");
    for(i=0;i<n;i++){
        printf("%d ",binary[i]);
    }
    return 0;
}
