#include <stdio.h>
#include<stdint.h>

int main(){
    uint32_t N;
    uint32_t temp;
    uint32_t res = 0;

    scanf("%u", &N);

    for(int i = 0; i < N; i++ )
    {
        scanf("%u", &temp);
        res ^= temp;
    }

    printf("%u\n", res);
    return 0;
}