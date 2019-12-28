#include <stdio.h>

int main() {
	int i;
	char str[100];

	printf("Enter a string: ");
	scanf("%[^\n]", str);

   for (i=0;str[i] != '\0';i++){
       if (str[i] == 'A' || str[i] == 'a' || str[i] == 'I' || str[i] == 'i' || 
       str[i] == 'U' || str[i] == 'u' || str[i] == 'E' || str[i] == 'e' || 
       str[i] == 'O' || str[i] == 'o'){
           printf("%c \n", str[i]);
       }
   }
   
   for (i=0;str[i] != '\0';i++){
       if (!(str[i] == 'A' || str[i] == 'a' || str[i] == 'I' || str[i] == 'i' || 
       str[i] == 'U' || str[i] == 'u' || str[i] == 'E' || str[i] == 'e' || 
       str[i] == 'O' || str[i] == 'o')){
           printf("%c \n", str[i]);
       }
   }

	return 0;
}
