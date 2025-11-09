#include <iostream>
using namespace std;

// ---------------------------------------------------------
// Fonction pour calculer le PGCD de deux entiers a et b
// (Algorithme d'Euclide)
// ---------------------------------------------------------
int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// ---------------------------------------------------------
// Algorithme d'Euclide étendu
// Permet de trouver x0 et y0 tels que : a*x0 + b*y0 = d
// Retourne d = pgcd(a, b)
// ---------------------------------------------------------
int euclide_etendu(int a, int b, int &x0, int &y0) {
    if (b == 0) {
        x0 = 1;
        y0 = 0;
        return a;
    }
    int x1, y1;
    int d = euclide_etendu(b, a % b, x1, y1);
    x0 = y1;
    y0 = x1 - (a / b) * y1;
    return d;
}

// ---------------------------------------------------------
// Programme principal
// ---------------------------------------------------------
int main() {
    int a, b, c;
    cout << "=== Resolution de l'equation diophantienne ax + by = c ===" << endl;
    cout << "Entrez la valeur de a : ";
    cin >> a;
    cout << "Entrez la valeur de b : ";
    cin >> b;
    cout << "Entrez la valeur de c : ";
    cin >> c;

    int x0, y0;
    int d = euclide_etendu(a, b, x0, y0);

    cout << "\nPGCD(" << a << ", " << b << ") = " << d << endl;

    // Vérification d’existence de solutions
    if (c % d != 0) {
        cout << "=> Pas de solution entiere car " << d << " ne divise pas " << c << "." << endl;
        return 0;
    }

    cout << "=> Il existe au moins une solution entiere." << endl;

    // Calcul d'une solution particulière
    int k = c / d;
    int xp = x0 * k;
    int yp = y0 * k;

    cout << "\nUne solution particuliere est : (x, y) = (" << xp << ", " << yp << ")" << endl;

    // Écriture de la solution générale
    int alpha = b / d;
    int beta = -a / d;

    cout << "\nLa solution generale est : " << endl;
    cout << "x = " << xp << " + " << alpha << " * k" << endl;
    cout << "y = " << yp << " + " << beta << " * k" << endl;
    cout << "avec k ∈ Z (ensemble des entiers)" << endl;

    return 0;
}