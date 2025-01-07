#include <stdio.h>  
#include<string.h>

int main() {  
    char str[100];
    char ch; 
    int i = 0, j = 0;

    printf("Nhap chuoi: ");  
    fgets(str, sizeof(str), stdin);  


	int leng = strlen(str);
    printf("Nhap ky tu can xoa: ");  
    scanf(" %c", &ch);  

    for (;i < leng; i++) {  
    if (str[i] != ch) {  
        str[j] = str[i]; 
        j++;  
    }  
}
 
    printf("Chuoi sau khi xoa ky tu '%c': %s", ch, str);  

    return 0;  
}