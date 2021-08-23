#include "functions.h"
#include <iostream>

using namespace std;

int factorial(int n){
    if (n<0){
        printf("%d is not a positive integer \n", n);
    }
    if(n!=1){ 
	return(n * factorial(n-1)); // Recursive call to calculate factorial
    }
    else return 1; // Base case
}
