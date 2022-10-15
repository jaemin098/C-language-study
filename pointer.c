#include <stdio.h>

int main(){
    
    int a = 1000;
    int *p; // 변수 p를 포인터 변수로 선언
    p = &a; // 포인터 변수 p에 변수 a의 주소(&a)를 대입함
    
    printf("%p\n", &p); // 변수 p의 메모리 주소 (%p로 16진수로 출력함)
    
    printf("%p\n", p); // 변수 p의 값 (&a; a의 메모리 주소)
    
    printf("%p\n", &a); // 변수 a의 메모리 주소
    
    printf("%d", *p); // &a에 있는 값 (%d로 10진수로 출력)
    
    return 0;
}
