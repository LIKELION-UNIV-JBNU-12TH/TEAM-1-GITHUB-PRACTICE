import java.util.Scanner;

public class AddNumbers {
    public static void main(String[] args) {
        // Scanner 객체 생성
        Scanner scanner = new Scanner(System.in);
        
        // 사용자로부터 숫자 입력 받기
        System.out.print("첫 번째 숫자를 입력하세요: ");
        double num1 = scanner.nextDouble();
        
        System.out.print("두 번째 숫자를 입력하세요: ");
        double num2 = scanner.nextDouble();

       // === 수정한 부분 ===
        System.out.print("세 번째 숫자를 입력하세요: ");
        double num3 = scanner.nextDouble();
        
        // 세 숫자를 더하고 결과 출력
        double result = num1 + num2 + num3;
        System.out.println("세 숫자의 합은: " + result);
        
        // Scanner 닫기
        scanner.close();
    }
}
