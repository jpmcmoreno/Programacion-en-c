#include <stdio.h>

int main(void) {  
  int cantOperaciones;
  scanf("%d",&cantOperaciones);

  for(int i = 1; i <= cantOperaciones; i++){
    int rating1;
    char webPage1[20];
    int rating2;
    char webPage2[20];
    int rating3;
    char webPage3[20];
    int rating4;
    char webPage4[20];
    int rating5;
    char webPage5[20];
    int rating6;
    char webPage6[20];
    int rating7;
    char webPage7[20];
    int rating8;
    char webPage8[20];
    int rating9;
    char webPage9[20];
    int rating10;
    char webPage10[20];
    scanf("%s%d",webPage1,&rating1);
    scanf("%s%d",webPage2,&rating2);
    scanf("%s%d",webPage3,&rating3);
    scanf("%s%d",webPage4,&rating4);
    scanf("%s%d",webPage5,&rating5);
    scanf("%s%d",webPage6,&rating6);
    scanf("%s%d",webPage7,&rating7);
    scanf("%s%d",webPage8,&rating8);
    scanf("%s%d",webPage9,&rating9);
    scanf("%s%d",webPage10,&rating10);

printf("Case #%d:",i);

    if((rating1 >= rating2) && (rating1 >= rating3) && (rating1 >=rating4) && (rating1 >= rating5) && (rating1 >= rating6) && (rating1 >=rating7) && (rating1 >=rating8) && (rating1 >=rating9) && (rating1 >=rating10)){
     printf("\n%s",webPage1); 
    }
    if((rating2 >= rating1) && (rating2 >= rating3) && (rating2 >=rating4) && (rating2 >= rating5) && (rating2 >= rating6) && (rating2 >=rating7) && (rating2 >=rating8) && (rating2 >=rating9) && (rating2 >=rating10)){
     printf("\n%s",webPage2); 
    }
    if((rating3 >= rating2) && (rating3 >= rating1) && (rating3 >=rating4) && (rating3 >= rating5) && (rating3 >= rating6) && (rating3 >=rating7) && (rating3 >=rating8) && (rating3 >=rating9) && (rating3 >=rating10)){
     printf("\n%s",webPage3); 
    }
    if((rating4 >= rating2) && (rating4 >= rating3) && (rating4 >=rating1) && (rating4 >= rating5) && (rating4 >= rating6) && (rating4 >=rating7) && (rating4 >=rating8) && (rating4 >=rating9) && (rating4 >=rating10)){
     printf("\n%s",webPage4); 
    }
    if((rating5 >= rating2) && (rating5 >= rating3) && (rating5 >=rating4) && (rating5 >= rating1) && (rating5 >= rating6) && (rating5 >=rating7) && (rating5 >=rating8) && (rating5 >=rating9) && (rating5 >=rating10)){
     printf("\n%s",webPage5); 
    }
    if((rating6 >= rating2) && (rating6 >= rating3) && (rating6 >=rating4) && (rating6 >= rating5) && (rating6 >= rating1) && (rating6 >=rating7) && (rating6 >=rating8) && (rating6 >=rating9) && (rating6 >=rating10)){
     printf("\n%s",webPage6); 
    }
    if((rating7 >= rating2) && (rating7 >= rating3) && (rating7 >=rating4) && (rating7 >= rating5) && (rating7 >= rating6) && (rating7 >=rating1) && (rating7 >=rating8) && (rating7 >=rating9) && (rating7 >=rating10)){
     printf("\n%s",webPage7); 
    }
    if((rating8 >= rating2) && (rating8 >= rating3) && (rating8 >=rating4) && (rating8 >= rating5) && (rating8 >= rating6) && (rating8 >=rating7) && (rating8 >=rating1) && (rating8 >=rating9) && (rating8 >=rating10)){
     printf("\n%s",webPage8); 
    }
    if((rating9 >= rating2) && (rating9 >= rating3) && (rating9 >=rating4) && (rating9 >= rating5) && (rating9 >= rating6) && (rating9 >=rating7) && (rating9 >=rating8) && (rating9 >=rating1) && (rating9 >=rating10)){
     printf("\n%s",webPage9); 
    }
    if((rating10 >= rating2) && (rating10 >= rating3) && (rating10 >=rating4) && (rating10 >= rating5) && (rating10 >= rating6) && (rating10 >=rating7) && (rating10 >=rating8) && (rating10 >=rating9) && (rating10 >=rating1)){
     printf("\n%s",webPage10); 
    }
    printf("\n");
  }
  

  return 0;
}