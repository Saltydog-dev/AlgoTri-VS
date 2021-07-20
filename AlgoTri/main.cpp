/**
 * \file main.cpp
 * \brief 
 * \author St�phane Boulanger 
 * \version 0.1
 * \date juillet 2021
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main()
{

	std::vector<int> chiffres =  {3, 4, 6, 9, 15, 2, 5, 8, 10, 13, 11, 12, 1, 7, 14}; // Vecteur contenant tous les chiffres  

		
	// Affichage dans la console du vecteur non-tri�
	for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
	{
		for (int i = 0; i != *it; i++)
		{
			std::cout << " $ ";
		}

		std::cout << std::endl;
	}

	bool valide = false; 

	while (!valide)
	{
	    std::cout << "Voulez-vous trier les donnees ? " << std::endl; 
		std::cout << "1 -> Oui" << std::endl; 
		std::cout << "2 -> Non" << std::endl; 

		std::string reponse; 
		std::getline(std::cin, reponse); 


		if (reponse == "1")
		{
			valide = true; 
			std::cout << "Vous avez dit Oui, voici les elements trie" << std::endl; 

			// Trier les �l�ments 
			for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
			{
				std::swap(*it, *std::min_element(it, chiffres.end()));
			}

			// Affichage dans la console du vecteur tri�
			for (auto it = chiffres.begin(); it != chiffres.end(); ++it)
			{
				for (int i = 0; i != *it; i++)
				{
					std::cout << " $ "; 
				}

				std::cout << std::endl;
			}
		}
		else if (reponse == "2")
		{
			valide = true; 
			std::cout << "Vous avez dit Non, Merci a la prochaine !" << std::endl; 
		}

	}


	return 0; 
}