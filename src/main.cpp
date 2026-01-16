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
  cout << "Point d'attache disponibles :" << capacite - velosDispos  << endl;

  cout << "-----------------------------------------" << endl << endl;
  cout << "1. Emprunter un vélô" << endl;
  cout << "2. Restituer un vélô" << endl;
  cout << "3. Estimer le coût de la location" << endl;
  cout << "4. Quitter l'application" << endl << endl;
  
  
  cout << "Faire votre choix\n";
  cin >> choix;
  cout << "vous avez choisi " << choix << endl;


  if (choix == '1') {
    if  (velosDispos > 0){
      velosDispos --;
        capacite ++;
   cout << "Vélô Emprunté\n";
    } else {
      cout << "Erreur :aucun vélo disponible\n";
    }
    
  } else if (choix == '2') {
    if  (capacite > 0){
      velosDispos ++;
        capacite --;
    cout << "Vélô restituer avec succés\n";
    } else
    {cout << "Erreur :aucun point d'accroche disponible\n";
    }

  } else if (choix == '3'){
    int type;
    int duree;
    float coutvelo = 0;
    
    cout << "type de vélo : (1 mécanqiue, 2 éléctrique)\n";
    cin >> type;
    cout << "Duree de location\n";
    cin >> duree;

    if (type == '1') {
    coutvelo = (duree / 60) * coutHoraireMeca;}
    else if (type == '2'){
    coutvelo = (duree / 60) * coutHoraireElec;}
    else {
      cout << "Type de vélo invalide\n";}
    

    
  } else if (choix == '4') {
   cout << "Au revoir\n";}

  

  return 0;
}
