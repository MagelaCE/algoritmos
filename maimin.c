#include <stdio.h>
#include <ncurses.h>
#include <ctype.h>

void main(void)
{
    initscr();
    noecho();
    cbreak();

    char ch;

    printf("Entrer com algum texto (digite um ponto para sair).\n");
    do {
        ch = getch();

        if (islower(ch)) ch = toupper(ch);
        else ch = tolower(ch);

        addch(ch);
        refresh();
    } while (ch != '.');
    
    endwin();
}