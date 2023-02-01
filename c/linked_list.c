#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

// prepend (stack) version of the linked list 

int main(int argc, char *argv[]) {
    node *list = NULL; // start of the list

    for (int i = 1; i < argc; i++) { // starting from 1 because first(0) value in argv is a name of the program
        int number = atoi(argv[i]); // ascii into an int

        node *n = malloc(sizeof(node)); // 1st number
        if (n == NULL) {
            printf("Not enough mana!");
            return 1; // note: we also need to free the memory already allocated before we return (in case of not the 1st iteration)
        }
        n->number = number;
        n->next = NULL;

        n->next = list; // first time it'll be NULL and after the following statement it will change every iteration
        list = n;
    }

    // iteration over the linked list:
    node *ptr = list;
    while (ptr != NULL) {
        printf("%i\n", ptr->number );
        ptr = ptr->next;
    }
    /* succinct alternative to the above block:
    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        printf("%i\n", ptr->number );
    }
    */

    // freedom!!!
    ptr = list;
    while (ptr != NULL) {
        /* WRONG:
        free(ptr);
        ptr = ptr->next; (nothing is there)
        */
       node *next = ptr->next;
       free(ptr);
       ptr = next;
    }

    /* print + free in one loop
    
   node *ptr = list;
   while (ptr != NULL) {
      node *next = ptr->next;
      printf("%i\n", ptr->number);
      free(ptr);
      ptr = next;
   }
    */

    return 0;
}