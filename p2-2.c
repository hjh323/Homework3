#include <stdio.h>

void print1 (int *ptr, int rows); //출력 함수

int main()
{
    int one[] = {0, 1, 2, 3, 4};

    printf("----------[2016039030] [하준형]-------------\n\n");

    printf("one     = %p\n", one);      //one의 주솟값
    printf("&one    = %p\n", &one);     //동일
    printf("&one[0] = %p\n", &one[0]);  //동일(offset)

    print1(&one[0], 5);

    return 0;
}

void print1(int *ptr, int rows)
{
    int i;

    printf("\nAddress \t Contents\n");

    for (i = 0; i < rows; i++)
        printf("%p \t  %5d\n", ptr + i, *(ptr + i)); //one[rows]의 주소값, 그 주소가 가리키는 값(one[rows]) 출력

    printf("\n");
}
