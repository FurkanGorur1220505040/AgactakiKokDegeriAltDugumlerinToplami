#include <stdio.h>
#include <stdlib.h>

 struct n {

int deger;
 struct n *sol;
 struct n *sag;	
	
};
typedef struct n node;

int algorithm(int kokdeger,int soldeger,int ssoldeger){  //Fonksiyonda yavru koklerin ana koklere esitligi soruldu
if(kokdeger==soldeger+ssoldeger)
printf("Child(cocuk) degerlerin toplami kok degere esit");

else
printf("Child(cocuk) degerlerin toplami kok degere esit degil");	
}	
	

int main () {
//Kok agaca yer ayýrýp , deger veriyoruz     
node *root = (node*)malloc(sizeof(node));
root->deger=12;

//First degeri baska degiskene atiyoruz
int kokdeger=root->deger;

//Yavru koku yer ayýrýp , deger veriyoruz
root->sol=(node*)malloc(sizeof(node));
root->sol->deger=8;

//cocuk degeri baska degiskene atiyoruz
int soldeger=root->sol->deger;


root->sag=(node*)malloc(sizeof(node));
root->sag->deger=0;

//Yaprak koke yer ayýrýp, deger veriyoruz
root->sol->sol=(node*)malloc(sizeof(node));
root->sol->sol->deger=4;	

root->sol->sag=(node*)malloc(sizeof(node));
root->sol->sag->deger=0;

//En kucuk kokun degeri baska degiskene ataniyor
int ssoldeger=root->sol->sol->deger;


//Fonksiyon tanimlayip ana kokun yavru koklere esitligini sorguluyoruz 
algorithm(kokdeger,soldeger,ssoldeger);

/*     12
      /  \
	 8    NULL
	/ \
   4   NULL  
 
 Algoritmamizin uygulamali gösterimi bu sekilde  
   */

return 0;	
}
