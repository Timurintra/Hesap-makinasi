#include <stdio.h>
#include <stdlib.h>

/*Hesap makinesi*/

int main() 
{
	int a,b,sonuc;
	int islem;
	
	printf("Lutfen islem yapmak istediginiz ilk sayiyi girin : ");
	scanf("%d",&a);
	
	printf("Lutfen islem yapmak istediginiz ikinci sayiyi girin : ");
	scanf("%d",&b);
	
	printf("Lutfen hangisini kullanacaginizi giriniz : \n" );
	printf("Toplama icin 1 : \n");
	printf("Cikarma icin 2 : \n");
	printf("Carpma icin 3 : \n");
	printf("Bolme icin 4 : \n");
	scanf("%d",&islem);
	
	
	switch(islem)
	{
		case 1:
			printf("sonuc=%d",a+b);
			break;
		case 2:
			printf("sonuc=%d",a-b);
			break;
		case 3:
			printf("sonuc=%d",a*b);
			break;
		case 4:
			printf("sonuc=%d",a/b);
			break;
		default:
		printf("Hatali secim");
		break;	
	}
	return 0;
}
