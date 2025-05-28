/*10. Sequência de Fibonacci Recursiva
Escreva uma função recursiva para gerar o n-ésimo número de Fibonacci.*/


#include <stdio.h>
int fib(int);
int main(){
    int n = 5;
    printf("%d\n", fib(n));
}
int fib(int n){
    if(n<2){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
  }