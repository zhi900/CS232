#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int get_valid_number();
bool is_prime(int x);


int main()
{
	int n;
       
while (true) { 
		
     n = get_valid_number(); 
     if(n==-1){ 
        printf("Program exited");
    return 0;
      }
      else{
		if (is_prime(n)) {
			printf("%d is a prime number!\n", n);
		}
      
		else {
			printf("%d is not a prime number!\n", n);
		}
      }
		
		//read again then loop back to test
		
	}
	return 0;
}

bool is_prime(int n) {
	
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			return false;;
		}
	}
	return true;
}

int get_valid_number(void) {
	
        int n;
	printf("Please enter an integer greater than 2 to test its primality, enter -1 to exit \n");
	scanf("%d", &n);
	while (n <= 2 && n != -1) {
		printf("Please enter an integer greater than 2 to test its primality, enter -1 to exit \n");
		scanf("%d", &n);
	}
	return n;
}
