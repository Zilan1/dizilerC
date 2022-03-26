#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 	
    int dizi[100];
    int i,sayi,toplam=0,ort=0;
    
	printf("Eleman Sayisi: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d.degeri: ",i+1);
		scanf("%d",&dizi[i]);
	    toplam=toplam+dizi[i];
	}
      
        ort=toplam/sayi;
	
	printf("Degerlerin Toplami: %d\n",toplam);
	printf("Degerlerin Ortalamasi: %d",ort);
	
	return 0;
}
