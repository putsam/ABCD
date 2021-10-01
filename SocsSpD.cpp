#include <stdio.h>
#include <stdlib.h>
int main()
{
        int M,N;
        
        printf("Input:\n");
        scanf("%d %d",&N,&M);
        int i;
        printf("\nOutput:\n");
        
        for(i = N; i<(M+N); i++)
        {
            printf("%d\n",i);
        }
}
