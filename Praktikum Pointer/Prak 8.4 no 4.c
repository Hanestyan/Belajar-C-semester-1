#include<stdio.h>
    char *my_strcpy(char *, char *);
    char *my_strcpy(char *destination, char *source) { char *p = destination;
    while (*source != '\0')
    {
    *p++ = *source++;
    }
    *p = '\0';
    return destination;
    }

int main(){
    char strA[80]="A string to be used for demonstration"; 
    char strB[80];
    my_strcpy(strB, strA); 
    puts(strB);

    return 0;
}