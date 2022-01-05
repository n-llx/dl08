#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
  double x = 0;
  printf("Quelle est la valeur a trouver ? : ");
  scanf("%lf", &x);
  printf("Quelle est le nombre d'iteration ? : ");
  int nombre_iteration = 0;
  scanf("%d", &nombre_iteration);
  double a_n = x;
  double b_n = 0.;
  
  for(int i = 0; i < nombre_iteration; i++){
    if(x >= ((a_n + b_n)/2)*exp((a_n + b_n)/2)){
      b_n = (a_n + b_n)/2;
    }else if(x < ((a_n + b_n)/2)*exp((a_n + b_n)/2)){
      a_n = (a_n + b_n)/2;
    }
  }
  printf("W(x) = %lf \n", a_n);
}
