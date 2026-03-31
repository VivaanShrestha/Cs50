#include <cs50.h>
#include <stdio.h>

int main(void) {
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}

/*
Second version

#include <stdio.h>
#include <cs50.h

int main(void) {
    string answer = get_string("What's your name? ");
    printf("hello, answer\n");
}
*/

/*
first version

# include <stdio.h>


int main(void) { printf("Hello world!\n"); }
*/
