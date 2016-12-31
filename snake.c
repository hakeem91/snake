#include<stdlib.h>
#include<graph.h>
#include<stdio.h>
/*enum e_numero{1,2,3,4,5};                                                                                                                                                                                                      
enum e_etat{};                                                                                                                                                                                                                   
                                                                                                                                                                                                                                 
struct Case{                                                                                                                                                                                                                     
  e_numero;                                                                                                                                                                                                                      
  e_etat;                                                                                                                                                                                                                        
}                                                                                                                                                                                                                                
  int etat(Case case,e_numero case,e_etat case){                                                                                                                                                                                 
    for (i=0;i<5;i++){                                                                                                                                                                                                           
      case.numero =i;                                                                                                                                                                                                            
      case.etat c=1;                                                                                                                                                                                                             
      printf("%d %d", case.numero, case.etat;                                                                                                                                                                                    
    }                                                                                                                                                                                                                            
*/
int main (int argc, char* argv[]){
  srand(time(NULL));

  int i,j,l,h;
  int r=0;
  int etat=0;
  scanf ("%d %d", &l, &h);
  int taille=l*h;
  int haz1=rand()%h+1;
  int haz2=rand()%h+1;
  while (haz2==haz1){
    haz2=rand()%h+1;
  }
  int haz3=rand()%h+1;
  while (haz3==haz1 || haz3==haz2){
    haz3=rand()%h+1;
  }
  int haz4=rand()%h+1;

  while (haz4==haz1 || haz4==haz2 || haz4==haz3){
    haz4=rand()%h+1;
  }
  int haz5=rand()%h+1;

  while (haz5==haz1 || haz5==haz2 || haz5==haz3 || haz5==haz4){
    haz5=rand()%h+1;
  }
  int d=0;
  int haz6=rand()%l+1;
  int haz7=rand()%l+1;
  int haz8=rand()%l+1;
  int haz9=rand()%l+1;
  int haz10=rand()%l+1;
  //printf ("%d %d %d %d %d %d %d %d %d %d", haz1, haz2, haz3, haz4, haz5, haz6, haz7, haz8, haz9, haz10);                                                                                                                       
  int* tab=malloc(sizeof(int)*(taille));
  InitialiserGraphique();
CreerFenetre(0,0,20*h,20*l+20);
  for (j=l;j>0;j--){
    int m=0;
  for (i=h;i>0;i--){
    DessinerRectangle(0+m,0+r,20,20);
      ChoisirCouleurDessin (CouleurParNom("black"));
      if (i==haz1 && j==haz6  ||i==haz2&& j==haz7 || i==haz3&& j==haz8 || i==haz4&& j==haz9 ||i==haz5 && j==haz10){
        tab[0+d]=1;
        RemplirRectangle(0+m,0+r,20,20);
      }
      else {
tab[taille-(taille-d)]=0;
      }
      d++;
      m+=20;

  }
  r+=20;
  }
  for (i=0;i<taille;i++){
    printf ("%d", tab[i]);
  }

    /*if(tab[i-(i-1-1)]==1){                                                                                                                                                                                                     
      etat=1;                                                                                                                                                                                                                    
    }                                                                                                                                                                                                                            
    else etat=0;                                                                                                                                                                                                                 
     printf("%d", etat);                                                                                                                                                                                                         
     }*/
  Touche(); FermerGraphique();

}
