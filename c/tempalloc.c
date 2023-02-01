#include <stdio.h>
#include <stdlib.h>

char getformat(void); 


int main() {
    float *temp = (float *)malloc(sizeof(float));
    if (temp == NULL) {
        puts("Unable to allocate memory.");
        exit(1);
    }
    char format;
    float result;
    printf("Enter the temperature outside: ");
    scanf("%f",temp);
    getchar();  /* swallow the newline */
    printf("Enter the format (C/F): ");
    format = getformat();

    switch (format) {
        case 'C':
        case 'c':
            result = *temp + 273.15;
            printf("%.2f C = %.2f K\n",*temp,result);
            break;
        case 'F':
        case 'f':
            result = (*temp + 459.67) * (5.0/9.0);
            printf("%.2f F = %.2f K\n",*temp,result);
            break;
        default:
            puts("Invalid format.");
    }
    return 0;
}

char getformat(void) {
    char f = getchar();
    while (getchar() != '\n')
        ;
    return f;
}

