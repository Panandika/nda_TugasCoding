
#include <stdio.h>

int main(){

int userInput = 0;
int totalSum = 0;

do{
	printf("\nMasukkan nilai ");
	scanf("%d", &userInput);

	if(userInput > 0){
	totalSum += userInput;
	}

} while (userInput != 0);

/*
 penggunaan +=
 a+=b == a = a+b
*/

printf("\nTotal Nilai  %d", totalSum);
return 0;
}
