#include <stdio.h>

int main()
{
    int nAge = 0;
    printf("나이를 입력하세요: ");
    scanf("%d", &nAge);

    fflush(stdin);

    char szName[12] = {0};
    printf("이름을 입력하세요: ");
    fgets(szName, sizeof(szName), stdin);

    printf("당신의 나이는 %d, 이름은 %s 입니다.", nAge, szName);
    return 0;
}