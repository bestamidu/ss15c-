#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  

int main() {  
    char str[100] = "hello world, duy nguyen";  
    int i;  
    int in_word = 0;

    for (i = 0; str[i] != '\0'; i++) {  
        if (isspace(str[i])) {  
            in_word = 0;
        } else {  
            if (in_word == 0) {  
                str[i] = toupper(str[i]);
                in_word = 1;
            }  
        }  
    }  
    printf("%s\n", str);  
    return 0;  
}