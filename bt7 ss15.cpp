#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char duci[]=" Hello my gmail is test123@gmail.com ";
	int letters =0 , numbers=0 , special=0; 
	 for ( int i =0 ; i< strlen(duci); i++){
	 	 if ( isalpha(duci[i]) ){
	 	 	letters++;
	 	 }	else if ( isdigit(duci[i])){
	 	 		numbers++;
	 	 		
			  }else{
			  	special++;
			  }
		  }
	   printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n",numbers);
    printf("So ky tu dac biet: %d\n", special);

	
	
	return 0;
}