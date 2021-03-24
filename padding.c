#include <stdio.h>

struct student {
    char lastName[13];  /* 13 bytes */
    int studentId;      /* 4 bytes */
    short grade;        /* 2 bytes */
};

int main()
{
    struct student pst;

    printf("----------[2016039030] [하준형]-------------\n\n");

    printf("size of student = %ld\n", sizeof(struct student)); //구조체 student 크기 출력 (padding 13->16, 4->4, 2->4 => 24bytes)
    printf("size of int = %ld\n", sizeof(int)); //int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기 출력

    return 0;
}
