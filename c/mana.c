#include <stdio.h>
/*  Problem:

    You play as Enigma and have n mana, but it looks like the enemy Anti-Mage is not going to leave you alone.
    Every second you lose n/4 mana, but thanks to the Crystal Maiden, your mana is restored at a rate of n/3 per second.
    How many seconds will it take for you to cast a proverbial 5-Man Black Hole with that creep in your way?
    
    Ultimate mana cost: 500.
    
    (Hint: Of course, we all know this will never happen, but theoretically... XD) 
*/
int main(void) {
    float mana;
    int mana_cost = 500;
    int seconds = 0;
    printf("Current mana: ");
    scanf("%f", &mana);
    printf("Mana cost: %d\n\n", mana_cost);

    if (mana >= mana_cost) {
        printf("BLAAAAAAAAAACK HOOOOOOOOOOLE!!!\n");
    }
    else if (mana == 0) {
        printf("As expected, this will never happen.\n");
    }
    else {
        while (mana < mana_cost) {
            float mana_lost = mana/4;
            float mana_restored = mana/3;
            mana += mana_restored;
            mana -= mana_lost;
            seconds++;
            printf("Seconds: %d\n[-] Mana lost: %f\n[+] Mana restored: %f\nCurrent mana: %f\n\n", seconds, mana_lost, mana_restored, mana);
        }
        printf("BLAAAAAAAAAACK HOOOOOOOOOOLE!!!\n");
        printf("It will take %d seconds.\n", seconds);
    }
    return 0;
}