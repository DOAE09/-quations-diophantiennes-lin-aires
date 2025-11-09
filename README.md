
Résolution d’équations diophantiennes linéaires en C++

Ce programme C++ permet de résoudre des équations diophantiennes linéaires de la forme :

ax + by = c

où a, b et c sont des entiers fournis par l’utilisateur.

Fonctionnalités
	•	Calcul du PGCD : Utilise l’algorithme d’Euclide pour calculer le plus grand commun diviseur de a et b.
	•	Algorithme d’Euclide étendu : Trouve des entiers x0 et y0 tels que a*x0 + b*y0 = pgcd(a,b).
	•	Vérification de solution : Détermine si l’équation admet une solution entière.
	•	Solution particulière : Fournit une solution spécifique (xp, yp) si elle existe.
	•	Solution générale : Exprime toutes les solutions entières à l’aide d’un paramètre k ∈ Z.

Exemple

Entrez a : 15
Entrez b : 25
Entrez c : 100

PGCD(15, 25) = 5
=> Il existe au moins une solution entière.

Une solution particulière : (x, y) = (20, 0)

Solution générale :
x = 20 + 5*k
y = 0 - 3*k
k ∈ Z

Technologies utilisées
	•	C++
	•	Entrée/sortie console

