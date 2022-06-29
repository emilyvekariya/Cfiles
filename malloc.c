#include<stdio.h>
#include<stdlib.h>

int main(){

    int size;
    char *text = NULL;

    printf("Enter a size of the text: ");
    scanf("%d",&size);

    text = (char *) malloc(size * sizeof(char));
    

    if( text != NULL){
        printf("Enter a text: ");
        //scanf("%s\n",text);
        scanf(" ");
        gets(text);

        printf("the inputted text is:  %s\n",text);
    }
        
    free(text);
    text = NULL;

    }
