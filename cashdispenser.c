#include <stdio.h>
#include <string.h>


int main(){
	char isim[5]="ali";
	int parola=1234;
	char istenenisim[5];
	int istenenparola;
	int bakiye=100;
	int islem;
	int yatirilanpara;
	int cekilenpara;
	
	printf("bankamatik\nadinizi giriniz:");
	scanf("%s",&istenenisim);
	printf("parola giriniz:");
	scanf("%d",&istenenparola);
	
	if(strcmp(isim,istenenisim)==0 && istenenparola==parola){
		printf("\nkullanici bilgileri eslesmistir");
		printf("\n[1]para yatirma\n[2]para cekme\n[3]kullanici bilgilerini goruntule");
		printf("\nbir islem seciniz:");
		scanf("%d",&islem);
		if(islem==1){
			printf("para yatirma islemi yapmaktasiniz\nyatirilacak para miktarini giriniz:",yatirilanpara);
			scanf("%d",&yatirilanpara);
			bakiye=bakiye+yatirilanpara;
			printf("para yatirma islemi gerceklesmistir\nyatirilan para:%d\nkalan bakiye:%d",yatirilanpara,bakiye);
		}
		else if(islem==2){
			printf("para cekme islemi yapmaktasiniz\ncekilecek para miktarini giriniz:",cekilenpara);
			scanf("%d",&cekilenpara);
			bakiye=bakiye-cekilenpara;
			printf("para cekme islemi gerceklesmistir\ncekilen para:%d\nkalan bakiye:%d",cekilenpara,bakiye);
		}
		else if(islem==3){
			printf("kullanici bilgileri\nkullanici adi:%s\nkullanici parola:%d\nkullanici bakiye:%d",isim,parola,bakiye);

		}
		else{
			printf("yanlis secim yaptin , tekrar dene");
		}
		
	}
	else{
		printf("kullanici adi veya parola hatali");
		}
	
	return 0;
}
