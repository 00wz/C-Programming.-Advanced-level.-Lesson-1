#include <stdio.h>
#include<stdint.h>

int main(){
    uint32_t N;
    int K;
    int Max = INT32_MIN;
    uint32_t count = 0;

    scanf("%u", &N);

    for(int i = 0; i < N; i++ )
    {
        scanf("%d", &K);
        if(K > Max)
        {
            count = 1;
            Max = K;
            continue;
        }
        if(K == Max)
        {
            count++;
        }
    }

    printf("%u\n", count);
    return 0;
}