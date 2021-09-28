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

/******************************************/
/*   TPC2021 no 1  exo 2                   */
/*                                        */
/******************************************/



int main() {

	// a-
	// 
	// Donnez le code qui permet de calculer la valeur de Pi  en utilisant la relation ArcTang(1) = Pi/4 et le développement limité
	// de la fonction Arctangente :
	//
	// Pi = 4 * ( 1 - 1/3 + 1/5 - 1/7 + 1/9 -1/11 + ... ) 
	// 
	// On arrêtera de calculer les termes de l'addition quand leur valeur sera inférieure à 10e-10
	// Afficher le résultat avec 10 décimales.
	// 
	double Pi = 0.0;










	// b- 
	// 
	// Affichez la table des sinus des angles allant de 0 à 90 degrés en faisant varier l'angle de 10 degrés en 10 degrés.
	// Quel fichier d'entêtes .h doit-on utiliser ?
	// Définissez la valeur de PI à l'aide d'une constante en lui donnant la valeur 3.1415926535898
	// Afficher la valeur de l'angle en degrés et la valeur du sinus sur la même ligne en alignant les valeurs
	//









	return EXIT_SUCCESS;
}
