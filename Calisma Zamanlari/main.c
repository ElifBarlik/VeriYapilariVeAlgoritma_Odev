#include <stdio.h>

int Search(int A[], int N, int sayi){
    int i = 0;//1 kez

    while (i < N){ //n+1 kez
        if (A[i] == sayi) //n kez
			break;
        i++; //n kez
    }

    if (i < N) //1 kez
		return i;
    else //1 kez
		return -1;
}

//T(n)=1+(n+1)+n+n+1+1
//T(n)=3n+4

// En iyi calisma zamani: BigO(1) oldugunda --> T(1)=7

// Ortalama calisma zamani: Döngü n / 2 kez calistiginda --> T(n/2)=1.5n+4

// En kotü calisma zamani: Döngü n kez calistiginda --> T(n) = 3n + 4
int main() {
    printf("Elif Barlik - 1220505020\n");
    
    return 0;
}
