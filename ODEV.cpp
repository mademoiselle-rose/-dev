#include<stdio.h>
#include<iostream> 
int main(){
 
    int satir=0;
    int bosluk=0;
    for(int satir=5; satir>0; satir--){
            for(int yildiz=satir; yildiz>0 ; yildiz--){
                    printf("*");
            }
            printf("\n");
            }

 return 0;
 }
 
 
 	
int main () {
	int sayi, i, j;
	printf("Bir sayi giriniz:");
	scanf("%d", &sayi);
	for(i=1;i<=sayi;i++){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(j=0;j<=(2*sayi)-2*i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=sayi-1;i++){
		for(j=1;j<=sayi-i-1;j++){
			printf(" ");
		}
		for(j=1;j<=(2*i)+1;j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	int satir, x;
	scanf("%d", &satir);
	x = satir;
	for(int i = 1; i < satir + 1; i++){
		for(int j = 0; j < i; j++){
			printf("*");
		}
	    for(int j = 0; j < x * 2 - 3; j++){
	    	printf(" ");
		}
		for(int j = 0; j < i; j++){
			if(j == satir - 1){
				break;
			}
			printf("*");
		}
		printf("\n");
		x += -1;
	}
	x += 2;
	for(int i=1; i<satir; i++)
	{
		for(int j = 0; j < satir - i; j++){
			printf("*");
		}
		for(int j = 0; j < x * 2 - 3; j++){
			printf(" ");
		}
		for(int j = 0; j < satir - i; j++){
			if(j == satir - 1){
				break;
			}
			printf("*");
		}
		printf("\n");
		x += 1;
	}

	return 0;
}



