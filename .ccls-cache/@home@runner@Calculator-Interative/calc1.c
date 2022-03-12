#include <stdio.h>
#include <math.h>

int main(void) {

  int num;
  
printf("Digite o número correspondente a operação que deseja realizar:\n");
  printf("(1)SOMA\n");
   printf("(2)SUBTRAÇÃO\n");
   printf("(3)MULTIPLICAÇÃO\n");
   printf("(4)DIVISÃO\n");
  printf("(5)POTENCIAÇÃO\n");
  printf("(6)RAIZ\n");
  printf("(7)BASKARA\n");

scanf("%d", &num);

if (num==1){
  printf("Escolha um número:\n");
  float s1;
  scanf("%f" , &s1);
  getchar();
  printf("Escolha outro número:\n");
  float s2;
  scanf("%f" , &s2);
  getchar();
  float soma= s1 + s2;
  printf("O valor da soma é: " "%.2f\n" , soma);
}
  else if(num==2){
    printf("Escolha um número:\n");
  float sub1;
  scanf("%f" , &sub1);
    getchar();
  printf("Escolha outro número:\n");
  float sub2;
  scanf("%f" , &sub2);
    getchar();
  float sub= sub1 - sub2;
  printf("O valor da subtração é: " "%.2f\n" , sub);
}
   else if(num==3){
    printf("Escolha um número:\n");
  float mul1;
  scanf("%f" , &mul1);
     getchar();
  printf("Escolha outro número:\n");
  float mul2;
  scanf("%f" , &mul2);
     getchar();
  float m= mul1 * mul2;
  printf("O valor da multiplicação é: " "%.2f\n" , m);
}
   else if(num==4){
    printf("Escolha um número:\n");
  float di1;
  scanf("%f" , &di1);
     getchar();
  printf("Escolha outro número:\n");
  float di2;
  scanf("%f" , &di2);
     getchar();
  float div= di1 / di2;
  printf("O valor da divisão é: " "%.2f\n" , div);
}
     else if(num==5){
       printf("Escolha um número\n");
       float p1;
       scanf("%f" , &p1);
       getchar();
       printf("Escolha outro número\n");
       int p2;
       scanf("%d" , &p2);
       
       int i;
       int x=p1;
       for(i=1; i<p2; i++){
         p1= x * p1;
       }
    
    printf("O valor da potenciação é: %.2f" , p1);
       
     }
        else if(num==6){
       printf("Escolha um número\n");
       float r1;
       scanf("%f" , &r1);
       getchar();
       
    int raiz= sqrt(r1);
          
          printf("O valor da raiz é: %.d" ,raiz );
       
     }
  
      else{
    printf("Comando Inválido!!!");
  }
  




  
  return 0;
}