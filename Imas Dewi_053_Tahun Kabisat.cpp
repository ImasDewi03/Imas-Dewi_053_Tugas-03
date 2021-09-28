#include <iostream>
#include <conio.h>
int main (void){
	int tahun;
		printf("\n menghitung tahun kabisat");
	printf("\n masukkan tahun = ");
	scanf("%d", &tahun);
	if((tahun%4== 0)&& (tahun %100 !=0))
	{
		printf("\n tahun kabisat")
	;}
	else if (tahun % 400 ==0)
	{
		printf("\n merupakan tahun kabisat");
	}
	else if (tahun % 400!=0)
	{
		printf("\n bukan tahun kabisat");
	}
	
	getch ();
}
