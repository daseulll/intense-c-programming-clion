#include <stdio.h>

int main(void)
{
    char szName[32] = { 0 };

    printf("이름을 입력하세요: ");
//    gets(szName); // has security flaw
    fgets(szName, sizeof(szName), stdin);

    printf("당신의 이름은: ");
    puts(szName);
    puts("입니다.");
    return 0;
}