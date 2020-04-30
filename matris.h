#include "math.h"
#include "malloc.h"

void Topla(int* A, int* B, int* C, int N) {


    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {
            *C = *A + *B; 
            A++;
            C++;
            B++;
        }


    }
  
}
void Cikar(int* A, int* B, int* C, int N) {


    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {
            *C = *A - *B;
         
            A++;
            C++;
            B++;
        }


    }
}
void Carp(int* A, int* B, int* C, int N) {
    int toplam = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int x = 0;//Bu değişkenin amacı, ikinci matrisin sütunlarını belirlemek için adresinin N kadar artırılmasıdır, ancak sütunların ilk değerleri sabittir o nedenle X başlangıçta 0'dır.
            for (int k = 0; k < N; k++)
            {
                toplam += *(A + k) * *(B + x);//Burada A'nın "A+k"'nıncı elemanı ve B'nin (B+x)'ci elemanı çarpılıp toplam değişkenine atılıyor.


                x += N;//Burada x değişkeni başlangıçta 0 iken ilk tekrardan sonra N kadar artırılıyor bu sayede B matrisi 0. indisten başlayıp N kadar artıyor.Bu sayede sütunlardaki adresleri alıyoruz.
            }
            *C = toplam;//Bu Yukarıdaki A matrisinin Satır ile B matrisinin sütunlarındaki değerleri çarpar
            toplam = 0;//Toplam değişkenini sıfırlıyoruz.
            C++;//C matrisinin bir sonraki adres değerini alıyoruz.
            B++;//B matrisinin ilk sütunundaki değerler çarpıldıktan sonra ikinci sütununa geçiyoruz.
        }

        A += N;//Burada ilk A matrisinin bir sonraki satırına geçilmesi için N kadar sonraki adrese tanımlıyoruz.
        B -= N;//Burada yukarıdaki döngüde B adresi N kadar arttığı için bir sonraki döngüde tekrardan başa dönmesi için N kadar azaltıyoruz.
    }

}
int determinant(int* A,int N)
{   //Burada işlemlerde kullanacağımız işaret değeri , toplam, sayac ve geçici dizi pointeri var.
    int isaret=1, toplam=0, sayac=0, *alt_dizi;
    int yeni_boyut, yeni_konum, konum;//Burada geçici dizimizde kullanacağımız adres ve boyut bilgileri var
    if (N == 1)
        return(A[0]);
    for (int i = 0; i < N; i++,isaret*=-1)//N kadar dönecek olan döngümüz ve her işlem basamağında işaret değişiyor.
    {
        yeni_boyut = (N - 1) * (N - 1);//Yeni boyut değişkenine N den bir aşağı değerle çarparak yeni dizimizin boyutunu belirliyoruz.
        alt_dizi = calloc(yeni_boyut, 2);//Alt dizi pointerine ram'da yeni boyut kadar yer ayırıyoruz
        for (int j = 0;  j < N;  j++)
        {
            
            for (int k = 0, sayac = 0; k < N; k++)
            {
                if (k == i)
                    continue;
                konum = j * N + k;//A matrisinin kaçıncı elemanını kullanacağımızı belirliyoruz.
                yeni_konum = (j - 1) * (N - 1) + sayac;//Geçici matrisin kaçıncı değerini eşitleyeceğimizi belirliyoruz
                alt_dizi[yeni_konum] = A[konum];
                sayac++;
            }
        }
        toplam += A[i] * isaret * determinant(alt_dizi, N - 1);//Burada  fonksiyona tekrar parametre olarak N'i bir azaltıyor ve geçici dizimizi yolluyoruz.
        
    }
   
    return (toplam);
}
void yazdir(int boyut,int dizi[]) {
    for (int i = 0; i < boyut; i++)
    {
        printf("%d\n", dizi[i]);
    }
}