#include<stdio.h>
#define kurs 15000

int main()
{

	
	float dollar=0;
	printf("****Program Konversi Dollar ke Rupiah****\n");
	printf("jumlah dollar : $");
	scanf("%f",&dollar);
	
	float rupiah = dollar*kurs;
	printf("Hasil Konversi ke Rupiah : Rp%.2f",rupiah);
	return 0;
}

