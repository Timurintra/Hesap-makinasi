#include <stdio.h>
#include<conio.h>                           
int topla(int x, int y);
int cikar(int x, int y);                     
int carp(int x, int y);
float bol(int x, int y);                      
int mod_al(int x, int y);
void uyari();                    
main() 
{
	int x, y;
	int tercih;
	printf("Islem yaptirmak istediginiz iki sayiyi girin...\n");
	scanf("%d %d",&x,&y);
	printf("Hangi iþlemi yapmak istiyorsunuz?\n");
	printf("Toplama icin 1\nCikarma icin2\nCarpma icin3\nBolme icin4\nMod alma icin5\n'e basiniz!\n");
	scanf("%d",&tercih);
	if(tercih==1)                             printf("%d + %d = %d'dir.\n",x,y, topla(x,y));
	else if(tercih==2)                        printf("%d - %d = %d'dir.\n",x,y, cikar(x,y));
	else if(tercih==3)                        printf("%d * %d = %d'dir.\n",x,y, carp(x,y));
	else if(tercih==4)                        printf("%d / %d = %f'dir.\n",x,y, bol(x,y));
	else if(tercih==5)                        printf("%d mod %d = %d'dir.\n",x,y, mod_al(x,y));
	else                                      uyari();
	getch();
}
    int topla(int x, int y) {
    	return x+y;
	}                    
    int cikar(int x, int y) {
    	return x-y; 
	}                    
    int carp(int x, int y) {
    	return x*y;
	}                     
    float bol(int x, int y) {
    	return x/y;
	}                     
    int mod_al(int x, int y) {
    	return x%y;   
	}                     
    void uyari() {
    	printf("Yanlis bir secim yaptiniz...\n");
	}
