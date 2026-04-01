#include <stdio.h>

void my_print(char type, void* x) {
    
   if(type == 'C') {
        char *cp = (char*)x;
        printf("%c\n", *cp);
    } else if(type == 'D') {
        int *ip = (int*)x;
        printf("%d\n", *ip);
    } else if(type == 'S'){
        char *sp = (char*)x;
        printf("%s\n", sp);
    }
}
int main() {
    int a = 0x61;
    char b = 'b';
    char* c = "Hello, World!";

    my_print('C', &a);
    my_print('D', &b);
    my_print('S', c);
    my_print('C', c);

    return 0;
}
