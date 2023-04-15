#include <stdio.h>
#include <stdlib.h>


int main() {
	/*Kullanıcıdan bir cümle girmesini isteyin.
	Girilen cümle içindeki harflerin kaç kere yazıldığını
	ekrana bastırın.*/
	char a[100];
	int k,l[34],o=0,m=0,d=0,p=0,ec=0;		//puts direkt yazdirmak istersek :!
	printf("bir cumle girin:"); gets(a);
	k = strlen(a);
	for (int i = 0; i < k; i++) {		//hepsini kucuk alayim beni zorlamasin
		a[i] = tolower(a[i]);
	}
	for (int i = 0; i < k; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
	for (int k = 97; k <= 122; k++) {	//harflerin ascii karsiliklarini bulalim
		for (int i = 0; i < k; i++) {
			if ((char)k == a[i]) {
				if (p != 1) {
					printf("%c harfi ", a[i]);
				}
				p = 1;		//eger bulursun p=1 yaparak tekrar tekrar bu harfi yazmasin
				m++;		//kac kez varsa her dongude m artiyor
				d = 1;		//d=1 yaparak asagidaki kosula girsin p eski haline donsun harf var mi yok mu onu teyit edecek
			}
		}
		if (d == 1) {
			l[o] = m;

			//yukarının devami
			printf("%d kez var.", l[o]);		//kac kez var ise yaziyor
			printf("\n");

			m = 0;		//sifirlamam gerek diger harf icin
			o++;		//diger dizine gecsin her harf icin index tutmasin
			p = 0;		//p eski haline donsun 
		}
		d = 0;
	}
	//en cok hangisi tekrar etmis
	for (int i = 0; i < k; i++) {
		if (ec <= l[i]) ec = l[i];
	}
	printf("\nen cok tekrar eden :%c", a[ec]);
}
