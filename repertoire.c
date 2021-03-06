/*
 * repertoire.c
 *
 *  Created on: 9 mars 2018
 *      Author: Hmida HMIDA
 */
#include<stdio.h>
#include<stdlib.h>
#include "repertoire.h"
void afficheRepertoire(repertoire lerepertoire) {
	int i;
	for (i = 0; i < 26; i++) {
		printf("\n%c", 'A' + i);
		afficheOnglet(lerepertoire[i]);
	}
}
void afficheOnglet(ongletptr longlet) {
	if (longlet == NULL) {
		printf("\n****VIDE****");
	} else {
		while (longlet != NULL) {
			afficheFiche(longlet->lafiche);
			longlet = longlet->suivante;
		}
	}
}
void afficheFiche(ficheptr lafiche) {
	if (lafiche == NULL) {
		printf("\nFiche vide!");
	} else {
		printf("\nNom: %s, Prénom: %s, Téléphone: %s", lafiche->nom,
				lafiche->prenom, lafiche->tel);
	}
}
void ajouterFiche(repertoire lerepertoire, ficheptr lafiche) {
	char carac='A';int i=0;
	while(toupper(lafiche->nom[0]!=carac)
	{
		carac=carac+1;
		i++;
	}
	majuscule(lafiche);
	ajouterDansOnglet(lerepertoire[i]->longlet,lafiche);
    
    

}
void majuscule(ficheptr lafiche) {
int i,x=0;
for (i=0;i<25;i++)
{
    if (lafiche.nom[0]=='A'+i)
    x=1;
}

void ajouterDansOnglet(ongletptr longlet, ficheptr lafiche) {
int i,test=0;
onglet fich1;
while ('A'+i!=longlet)
{
    i++;
}

while (longlet[i].suivante!=NULL && test==0)
{
    if (longlet[i].lafiche.nom<lafiche.nom)
        longlet[i].lafiche=longlet[i].suivante;
    else
    {
    test=1;
    fich1.lafiche=lafiche;
    fich1.suivante=longlet[i].suivante;
    longlet[i].lafiche=&fich1;
    }

}

}
int avant(ficheptr fiche1, ficheptr fiche2) {
	return 0;
}
void repertoireVide(repertoire lerepertoire) {
	int i;
	for (i = 0; i < 26; i++)
		lerepertoire[i] = NULL;
}
	
	void rechercheTel(char *nom){
	i=0;c='A';
	while(*nom[0]!=c)
	{
		i++;
		c++;
	}
	p=lerepertoire[i]->longlet;
	while(p->suivante!=NULL)
	{
		if(strcmp(p->lafiche->nom,*nom)==0)
			
			afficheFiche(p->lafiche)
	}
}
void menu(repertoire lerepertoire) {

	int choix;
	do {
		printf(
				"\n================================Gestion de Répertoire================================");
		printf(
				"\n=     1- Saisie du répertoire                                                       =");
		printf(
				"\n=     2- Affichage du répertoire                                                    =");
		printf(
				"\n=     3- Ajout d'une fiche                                                          =");
		printf(
				"\n=     4- Recherche de contact                                                       =");
		printf(
				"\n=     5- Quitter                                                                    =");
		printf(
				"\n=====================================================================================");
		printf("\n\t\tEntrer votre choix (1-5): ");
		scanf("%d", &choix);
		switch (choix) {
		case 1:
			choix1();
			break;
		case 2:
			choix2(lerepertoire);
			break;
		case 3:
			choix3(ajouterFiche);
			break;
		case 4:
			choix4(afficheFiche);
			break;
		case 5:
			choix5(repertoireVide);
			break;
		default:
			printf("\nVérifier que le choix est dans [1,5]!");
		}
	} while (choix != 5);
}
void freeRepertoire(repertoire lerepertoire) {
int i;
for (i=0;i<26;i++)
    lerepertoire[i]=NULLL;
}
void choix1() {
	printf("\nChoix1");
}
void choix2(repertoire r) {
	afficheRepertoire(r);
}
void choix3(repertoire lerepertoire, ficheptr lafiche) {
	printf("\nChoix3");
    ajouterFiche(lerepertoire,lafiche);
}
void choix4() {
	printf("\nChoix4");
}
void choix5(r) {
	printf("\nAu revoir");
	freeRepertoire(r);
}



int main(void) {
	setbuf(stdin, NULL);
	setbuf(stdout, NULL);
	menu (NULL);
	return EXIT_SUCCESS;
}
