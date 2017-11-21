#include <stdio.h>
int main(){
	int tl,dl,eu,pd;
	printf("Cevirmek istediginiz TL miktarini girin : ");
	scanf("%d",&tl);
	printf("Dolar olarak tutari : %.3f\n",tl/3.95);
	printf("Euro olarak tutari : %.3f\n",tl/4.65);
	printf("Pound olarak tutari : %.3f",tl/5.25);
}
