#include <stdio.h>

int main() {
    double num1, num2, result;
    
    // 사용자로부터 숫자 입력 받기
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%lf", &num1);
    
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%lf", &num2);
    
    // 두 숫자를 더하고 결과 출력
    result = num1 + num2;
    printf("두 숫자의 합은: %lf\n", result);

    printf("두 숫자의 차는 : %lf\n", num1 - num2);
    
    return 0;
}
