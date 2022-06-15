#ifndef DEFINIZIONI_H_INCLUDED
#define DEFINIZIONI_H_INCLUDED

int pezzo_depositato, quantita;
char funzione[2];
char M,V,L,E;
char cosa[3];
char modificare_quantita;
int numero_minimo, quantita_sicurezza;

struct struct_magazzino {
float valore_totale;
int numero_totale;
}magazzino;

struct struct_materiali{
int codice;
int somma;
int somma_finale;
int numero_iniziale;
float valore;
float valore_totale;
}l_carbonio, l_ergal, l_acciaio, l_alluminio, t_ottone, t_acciaio, t_alluminio, t_rame;


#endif // DEFINIZIONI_H_INCLUDED
