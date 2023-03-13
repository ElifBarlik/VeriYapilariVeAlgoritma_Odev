#include <stdio.h>

int enKucukElemanBul(int dizi[],int elemanSayisi){
     int enKucuk,i;  
     enKucuk = dizi[0]; //1 kez

     for(i=0 ; i<elemanSayisi ; i++){ //i=0 --> 1 kez ,  i<elemanSayisi -->elemansayisi+1(n+1) kez , i++ -->elemanSayisi(n) kez
          if(enKucuk > dizi[i]) //n kez
               enKucuk = dizi[i];//n kez
     }

     return enKucuk; //1 kez
}

//T(n)=1+1+(n+1)+n+n+n+1
//Toplam: T(n)=4n+4



int main(){

     int dizi[]={12,-8,45,7,14,23,-25,12};
     int elemanSayisi = sizeof(dizi)/sizeof(int);

     printf("Dizinin en kucuk elemani : %d", enKucukElemanBul(dizi,elemanSayisi));
}

