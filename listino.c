#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizioni.h"

void funzione_listino()
{
                    FILE *listino;
                char line[100];
                listino = fopen("prova.txt.txt","r");

                if(listino)
                {
                    while(!feof(listino))
                    {
                        fgets(line,100,listino);
                        printf("%s\n", line);
                    }
                }
                else
                {
                    printf("errore!");
                }
                fclose(listino);
}
