#include <stdio.h>  
#include <string.h>  

int main() {  
    char str[] = "bcdacsdfsdfsdfsdfsfq111wqewqweqweq"; 
    int count[256] = {0};
    int leng = sizeof(str)/sizeof(char);

	int i;
	
	
//	duyet qua tung ky tu trong str
    for (i = 0; i < leng - 1; i++) {  
        count[(char)str[i]]++;  
    }  
 
    for (i = 0; i < 256; i++) {  
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);  
        }  
    }  

    return 0;  
}