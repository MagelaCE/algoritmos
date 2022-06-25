/* Escreve caracteres de abas as extremidades convergindo no meio */
#include <ncurses.h>
#include <string.h>

void converge(int line, char *message);

void main(void)
{
    initscr();
    
    converge(10, "Isto é um teste de converge().");

    refresh();
    getch();
    endwin();
}

/* Essa função mostra uma string iniciando do lado esquerdo da
    linha especificada, Ela escreve caracteres de ambas as
    extremidades, convergindo para o centro. */
void converge(int line, char *message)
{
    int i, j;
    for (i=1, j=strlen(message); i<j; i++, j--) {
        mvaddstr(line, i, message--);
        //refresh();
        mvaddstr(line, j, message--);
        //refresh();
    }
}