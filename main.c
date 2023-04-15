#include <stdio.h>
#include <stdlib.h>


int main() {
	/*Kullanýcýdan bir cümle girmesini isteyin.
	Girilen cümle içindeki harflerin kaç kere yazýldýðýný
	ekrana bastýrýn.*/
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
	for (int k = 97; k <= 122; k++) {	//burasý cok komplike oldu
		for (int i = 0; i < k; i++) {
			if ((char)k == a[i]) {
				if (p != 1) {
					printf("%c harfi ", a[i]);
				}
				p = 1;
				m++;
				d = 1;
			}
		}
		if (d == 1) {
			l[o] = m;

			//yukarýnýn devami
			printf("%d kez var.", l[o]);
			printf("\n");

			m = 0;
			o++;
			p = 0;
		}
		d = 0;
	}
	//en cok hangisi tekrar etmis
	for (int i = 0; i < k; i++) {
		if (ec <= l[i]) ec = l[i];
	}
	printf("\nen cok tekrar eden :%c", a[ec]);
}
