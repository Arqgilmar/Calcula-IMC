#include <stdio.h>

int main(void) {
  
  char sexo;
  float peso, altura,imc;
  

  printf("Digite seu sexo:(M ou F)\n");
  scanf("%s", &sexo);
  printf("Digite seu peso:\n");
  scanf("%f", &peso);
  printf("Digite sua altura:\n");
  scanf("%f", &altura);

  imc = peso / (altura*altura);

  if(sexo == 'M'){
    if(imc >= 20 && imc < 25){
      printf("Seu peso é normal");
    }else if(imc >= 25 && imc < 30){
      printf("Você é levemente obeso");
    }else if(imc >= 25 && imc < 30){
      printf("Você é levemente obeso");
    }else if(imc >= 30 && imc < 35){
      printf("Você é obeso grau 1");
    }else if(imc >= 35 && imc < 40){
      printf("Você é obeso grau 2");
    }else if(imc >= 40){
      printf("Você é obeso grau 3");
    }
  }
    
  if(sexo == 'F'){
    if(imc >= 19 && imc < 24){
      printf("Seu peso é normal");
      }else if(imc >= 24 && imc < 29){
        printf("Você é levemente obeso");
      }else if(imc >= 29 && imc < 34){
        printf("Você é obeso grau 1");
      }else if(imc >= 34 && imc < 39){
        printf("Você é obeso grau 2");
      }else if(imc >39){
        printf("Você é obeso grau 3");
      }
  }
  
  return 0;
}
