#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    struct student1 st1 = {'A', 100, 'A'}; //typedef를 쓰지않아 struct를 써야함

    printf("----------[2016039030] [하준형]-------------\n\n");
    printf("st1.lastName = %c\n", st1.lastName); //A 출력
    printf("st1.studentId = %d\n", st1.studentId); //100 출력
    printf("st1.grade = %c\n", st1.grade); //A 출력

    student2 st2 = {'B', 200, 'B'};
    printf("\nst2.lastName = %c\n", st2.lastName); //B 출력
    printf("st2.studentId = %d\n", st2.studentId); //200 출력
    printf("st2.grade = %c\n", st2.grade); //B 출력

    student2 st3; //구조체 st3 선언
    st3 = st2; //구조 치환
    printf("\nst3.lastName = %c\n", st3.lastName); //B 출력
    printf("st3.studentId = %d\n", st3.studentId); //200 출력
    printf("st3.grade = %c\n", st3.grade); //B 출력

    /* equality test 
    if(st3 == st2) //구조체는 비교 불가 (구성 하나하나를 비교해야함)
        printf("equal\n"); else printf("not equal\n");*/
   return 0;
}
