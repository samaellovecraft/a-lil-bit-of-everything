#include <stdio.h>

/*  We have a population of n llamas.
    Each year, n/3 new llamas are born, and n/4 llamas pass away.
    How many years will it take to have a certaion population of llamas? */


int main(void) {
    float llamas, goal;
    int years = 0;
    // input current and goal population quantity
    printf("Current population quantity? ");
    scanf("%f", &llamas);
    printf("How many llamas do you want, buddy? ");
    scanf("%f", &goal);
    // condition loop
    while (llamas < goal) {
        // born & dead math
        float born = llamas/3;
        float died = llamas/4;
        llamas += born;
        llamas -= died;
        printf("%f\n", llamas);
        years++;
        if (llamas <= 0) {
            // bad news
            printf("Oops, all your llamas will be dead after %d year(s) :'(\n", years);
            break;
        }
        else if (llamas >= goal) {
            // good news
            printf("It will take %d years to have %f (%f to be more precise) llamas.\n", years, goal, llamas);
        }
    } 
    return 0;
}