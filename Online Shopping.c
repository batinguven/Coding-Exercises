#include<stdio.h>

    int toplama(int a,int b){

       int result=(a+b);
       return result;

    }
    int carpma(int a,int b){

       int result=(ab);
       return result;

    }

int main(){
   /1 biskrem-10
     2 parliament-30
     3 gazete-3.5
     4 alışverişi sonlandır
   */
   int secim,adet;
   float fiyat,tutar,toptutar;

   while(secim<4){

     printf("lütfen almak istediğiniz ürün rakam kodunu giriniz:\n1:biskrem\n2:parliament\n3:gazete\n4:alişverişi sonlandir\n");
       scanf("%d",&secim);
    if(secim==1){
      fiyat=10;
    }
     else if(secim==2){
       fiyat=30;
     }
     else if(secim==3){
       fiyat=3.5;
     }
     else if(secim==4){
       printf("alışveriş tamamlandı\n");
       break;
     }


      printf("adet seciniz\n");
       scanf("%d",&adet);
     tutar=carpma(fiyat,adet);
     printf("tutar:%f\n",tutar);

     toptutar=toplama(toptutar,tutar);
     }
    printf("ödeyeceğiniz toplam tutar:%f",toptutar);


 return 0;

  }