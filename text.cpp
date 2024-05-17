#include <iostream>
#include "text.h"


void enterText(char *text) {
    printf("Enter Text :\n");
    fgets(text,99,stdin);
}


void printText(char *text) {
    printf("%s\n",text);
}


void clear(void) {
    while(getchar()!= '\n');
}


int count(char *text) {
    int c = 0 ;
    while(*(text + c)) {
        c++;
    }
    c =  c - 1;
    return c;
}


void bigLetters(char *string) {
    while (*string)
    {
        if ('a' <= *string && *string <= 'z')
        {
            *string -= ('a' - 'A');
        }
        string++;
    }
}


void smallLetters(char *string) {
    while (*string)
    {
        if ('A' <= *string && *string <= 'Z')
        {
            *string += ('a' - 'A');
        }
        string++;
    }
}