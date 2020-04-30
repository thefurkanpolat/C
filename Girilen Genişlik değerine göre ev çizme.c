
#include <stdio.h>

int main()
{
    int genislik,yukseklik,catiyuk,kapiyuk;
    printf("Genislik giriniz");
    scanf("%d",&genislik);
    yukseklik=genislik/2;
    catiyuk=genislik/4+1;
    kapiyuk=catiyuk/2+1;
    int deger=yukseklik,deger2=0,sifirlama=0;
    for(int i=1;i<=catiyuk;i++)
    {
        printf("%d ",i);
        //Çatının sol kısmı başlangıç
        for(int j=1;j<=yukseklik;j++)
        {
            if(j<=deger)
            { 
                printf(" ");
            }
             else
            {
                 printf("/");
            }
        }
        deger-=2;//Bu değer değişkeni vereceğimiz boşluk sayısını bulmamıza yardımcı oluyor.
        printf("+");
        //Çatının sol kısmı bitiş
         
        //Çatının sağ kısmı başlangıç
        for(int j=1;j<=yukseklik;j++)
          {
            
            if(j>deger2)
            {  
                printf(" ");
               
            }
            else
            {
                
                 printf("%c",92);
            }
                  
          }
        deger2+=2;
        
        printf("\n");
        //Çatı sağ alan bitiş
        
    }
     //Çatı Alanı Bitiş
    //Evin orta alanı Başlangıç
    for(int i=1;i<=yukseklik;i++)
        {
            if(sifirlama!=10){
                printf("%d ",sifirlama);
                sifirlama++;
            }
            else{
                sifirlama=0;
                printf("%d ",sifirlama);
                sifirlama++;
            }
             //Pencere Alanı başlangıç
            if(i>3&&i<=kapiyuk+3){//^3.Satırdan sonra pencere çizmesi için bu sorguyu yazıyoruz.
                for(int j=1;j<=genislik;j++)
                {
                    if(j<=5)
                    {
                         printf("O");
                    }
                       
                    else if(j>5&&j<=5+catiyuk)
                    {

                         if(i==(kapiyuk)/2+3+1){/*Burada ilk 3 satır sabit olduğu için 
                         kapı yukseliğin ortasını buluyouruz ve üzerine 3 ekliyoruz tam sayı içinde 1 ekliyoruz.*/
                             printf("*");
                         }
                         else{
                             if(j==catiyuk/2+5+1){//Bu +1 ler tam orta olması içindir +5 ler ise kaçıncı sütunda olduğumuzu anlamak içindir
                                printf("*");
                            
                                }
                                else{
                                    printf(" ");
                                }
                         }
                    }
                    else if(j>catiyuk+5&&j<=catiyuk+5+7)
                    {
                         printf("O");
                    }
                    else if(j>catiyuk+5+7&&j<=catiyuk+catiyuk+5+7)
                    {
                       if(i==(kapiyuk)/2+3+1){/*Burada ilk 3 satır sabit olduğu için 
                         kapı yukseliğin ortasını buluyouruz ve üzerine 3 ekliyoruz tam sayı içinde 1 ekliyoruz.*/
                             printf("*");
                         }
                         else{
                             if(j==catiyuk/2+catiyuk+5+7+1){//Bu +1 ler tam orta olması içindir +5 ler ise kaçıncı sütunda olduğumuzu anlamak içindir
                                printf("*");
                            
                                }
                                else{
                                    printf(" ");
                                }
                         }
                    }
                    else{
                        printf("O");
                    }
                    
                        
                 
                    }
            }
            //PENCERE ALANI BİTİŞ
            
            //KAPI ALANI BAŞLANGIÇ
            else if(i>(yukseklik-kapiyuk)){//Burda kapı her zaman zeminde olacağı için evin yuksekliğinden 
                                            //Kapının yüksekliğini çıkarıyoruzki kapinin başlayacağı satırı bulalım.
                int baslangic=(genislik-catiyuk)/2;//Bu hesaplama sayesinde kapıyı ortalıyoruz
                for(int j=1;j<=genislik;j++)
                {
                    if(j<=baslangic){//Burada bulduğumuz başlangıç değerine kadar 'O' yazdırıyoruz
                        printf("O");
                    }
                        
                    else if(j>baslangic&&j<=baslangic+catiyuk){//Bu karar da kapinin boşluk alanını belirliyor
                        if(j==baslangic+(catiyuk/2)+1)//Bu kod ise kapının tam ortasına yıldız eklemek için kapi genisliğinin
                                                    //yarısı yani 9/2+1+13 olunduğunda yıldız ekliyor yani tam ortasına.
                            printf("*");
                        else
                            printf(" ");
                    }
                    else{//En son kalan yerlere ise tekrar 'O' yazdırıyoruz.
                        printf("O");
                    }
                }   
            }
            //KAPI ALANI BİTİŞ
            //PENCERE İLE KAPI ARASI BAŞLANGIÇ
            else
            {
                for(int j=1;j<=genislik;j++)
                {
                printf("O");
                }   
            }
            //PENCERE İLE KAPI ARASI BİTİŞ
     printf("\n");
        
    }
    //EVİN ORTA ALANI BİTİŞ
    //EVİN ALT ALANI BAŞLANGIÇ
    sifirlama=1;//bu değişken sayesinde solda bulunan rakamlar 10'u geçerse degiskeni sıfırlamak için.
    printf("  ");//Alt satırda fazladan iki adet boşluk lazım.
    for(int i=0;i<35;i++){
      
       if(sifirlama!=10){
                printf("%d",sifirlama);
                sifirlama++;
            }
            else{
                sifirlama=0;
                printf("%d",sifirlama);
                sifirlama++;
            }
    }
    //EVİN ALT ALANI BİTİŞ
    return 0;
}






