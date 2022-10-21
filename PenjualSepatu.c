#include <stdio.h>
#include <string.h>

int main(){
    int banyakSepatu, cek;
    cek = 0;

    scanf("%d", &banyakSepatu);
    int ukuran[banyakSepatu];

    //input array
    for(int i = 1; i <= banyakSepatu; i++){
        scanf("%d", &ukuran[i]);
    }

    //shorting
    for(int i = 1; i <= banyakSepatu-1; i++){
        for(int j = i+1; j <= banyakSepatu; j++){
            if(ukuran[i] >= ukuran[j]){
                int swab;
                swab = ukuran[i];
                ukuran[i] = ukuran[j];
                ukuran[j] = swab;
            }
        }
    }
    
    //mengecek pasang sepatu
    for(int i = 1; i <= banyakSepatu-1; i++){
        for(int j = i+1; j <= banyakSepatu; j++){
            
            if(ukuran[i] == ukuran[j]){
                cek++;
                i++;

                break;
            }

        }
    }

    printf("Terdapat %d pasang sepatu", cek);
    return 0;
}