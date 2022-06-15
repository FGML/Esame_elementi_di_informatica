#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizioni.h"

int main()
{

 l_carbonio.somma=    0 , l_carbonio.somma_finale=  0 ;
 l_ergal.somma=       0 , l_ergal.somma_finale=     0 ;
 l_acciaio.somma=     0 , l_acciaio.somma_finale=   0 ;
 l_alluminio.somma=   0 , l_alluminio.somma_finale= 0 ;
 t_ottone.somma=      0 , t_ottone.somma_finale=    0 ;
 t_acciaio.somma=     0 , t_acciaio.somma_finale=   0 ;
 t_alluminio.somma=   0 , t_alluminio.somma_finale= 0 ;
 t_rame.somma=        0 , t_rame.somma_finale=      0 ;

    {
        FILE *intro;
        char line[117];
        intro = fopen("intro.txt.txt","r");

        if(intro)
        {
            while(!feof(intro))
            {
                fgets(line,117,intro);
                printf("%s\n", line);
            }
        }
        else
        {
            printf("errore!");
        }

        fclose(intro);

        {
            FILE *listino;
            char line[33];
            listino = fopen("listino.txt.txt","r");

            if(listino)
            {
                fscanf(listino,"%d %d %f", &l_carbonio.codice, &l_carbonio.numero_iniziale, &l_carbonio.valore);
                printf("Hai %d lastre di carbonio, di codice %d e valore %4.2f$ l'una \n", l_carbonio.numero_iniziale, l_carbonio.codice, l_carbonio.valore);

                fscanf(listino,"%d %d %f", &l_ergal.codice, &l_ergal.numero_iniziale, &l_ergal.valore);
                printf("Hai %d lastre di ergal, di codice %d e valore %4.2f$ l'una \n", l_ergal.numero_iniziale, l_ergal.codice, l_ergal.valore);

                fscanf(listino,"%d %d %f", &l_acciaio.codice, &l_acciaio.numero_iniziale, &l_acciaio.valore);
                printf("Hai %d lastre di acciaio, di codice %d e valore %4.2f$ l'una \n", l_acciaio.numero_iniziale, l_acciaio.codice, l_acciaio.valore);

                fscanf(listino,"%d %d %f", &l_alluminio.codice, &l_alluminio.numero_iniziale, &l_alluminio.valore);
                printf("Hai %d lastre di alluminio, di codice %d e valore %4.2f$ l'una \n", l_alluminio.numero_iniziale, l_alluminio.codice, l_alluminio.valore);

                fscanf(listino,"%d %d %f", &t_ottone.codice, &t_ottone.numero_iniziale, &t_ottone.valore);
                printf("Hai %d tubi di ottone, di codice %d e valore %4.2f$ l'uno \n", t_ottone.numero_iniziale, t_ottone.codice, t_ottone.valore);

                fscanf(listino,"%d %d %f", &t_acciaio.codice, &t_acciaio.numero_iniziale, &t_acciaio.valore);
                printf("Hai %d tubi di acciaio, di codice %d e valore %4.2f$ l'uno \n", t_acciaio.numero_iniziale, t_acciaio.codice, t_acciaio.valore);

                fscanf(listino,"%d %d %f", &t_alluminio.codice, &t_alluminio.numero_iniziale, &t_alluminio.valore);
                printf("Hai %d tubi di alluminio, di codice %d e valore %4.2f$ l'uno \n", t_alluminio.numero_iniziale, t_alluminio.codice, t_alluminio.valore);

                fscanf(listino,"%d %d %f", &t_rame.codice, &t_rame.numero_iniziale, &t_rame.valore);
                printf("Hai %d tubi di rame, di codice %d e valore %4.2f$ l'uno \n", t_rame.numero_iniziale, t_rame.codice, t_rame.valore);

                fclose(listino);
            }
        }
    }

    {
        do
        {
            l_carbonio.somma_finale  = l_carbonio.somma  + l_carbonio.numero_iniziale;
            l_ergal.somma_finale     = l_ergal.somma     + l_ergal.numero_iniziale;
            l_acciaio.somma_finale   = l_acciaio.somma   + l_acciaio.numero_iniziale;
            l_alluminio.somma_finale = l_alluminio.somma + l_alluminio.numero_iniziale;
            t_ottone.somma_finale    = t_ottone.somma    + t_ottone.numero_iniziale;
            t_acciaio.somma_finale   = t_acciaio.somma   + t_acciaio.numero_iniziale;
            t_alluminio.somma_finale = t_alluminio.somma + t_alluminio.numero_iniziale;
            t_rame.somma_finale      = t_rame.somma      + t_rame.numero_iniziale;

            printf("\nCosa vuoi fare?\n");
            scanf("%s",&funzione);

            if (strcmp(funzione,"M")==0 || strcmp(funzione,"m")==0)
                {
                funzione_modificare ();
                }

            else if (strcmp(funzione,"V")==0 || strcmp(funzione,"v")==0)
                {
                funzione_vedere();
                }

            else if (strcmp(funzione,"L")==0 || strcmp(funzione,"l")==0)
                {
                funzione_listino();
                }

            else if(strcmp(funzione,"E")==0 || strcmp(funzione,"e")==0)
                return 0;

            else
                printf("Non conosco questa funzione!");
        }
        while (strcmp(funzione,"E")!=0);
        return 0;
    }
}
