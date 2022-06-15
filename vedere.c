#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizioni.h"

void funzione_vedere()
{
    l_carbonio.valore_totale  = l_carbonio.valore  * l_carbonio.somma_finale;
    l_ergal.valore_totale     = l_ergal.valore     * l_ergal.somma_finale;
    l_acciaio.valore_totale   = l_acciaio.valore   * l_acciaio.somma_finale;
    l_alluminio.valore_totale = l_alluminio.valore * l_alluminio.somma_finale;
    t_ottone.valore_totale    = t_ottone.valore    * t_ottone.somma_finale;
    t_acciaio.valore_totale   = t_acciaio.valore   * t_acciaio.somma_finale;
    t_alluminio.valore_totale = t_alluminio.valore * t_alluminio.somma_finale;
    t_rame.valore_totale      = t_rame.valore      * t_rame.somma_finale;

    numero_minimo=10;
    quantita_sicurezza=10;

                printf("Nel magazzino ci sono:\n");

                printf("%d lastre di carbonio, il cui valore complessivo e' di %4.2f$\n",  l_carbonio.somma_finale  ,l_carbonio.valore_totale);
                if (l_carbonio.somma_finale <= numero_minimo)
                {
                    printf("Hai quasi esaurito i pezzi, ne vuoi acquistare altri?\n");
                    scanf("%s", &cosa);

                    if(strcmp(cosa,"Si")==0 || strcmp(cosa,"si")==0)
                        {
                            l_carbonio.somma = l_carbonio.somma + quantita_sicurezza;
                            l_carbonio.somma_finale = l_carbonio.somma + l_carbonio.numero_iniziale;
                            printf("Ordine completato, ora hai %d lastre di carbonio;\n",l_carbonio.somma_finale);
                            l_carbonio.valore_totale  = l_carbonio.valore  * l_carbonio.somma_finale;
                        }
                }

                printf("%d lastre di ergal, il cui valore complessivo e' di %4.2f$\n",     l_ergal.somma_finale     ,l_ergal.valore_totale)     ;
                if (l_ergal.somma_finale <= numero_minimo)
                {
                    printf("Hai quasi esaurito i pezzi, ne vuoi acquistare altri?\n");
                    scanf("%s", &cosa);

                    if(strcmp(cosa,"Si")==0 || strcmp(cosa,"si")==0)
                        {
                            l_ergal.somma = l_ergal.somma + quantita_sicurezza;
                            l_ergal.somma_finale = l_ergal.somma + l_ergal.numero_iniziale;
                            printf("Ordine completato, ora hai %d lastre di ergal;\n",l_ergal.somma_finale);
                            l_ergal.valore_totale     = l_ergal.valore     * l_ergal.somma_finale;
                        }
                    else
                        printf("Errore\n");
                }

                printf("%d lastre di acciaio, il cui valore complessivo e' di %4.2f$\n",   l_acciaio.somma_finale   ,l_acciaio.valore_totale)   ;
                if (l_acciaio.somma_finale <= numero_minimo)
                {
                    printf("Hai quasi esaurito i pezzi, ne vuoi acquistare altri?\n");
                    scanf("%s", &cosa);

                    if(strcmp(cosa,"Si")==0 || strcmp(cosa,"si")==0)
                        {
                            l_acciaio.somma = l_acciaio.somma + quantita_sicurezza;
                            l_acciaio.somma_finale = l_acciaio.somma + l_acciaio.numero_iniziale;
                            printf("Ordine completato, ora hai %d lastre di acciaio;\n",l_acciaio.somma_finale);
                            l_acciaio.valore_totale     = l_acciaio.valore     * l_acciaio.somma_finale;
                        }
                    else
                        printf("Errore\n");
                }

                printf("%d lastre di alluminio, il cui valore complessivo e' di %4.2f$\n", l_alluminio.somma_finale ,l_alluminio.valore_totale) ;
                if (l_alluminio.somma_finale <= numero_minimo)
                {
                    printf("Hai quasi esaurito i pezzi, ne vuoi acquistare altri?\n");
                    scanf("%s", &cosa);

                    if(strcmp(cosa,"Si")==0 || strcmp(cosa,"si")==0)
                        {
                            l_alluminio.somma = l_alluminio.somma + quantita_sicurezza;
                            l_alluminio.somma_finale = l_alluminio.somma + l_alluminio.numero_iniziale;
                            printf("Ordine completato, ora hai %d lastre di alluminio;\n",l_alluminio.somma_finale);
                            l_alluminio.valore_totale     = l_alluminio.valore     * l_alluminio.somma_finale;
                        }
                    else
                        printf("Errore\n");
                }

                printf("%d tubi di ottone, il cui valore complessivo e' di %4.2f$\n",      t_ottone.somma_finale    ,t_ottone.valore_totale)    ;
                if (t_ottone.somma_finale <= numero_minimo)
                {
                    printf("Hai quasi esaurito i pezzi, ne vuoi acquistare altri?\n");
                    scanf("%s", &cosa);

                    if(strcmp(cosa,"Si")==0 || strcmp(cosa,"si")==0)
                        {
                            t_ottone.somma = t_ottone.somma + quantita_sicurezza;
                            t_ottone.somma_finale = t_ottone.somma + t_ottone.numero_iniziale;
                            printf("Ordine completato, ora hai %d tubi di ottone;\n",t_ottone.somma_finale);
                            t_ottone.valore_totale     = t_ottone.valore     * t_ottone.somma_finale;
                        }
                    else
                        printf("Errore\n");
                }

                printf("%d tubi di acciaio, il cui valore complessivo e' di %4.2f$\n",     t_acciaio.somma_finale   ,t_acciaio.valore_totale)   ;
                if (t_acciaio.somma_finale <= numero_minimo)
                {
                    printf("Hai quasi esaurito i pezzi, ne vuoi acquistare altri?\n");
                    scanf("%s", &cosa);

                    if(strcmp(cosa,"Si")==0 || strcmp(cosa,"si")==0)
                        {
                            t_acciaio.somma = t_acciaio.somma + quantita_sicurezza;
                            t_acciaio.somma_finale = t_acciaio.somma + t_acciaio.numero_iniziale;
                            printf("Ordine completato, ora hai %d tubi di acciaio;\n",t_acciaio.somma_finale);
                            t_acciaio.valore_totale     = t_acciaio.valore     * t_acciaio.somma_finale;
                        }
                    else
                        printf("Errore\n");
                }

                printf("%d tubi di alluminio, il cui valore complessivo e' di %4.2f$\n",   t_alluminio.somma_finale ,t_alluminio.valore_totale) ;
                if (t_alluminio.somma_finale <= numero_minimo)
                {
                    printf("Hai quasi esaurito i pezzi, ne vuoi acquistare altri?\n");
                    scanf("%s", &cosa);

                    if(strcmp(cosa,"Si")==0 || strcmp(cosa,"si")==0)
                        {
                            t_alluminio.somma = t_alluminio.somma + quantita_sicurezza;
                            t_alluminio.somma_finale = t_alluminio.somma + t_alluminio.numero_iniziale;
                            printf("Ordine completato, ora hai %d tubi di alluminio;\n",t_alluminio.somma_finale);
                            t_alluminio.valore_totale     = t_alluminio.valore     * t_alluminio.somma_finale;
                        }
                    else
                        printf("Errore\n");
                }

                printf("%d tubi di rame, il cui valore complessivo e' di %4.2f$\n",        t_rame.somma_finale      ,t_rame.valore_totale)      ;
                if (t_rame.somma_finale <= numero_minimo)
                {
                    printf("Hai quasi esaurito i pezzi, ne vuoi acquistare altri?\n");
                    scanf("%s", &cosa);

                    if(strcmp(cosa,"Si")==0 || strcmp(cosa,"si")==0)
                        {
                            t_rame.somma = t_rame.somma + quantita_sicurezza;
                            t_rame.somma_finale = t_rame.somma + t_rame.numero_iniziale;
                            printf("Ordine completato, ora hai %d tubi di rame;\n",t_rame.somma_finale);
                            t_rame.valore_totale     = t_rame.valore     * t_rame.somma_finale;
                        }
                    else
                        printf("Errore\n");
                }

                magazzino.numero_totale = l_carbonio.somma_finale+l_ergal.somma_finale+l_acciaio.somma_finale+l_alluminio.somma_finale+t_ottone.somma_finale+t_acciaio.somma_finale+t_alluminio.somma_finale+t_rame.somma_finale;
                magazzino.valore_totale = l_carbonio.valore_totale+l_ergal.valore_totale+l_acciaio.valore_totale+l_alluminio.valore_totale+t_ottone.valore_totale+t_acciaio.valore_totale+t_alluminio.valore_totale+t_rame.valore_totale;
                printf("\nNel magazzino ci sono %d pezzi, di valore totale: %4.2f$\n", magazzino.numero_totale , magazzino.valore_totale);

}
