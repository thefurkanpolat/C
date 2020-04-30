#include <stdio.h>
int main()
{
            //Kullanılcak degiskenler
            float xsmall,ysmall,ylarge,xlarge,nl,ns,ps,pl,x,y;
            printf("X Değeri giriniz: ");
            scanf("%f",&x);
            printf("Y Değeri giriniz:");
            scanf("%f",&y);
            //Kullanılacak kurallara göre small ve large'nin değer aralıkları.
            int xsmbase = -2,xsmfinal = 2 ,xlargebase=0,xlargefinal=4;//Burası x kuralının small ve large sınırlarını belirliyor.
            int ysmbase=-10,ysmfinal=10,ylabase=0,ylafinal=20;//Bu satır ise y kuralının small ve large sınırlarını belirliyor.
            
            //Y VE X DEĞERLERİNİN LARGE VE SMALL DEĞERLERİNİ VEREN FONKSİYONLAR
            
            //Y SMALL DEĞERİNİ BULAN FONKSİYON BAŞLANGIÇ
            float ysmallbul(float y){
            int ortanca=(ysmbase+ysmfinal)/2;//Bu kod satırı xsmall'ın ortancasını verir
            if(y>ortanca){
                ysmall=(ysmfinal-y)/ysmfinal;//Y ortancadan büyükse small değeri en büyük small değerden y çıkarılıp en büyük small değerine bölünür.
            }
            else if(y<ortanca){
                ysmall=y/ysmfinal;//Y ortancadan küçük ise y direkt en büyük small değerine bölünür.
            }
            else  {
                ysmall=1;
            }
           return ysmall;
        }
            // Y SMALL DEĞERİNİ BULAN FONKSİYON BİTİŞ
            
            //Y LARGE DEĞERİNİ BULAN FONKSİYON BAŞLANGIÇ
            float ylargebul(float y){
            int ortanca=(ylabase+ylafinal)/2;//Bu kod satırı xlarge'ın ortancasını verir
            if(y>ortanca){
                ylarge=(ylafinal-y)/ylafinal;
            }
            else if(y<ortanca){
                ylarge=y/ortanca;
            }
            else if(y==ortanca){
                ylarge=1;
            }
          return ylarge;
        }
            //Y LARGE DEĞERİNİ BULAN FONKSİYON BAŞLANGIÇ
         
            //X SMALL DEĞERİNİ BULAN FONKSİYON BAŞLANGIÇ
            float xsmallbul(float x){
                 int ortanca=(xsmbase+xsmfinal)/2;//Bu kod satırı xsmall'ın ortancasını verir
                 if(x>ortanca){
                 xsmall=(xsmfinal-x)/xsmfinal;
            }
            else if(x<ortanca){
                xsmall=x/xsmfinal;
            }
            else  {
                xsmall=1;
            }
           return xsmall;
        }
            //Y SMALL DEĞERİNİ BULAN FONKSİYON BİTİŞ
            
            //X LARGE DEĞERİNİ BULAN FONKSİYON BAŞLANGIÇ
            float xlargebul(float x){
            int ortanca=(xlargebase+xlargefinal)/2;
            if(x>ortanca){
                xlarge=(xlargefinal-x)/xlargefinal;
            }
            else if(x<ortanca){
                xlarge=x/ortanca;
            }
            else if(x==ortanca){
                xlarge=1;
            }
           return xlarge;
        }
         //X LARGE DEĞERİNİ BULAN FONKSİYON BİTİŞ
        //FONKSİYONLAR BİTİŞ
        printf("\nX'in Large değeri:%f \nX'in Small değeri:%f\nY'nin Large değeri:%f\nY'nin Small değeri:%f\n",xlargebul(x),xsmallbul(x),ylargebul(y),ysmallbul(y));
        printf("---------------------------------------------------------------\n");
        //Her büyüklük küçüklük kontrol edilirken her seferinde fonksiyon çağırmamak için değerleri değişkenlere atıyoruz.
        xsmall=xsmallbul(x);ysmall=ysmallbul(y);xlarge=xlargebul(x);ylarge=ylargebul(y);
         // 1) NL Kontrolü
         if (xsmall<=ysmall)
             nl=xsmall;
        else
             nl=ysmall;
        // 2) NS Kontrolü
         if (xsmall<=ylarge)
             ns=xsmall;
        else
             ns=ylarge;
       // 3) PS Kontrolü
         if (xlarge<=ysmall)
             ps=xlarge;
        else
             ps=ysmall;
      // 4) PL Kontrolü
         if (xlarge<=ylarge)
             pl=xlarge;
        else
             pl=ylarge;

 printf("NL Degeri:%f\nNS Degeri:%f\nPS Degeri:%f\nPL Degeri:%f",nl,ns,ps,pl);
 printf("\n---------------------------------------------------------------\n");
 //SUGENO'S WEIGHT
 float sonuc=(nl*-4+ns*-2+ps*2+pl*4)/(nl+ns+ps+pl);
 printf("SUGENO'S WEIGHT(virgüllü hali):%f",sonuc);

   

    return 0;
}









