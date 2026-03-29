#include <stdio.h>

void my_print(char type, void* x) {
    
    if(type == 'C'){
        char *cx = (char *)x;
        printf("%c\n", *cx);
    }
    else if(type == 'D'){
        int *nx = (int *)x;
        printf("%d\n", *nx);
    }
    else if(type == 'S'){
        char *sx = (char *)x;
        printf("%s\n", (char*)x);
    }
}
int main() {
    int a = 0x61;
    char b = 'b';
    char* c = "Hello, World!";

    my_print("C", &a);
    my_print("D", &b);
    my_print("S", c);
    my_print("C", c);

    return 0;
}
