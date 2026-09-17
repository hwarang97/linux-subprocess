#include <stdio.h>
#include <unistd.h>

int main() {
    printf("현재 프로세스의 id: %d\n", getpid());
    printf("현재 프로세스의 부모 id: %d\n", getppid());
    
    return 0;
}
