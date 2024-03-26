#include <stdio.h>
#include<stdint.h>

int main()
{
    uint32_t N;
    scanf("%u", &N);

    int32_t mask = INT32_MIN >> 7;
    uint32_t res = mask ^ N;
    printf("%u\n",res);
    
    return 0;
}