// 스크래치에서 C언어로 전환하여 구현한 유클리드 호제법
// f(a, b) = gcd(a, b) = gcd(b, a mod b)
// 이때, a mod b = 0 이면, gcd(a, b) = b
// 이때, a mod b != 0 이면, gcd(a, b) = gcd(b, a mod b)
#include <stdio.h> // standard input/output 헤더파일

// 두 수를 입력받아 최대공약수를 구하는 함수

int main() {

    int a = 0, b = 0; // 두 수를 입력받을 변수

    int max = 0, min = 0; // 최대공약수를 구하기 위해 큰 수와 작은 수를 구분할 변수

    printf("첫 번째 정수를 입력하세요: \n");
    scanf("%d", &a); // 첫 번째 정수 변수 a에 저장

    printf("두 번째 정수를 입력하세요: \n");
    scanf("%d", &b); // 두 번째 정수 변수 b에 저장

    if (a > b) { // a가 b보다 크면
        max = a; // max에 a를 저장
        min = b; // min에 b를 저장
    }
    else { // a가 b보다 작으면
        max = b; // max에 b를 저장
        min = a; // min에 a를 저장
    }

    while (1) { // 무한루프
        int remainder = max % min; // max를 min으로 모듈러 연산한 나머지를 저장
        if (remainder == 0) { // 나머지가 0이면
            printf("최대공약수는 %d입니다.", min); // 최대공약수는 min이므로 min 출력
            break; // 무한루프 탈출
        }
        else { // 나머지가 0이 아니면
            max = min; // max에 min을 저장
            min = remainder; // min에 나머지를 저장
       }
    }
    
    return 0;
}
