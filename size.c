#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **x;

    printf("----------[2016039030] [하준형]-------------\n\n");

    printf("sizeof(x) = %lu\n", sizeof(x)); //주솟값을 담는 크기인 8 bytes 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //위와 동일
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //int크기의 4 bytes 출력
}
