#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
  
  int Choix, Solde, D, Sn, Mc, Ns;
  int ContinuerProg;
  char P[2];
  char N[2];
  do{
  printf("-MENU-\n");
  printf("(1).Ajouter un compte.\n");
  printf("(2).Debiter un compte.\n");
  printf("(3).Crediter un compte.\n");
  printf("(4).Afficher un compte.\n");
  printf("(5).Quitter le programme.\n");
  printf("Entrer votre choix de transaction:");
  scanf("%d", &Choix);
  printf("\n");
  switch(Choix)
  {
    case 1:
    printf("Creation de votre compte.\n\n");
    printf("D'abord, entrer votre prenom:\n");
    scanf ("%s", &P);
    printf("\n");
    printf("Entrer a present votre nom:\n\n");
    scanf("%s", &N);
    printf("Ajouter une quantite d'argent ou solde\n");
    scanf("%d", &Solde);
    printf("\n");
    printf("Votre compte: %s %s, avec %d dollars ou gourdes a ete bien cree\n\n", P, N, Solde);
   
    
    break;
    
    case 2:
    printf("DEBITER LE COMPTE\n");
    printf("Entrer le montant a debiter:\n");
    scanf("%d", &D);
    
    
    if(D>Solde){
    
    printf("IMPOSSIBLE de debiter le compte car vous n'avez pas assez d'argent !\n");
    printf("Veuiller ajouter a nouveau un montant de debit apres avoir appuyer sur 0 !\n");
    }
     
    else{
     Sn=(Solde-D);
     Solde=Sn;
     printf("Il vous reste %d dollars ou gourdes sur votre compte bancaire.", Sn);
      }
    
    break;
   
    case 3:
    printf("CREDITER UN COMPTE.\n");
    printf("Ajouter le montant a crediter:\n");
    scanf("%d", &Mc);
    Ns=(Solde+Mc);
    Solde=Ns;
    printf("Le nouveau solde est de %d dollars ou gourdes", Ns);
    break;
    
    case 4:
    printf("AFFICHER UN COMPTE:\n");
    printf("TITULAIRE : %s %s\n", P, N);
    printf("SOLDE: %d dollars ou gourdes\n", Solde);
    break;
     
    case 5:
    printf("QUITTER LE PROGRAMME.\n");
    
    
  }
 printf("Voulez-vous faire un autre choix dans le menu ? Si oui, entrer 0, sinon, entrer 5 pour quitter le programme:");
 scanf("%d", &ContinuerProg);
 }while(ContinuerProg != 5);
 printf("A LA PROCHAINE\n");

  return 0;
}