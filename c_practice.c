#include <stdio.h>

int main() {
    double num1, num2, result;
    
    // 사용자로부터 숫자 입력 받기
    printf("1");
    scanf("%lf", &num1);
    
    printf("2");
    scanf("%lf", &num2);
    
    // 두 숫자를 더하고 결과 출력
    result = num1 + num2;
    printf("두 숫자의 합은: %lf\n", result);
    
    return 0;
}
