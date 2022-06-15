#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizioni.h"

void funzione_modificare()
{
   printf("Qual e' il codice dell'oggetto che vuoi modificare?\n");
                scanf("%d",&pezzo_depositato);

                {
                if(pezzo_depositato!=l_carbonio.codice&&pezzo_depositato!=l_ergal.codice&&pezzo_depositato!=l_acciaio.codice&&pezzo_depositato!=l_alluminio.codice&&pezzo_depositato!=t_ottone.codice&&pezzo_depositato!=t_acciaio.codice&&pezzo_depositato!=t_alluminio.codice&&pezzo_depositato!=t_rame.codice)
                    printf("Forse hai sbagliato codice, prova ancora!\n");

                else
                    {
                    printf("in che quantita?\n");
                    scanf("%d",&quantita);

                        switch (pezzo_depositato)
                        {

                        case  222:
                            {
                            if (quantita >= -l_carbonio.somma_finale)
                                {
                                l_carbonio.somma = quantita + l_carbonio.somma;
                                l_carbonio.somma_finale = l_carbonio.somma + l_carbonio.numero_iniziale;
                                printf("Nel magazzino ci sono %d lastre di carbonio\n",l_carbonio.somma_finale);
                                }
                            else
                                printf("non puoi prelevare tutti questi pezzi\n");
                            }break;

                        case  223:
                            {
                            if (quantita >= -l_ergal.somma_finale)
                                {
                                l_ergal.somma = quantita + l_ergal.somma;
                                l_ergal.somma_finale= l_ergal.somma + l_ergal.numero_iniziale;
                                printf("Nel magazzino ci sono %d lastre di ergal\n", l_ergal.somma_finale);
                                }
                            else
                                printf("non puoi prelevare tutti questi pezzi\n");
                            }break;

                        case  227:
                            {
                            if (quantita >= -l_acciaio.somma_finale)
                                {
                                l_acciaio.somma = quantita + l_acciaio.somma;
                                l_acciaio.somma_finale= l_acciaio.somma + l_acciaio.numero_iniziale;
                                printf("Nel magazzino ci sono %d lastre di acciaio\n",l_acciaio.somma_finale);
                                }
                            else
                                printf("non puoi prelevare tutti questi pezzi\n");
                            }break;

                        case 228:
                                {
                            if (quantita >= -l_alluminio.somma_finale)
                                {
                                l_alluminio.somma = quantita + l_alluminio.somma;
                                l_alluminio.somma_finale = l_alluminio.somma + l_alluminio.numero_iniziale;
                                printf("Nel magazzino ci sono %d lastre di alluminio\n",l_alluminio.somma_finale);
                                }
                            else
                                printf("non puoi prelevare tutti questi pezzi\n");
                            }break;

                        case 306:
                            {
                            if (quantita >= -t_ottone.somma_finale)
                                {
                                t_ottone.somma = quantita + t_ottone.somma;
                                t_ottone.somma_finale= t_ottone.somma + t_ottone.numero_iniziale;
                                printf("Nel magazzino ci sono %d tubi di ottone\n",t_ottone.somma_finale);
                                }
                            else
                                printf("non puoi prelevare tutti questi pezzi\n");
                            }break;

                        case 307:
                            {
                            if (quantita >= -t_acciaio.somma_finale)
                                {
                                t_acciaio.somma = quantita + t_acciaio.somma;
                                t_acciaio.somma_finale = t_acciaio.somma + t_acciaio.numero_iniziale;
                                printf("Nel magazzino ci sono %d tubi di acciaio\n",t_acciaio.somma_finale);
                                }
                            else
                                printf("non puoi prelevare tutti questi pezzi\n");
                            }break;

                        case 308:
                            {
                            if (quantita >= -t_alluminio.somma_finale)
                                {
                                t_alluminio.somma = quantita + t_alluminio.somma;
                                t_alluminio.somma_finale = t_alluminio.somma + t_alluminio.numero_iniziale;
                                printf("Nel magazzino ci sono %d tubi di alluminio\n",t_alluminio.somma_finale);
                                }
                            else
                                printf("non puoi prelevare tutti questi pezzi\n");
                            }break;

                        case 309:
                            {
                            if (quantita >= -t_rame.somma_finale)
                                {
                                t_rame.somma = quantita + t_rame.somma;
                                t_rame.somma_finale = t_rame.somma + t_rame.numero_iniziale;
                                printf("Nel magazzino ci sono %d tubi di rame\n",t_rame.somma_finale);
                                }
                            else
                                printf("non puoi prelevare tutti questi pezzi\n");
                            }break;
                        }
                    }
                }


}
