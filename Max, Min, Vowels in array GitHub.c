#include <stdio.h>
#include <string.h>


int main(){

   int i=0, j=0, x=0, y=0, k=0, max_words=0, min_words=0, max_vowels=0, min_vowels=0;
   char word[10][40], max[40]="", min[40]="";
   for (i; i<10; i++) {

        printf("\n \nType your %d word: \n", i+1);
        gets(word[i]);
        printf("Length of word %d : %d \n", i+1, strlen(word[i]));

   }

    for(j; j<10; j++){

        if (strlen(min) == 0){
            strcpy(min,word[j]);
        }
        if (strlen(word[j]) > strlen(max)){
                strcpy(max, word[j]);
        }
        if (strlen(word[j]) < strlen(min)){
                strcpy(min,word[j]);
        }
   }

   for(x; x<10; x++){

        if(strlen(max)==strlen(word[x])){
            max_words +=1;
        }
        if(strlen(min)==strlen(word[x])){
            min_words +=1;
        }

   }
   for(y; max[y] != '\0'; y++){

       if(max[y]=='a' || max[y]=='A' || max[y]=='e' || max[y]=='E' || max[y]=='i' || max[y]=='I' || max[y]=='o' || max[y]=='O' || max[y]=='u' || max[y]=='U' ){
            max_vowels+=1;
        }

   }
   for(k; min[k] != '\0'; k++){

       if(min[k]=='a' || min[k]=='A' || min[k]=='e' || min[k]=='E' || min[k]=='i' || min[k]=='I' || min[k]=='o' || min[k]=='O' || min[k]=='u' || min[k]=='U' ){
            min_vowels+=1;
        }
   }


printf("\n\n Number of words with longest characters-->    %d \n", max_words);
printf(" Number of words with shortest characters-->   %d \n", min_words);

printf("\n\n The LONGEST word from the given list is : %s with %d characters and %d vowels. ", max, strlen(max), max_vowels);
printf("\n The SHORTEST word from the given list is: %s with %d characters and %d vowels.", min, strlen(min), min_vowels);

return 0;}


