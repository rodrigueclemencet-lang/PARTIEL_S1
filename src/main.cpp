#include <iostream>
using namespace std;


int main() {
  const float coutHoraireMeca = 4.0;
  const float coutHoraireElec = 5.0;
  int velosDispos = 20;
  int capacite = 20;
  unsigned char choix;
  
  cout << "****** Gestion d'une station Vélô ******" << endl << endl;
  cout << "-----------------------------------------" << endl;

  cout << "Vélos disponibles :" << velosDispos << endl;
  cout << "Point d'attache disponibles :" << capacite << endl;

  cout << "-----------------------------------------" << endl << endl;
  cout << "1. Emprunter un vélô" << endl;
  cout << "2. Restituer un vélô" << endl;
  cout << "3. Estimer le coût de la location" << endl;
  cout << "4. Quitter l'application" << endl << endl;
  
  
  cout << "Faire votre choix\n";
  cin >> choix;
  cout << "vous avez choisi " << choix << endl;


  if (choix == '1') {
   cout << "Emprunter un vélô\n";

  } else if (choix == '2') {
    cout << "Restituer un vélô\n";

  } else if (choix == '3') {
    cout << "Estimer le coût de la location\n";

  } else if (choix == '4') {
   cout << "Quitter l'application\n";}

  return 0;
}
