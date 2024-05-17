#include <iostream>
#include "text.h"


void menu(){
    printf( "(1) - Enter Text\n");
    printf( "(2) - Print Text\n");
    printf( "(3) - Text Length\n");
    printf( "(4) - Change To Big Letters\n");
    printf( "(5) - Change To Small Letters\n");
    printf( "(9) - EXIT!!!\n");
}


int main() {
    char text[100] = " ";
    int option = 0 ;
    do{
        menu();
        printf("Choose the operation you want to do:\n ");
        scanf("%s",&option);
        clear();
        switch(option)
        {
            case 1:
                enterText(text);
                break;
            case 2:
                printText(text);
                break;
            case 3:
                printf("Text length = %d\n", count(text));
                break;
            case 4:
                bigLetters(text);
                printf("Change To Big Letters\n");
                break;
            case 5:
                smallLetters(text);
                printf("Change To Small Letters\n");
                break;
            case 9:
                break;
        }
    }while( option!=9);
}