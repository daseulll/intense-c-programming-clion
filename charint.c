#include <stdio.h>

int main(void)
{
    // ASCII 형식으로 출력
    printf("%c\n", 'A');
    printf("%c\n", 'A' + 1);
    printf("%c\n", 65);
    printf("%c\n", 66);

    // 부호가 있는 10진수 정수형으로 출력
    printf("%d\n", 'A');
    printf("%d\n", 'A' + 1);
    printf("%d\n", 'B');

    // 결과적으로 char형과 int형은 부호가 있는 정수형이라는 점에서 본질적으로 같지만, char형은 1바이트, int형은 4바이트의 크기를 가진다는 점에서 다르다.
    // 'A' + 1의 경우 type promotion에 의해 int형으로 변환된다. type promotion은 더 큰 크기를 가진 자료형을 따라간다.
}