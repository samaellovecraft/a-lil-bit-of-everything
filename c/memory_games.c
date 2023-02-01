#include <stdio.h>
#include <string.h>

int main(void) {
    // warm-up
    char *s = "hello";
    printf("%s <-- string s\n", s);
    printf("%p <-- pointer to s\n\n", s);
    
    // more detailed (s[i] considered a syntactic sugar)
    for (int i = 0; i <= strlen(s); i++) {
        printf("%c <-- [%d] char of s\n", s[i], i);
        printf("%p <-- address of the [%d] char of s\n\n", &s[i], i);
    }

    // pointer arithmetic (even more detailed)
    for (int i = 0; i <= strlen(s); i++) {
        printf("%c <-- [%d] char of s\n", *(s+i), i);
        printf("%p <-- address of the [%d] char of s\n\n", &s[i], i);
    }
    
    // hello? bye!
    for (int i = 0; i <= strlen(s); i++) {
        printf("%s <-- last %d charater(s) of s\n", s+i, (int)(strlen(s)-i));
    }
    
    // int
    int nums[] = {1, 2, 3, 21, 69};
    printf("address of the 1st element of an array --> %p\n\n", nums);
    
    // the compiler is smart enough to know how many bytes to keep adding (it not literally adds 1 every time, in case of int every iteration == 4 bytes) 
    for (int i = 0; i < 5; i++) {
        printf("%d <-- [%d] element of an array\n", nums[i], i);
        printf("%d <-- [%d] element of an array\n", *(nums+i), i);
        printf("%p <-- addr of [%d] element of an array\n", &nums[i], i);
        printf("%p <-- addr of [%d] element of an array\n", nums+i, i);
    }

    return 0;
}