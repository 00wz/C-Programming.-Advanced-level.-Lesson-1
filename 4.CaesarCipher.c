#include<stdint.h>
#include <stdio.h>

int main()
{
    uint32_t N;
    scanf("%u", &N);

    int K = 'Z' - 'A' + 1;

    char tmp = getchar();
    while(tmp != '.')
    {
        if(tmp>='A' && tmp<='Z')
        {
            int n = tmp - 'A';
            int p = (n + N) % K;
            tmp = 'A' + p;
        }
        if(tmp>='a' && tmp<='z')
        {
            int n = tmp - 'a';
            int p = (n + N) % K;
            tmp = 'a' + p;
        }
        printf("%c", tmp);
        tmp = getchar();
    }
    printf("%c\n", tmp);

}