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

	std::vector<int> chiffres =  {3, 4, 6, 9, 15, 2, 5, 8, 10, 13, 11, 12, 1, 7, 14}; // Vecteur contenant tous les chiffres  

		
	// Affichage dans la console du vecteur non-trié
	for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
	{
		for (int i = 0; i != *it; i++)
		{
			std::cout << " * ";
		}

		std::cout << std::endl;
	}


	// Trier les éléments 
	for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
	{
		std::swap(*it, *std::min_element(it, chiffres.end()));
	}

	// Affichage dans la console du vecteur trié
	for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
	{
		for (int i = 0; i != *it; i++)
		{
			std::cout << " * "; 
		}

		std::cout << std::endl;
	}
	



	return 0; 
}