#include <stdio.h>

int main( ) {
	int secim;
	
	printf("1-Arac ekle, 2-Araclari listele, 3-Çikis secimlerinden birini yapiniz.");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			aracekleme();
			break;
		case 2:
			araclistele();
			break;
		case 3:
			cikis();
			break;
		default:
			break;
	}
}


int aracekleme(){
	
}

int araclisteleme(){
	
}

int cikis(){
	
}
