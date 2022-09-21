// This directive deactivate Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>
#include <limits.h>

/******************************************/
/*   TPC2022 no 1  exo1                   */
/*                                        */
/******************************************/

// le type 'char' caractérise un entier positif codé sur 8 bits compris entre -128 et +127,
// le bit de poids fort sert au codage du signe.
// un 'unsigned char' pourra donc représenter un nombre positif compris en 0 et 255, 
// soit 256 valeurs.
// La représentation en hexadécimale de 255 est FF (notée 0xFF)
// Le type booléen n'existe pas en C90, une valeur non nulle 
// dans une expression logique est comprise comme 'VRAI'.
// La prise en charge du type booléen peut se faire en ajoutant une directive #include <stdbool.h>

// Compléter le code par des appels à la fonction d’affichage printf pour afficher la valeur 
// de chacune des variables dans un format correct. Attention, le choix du filtre %, modifie le résultat
// car il réalise une conversion de la donnée avant son affichage dans le format souhaité.
// Donc, ce qui s’affiche est ce qui a été demandé, et pas nécessairement la donnée dans son format d’origine.
// Donner pour chaque type, le nombre d’octets utilisés pour le codage, et indiquer quelle valeur minimum
// et quelle valeur maximum(dynamique) on peut représenter avec une variable qui aurait ce type.
// Donner la réponse sous la forme de commentaires dans votre fichier source.

// définition de type

typedef unsigned char byte;

int main() { // accolade ouvrante = début de bloc d'instructions
	// Déclaration de variables réservées au main(), et initialisations facultatives
	char OneLetter = 'A';
	char AnOtherLetter = 66;
	byte toto = 0;
	unsigned char VerySmallCounter = 255;
	short SmallCounter = 32767;
	int Counter = 0;
	long LargeCounter = 2147483647;
	unsigned long FullRangeLargeCounter = 4294967295;
	int ChienDeGarde = 0;
	float Dim1 = 1.414F;
	double Dim2 = .5;
	bool TestResult = 1;
	// Déclaration de constante
	const double Pi = 3.14159265;
	// les instructions du programme principal : main()
	/********** Debut de programme *****************/
	printf("\n");
	printf("exemple d'affichage d'un caractere %c, codage sur %d octets\n", OneLetter, sizeof(OneLetter));
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", Counter, sizeof(Counter));
	/*********** Fin de programme ******************/

	return(EXIT_SUCCESS);
} // accolade fermante = fin de bloc d'instructions


