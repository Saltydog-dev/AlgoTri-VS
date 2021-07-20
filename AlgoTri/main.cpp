/**
 * \file main.cpp
 * \brief 
 * \author Stéphane Boulanger 
 * \version 0.1
 * \date juillet 2021
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

	int liste[15]; // Création d'une liste contenant 15 éléments 

	liste[0] = 3;
	liste[1] = 4;
	liste[2] = 6;
	liste[3] = 15;
	liste[4] = 36;
	liste[5] = 2;
	liste[6] = 45;
	liste[7] = 56;
	liste[8] = 23;
	liste[9] = 67; 
	liste[10] = 76; 
	liste[11] = 54;
	liste[12] = 12; 
	liste[13] = 1;
	liste[14] = 7;

	std::vector<int> chiffres; // Vecteur contenant tous les chiffres de la liste 

	int i = 0; 
	while (i < 15)
	{
		chiffres.push_back(liste[i]);
		i++;
	}
		
	// Affichage dans la console du vecteur non-trié
	for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
	{
		std::cout << *it << std::endl; 
	}


	// Trier les éléments 
	for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
	{
		std::swap(*it, *std::min_element(it, chiffres.end()));
	}

	// Affichage dans la console du vecteur trié
	for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	



	return 0; 
}