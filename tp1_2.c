#include <stdio.h>

int cuadradoNumero(int numero);
void cuadrado_numero(int numero2);
void invertir(int *a,int *b);
void  orden(int *a,int *b);
int main(){
    
   int numero , numero2;
  //4) a)
   printf("Escriba un numero:\n");
   scanf("%d",&numero);
   printf("El cuadrado del numero %d es %d\n" , numero , cuadradoNumero(numero));
  
 //4) b)
   printf("Escriba el segundo numero:\n");
   scanf("%d",&numero2);
   cuadrado_numero(numero2);

 //4) c)
 printf("El contenido de la variable es: %d\n", numero2);
 printf("La direccion de memoria de la variable es: %d\n", &numero2);

 // 4) d)
 int num1 , num2;
 printf("Escribir el primer numero:\n");
 scanf("%d", &num1);
 printf("Escribir el segundo numero:\n");
 scanf("%d", &num2);
 
 //Mostrar
 printf("El primer numero que ingreso es:%d\n" , num1);
 printf("El segundo valor que ingreso es:%d\n" , num2);
 invertir(&num1,&num2);
 printf("Numero uno invertido:%d\n" , num1);
 printf("Numero dos invertido:%d\n" , num2);

 //4) e) 
  
 int min,max;
 printf("Numero uno:\n");
 scanf("%d", &min);
 printf("Numero dos:\n");
 scanf("%d", &max);
 orden(&min,&max);

 //4) f)
 
 int x, y;
    
  while (1) {  
    printf("Ingrese dos valores positivos: ");
    scanf("%d %d", &x, &y);
     

    if (x < 0 || y < 0) { 
      break;
    }

    
    orden(&x,&y);

  }



 
   
 return 0;
}
//Funcion devuelve el cuadrado de un numero
int cuadradoNumero(int numero){

   return numero * numero;
}
//Funcion 
void cuadrado_numero(int numero2){
   int resultado=numero2 * numero2;
   printf("El cuadrado del numero es %d\n", resultado);

}
void invertir(int *a,int *b){
   int c=*a;
   *a=*b;
   *b=c;
}

//Funcion ordenar
void orden(int *a,int *b){
 int rangoMin , rangoMax;
  if (*a < *b){
   rangoMin=*a;
   rangoMax=*b;
  
  }else{
   rangoMin=*b;
   rangoMax=*a;

  }
 printf("El numero menor es %d\n", rangoMin);
 printf("El numero mayor es %d\n", rangoMax);
 
 
}