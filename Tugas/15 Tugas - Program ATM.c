/*
Program ATM
*/

#include <stdio.h>

int pinbenar = 123456;
float sisauang = 10000000;
char bhs1[][50] = {{"Silakan masukkan nomor pin anda : "},{"Please enter your pin number : "}};
char bhs2[][100] = {{"Maaf kartu anda di blokir karena salah memasukan pin 3x! "},{"Sorry your card is blocked because of incorrect pin 3x!"}};
char bhs3[][50] = {{"Maaf bahasa yang anda masukan salah "},{"Sorry the language you entered is incorrect "}};
char bhs4[][20] = {{"MENU UTAMA"},{"MAIN MENU"}};
char bhs5[][50] = {{"Pecahan Uang 50.000"},{"Denomination Of 50.000"}};
char bhs6[][50] = {{"4. Penarikan jumlah lain"},{"4. Withdrawal of other amount"}};
char bhs7[][15] = {{"5. Transfer"},{"5. Transfer"}};
char bhs8[][30] = {{"6. Informasi saldo"},{"6. Balance information"}};
char bhs9[][50] = {{"Proses transaksi sukses!"},{"Successful transaction process!"}};
char bhs10[][30] = {{"Sisa saldo anda : "},{"Your remainig balance : "}};
char bhs11[][50] = {{"Transaksi gagal, saldo tidak mencukupi"},{"Transaction failed, balance insufficient"}};
char bhs12[][20] = {{"Masukkan nominal : "},{"Input nominal : "}};
char bhs13[][50] = {{"Maaf nominal harus kelipatan 50.000"},{"Sorry nominally must be a multiple of 50.000"}};
char bhs14[][30] = {{"Masukkan no.rek tujuan : "},{"Input destionation no.rek : "}};
char bhs15[][50] = {{"Trasnfer berhasil dilakukan ke no.rek : "},{"The transfer was successfully made to : "}};
char bhs16[][50] = {{"Maaf menu yang anda masukan salah"},{"Sorry the menu you entered is incorrect"}};
char bhs17[][50] = {{"Apakah anda ingin transaksi lainnya? (y / n) : "},{"Do you want other transactions? (y / n) : "}};
char bhs18[][15] = {{"TERIMAKASIH"},{"THANKYOU"}};
char bhs19[][30] = {{"Cetak struk? (y / n) : "},{"Print receipt? (y / n) : "}};

int pilihbahasa(){
    int pil, benar = 0;

    while (benar == 0){
        printf("Silakan pilih bahasa : \n");
        printf("Please select the language : \n");
        printf("1. Bahasa Indonesia\n2. English Language\n");
        printf("-----------------------------\n");
        printf("Input : ");
        scanf("%d",&pil);
        if (pil != 1 && pil != 2){
            printf("%d",pil);
            printf("%s\n%s\n",bhs3[0],bhs3[1]);
            printf("-----------------------------\n");
        }
        else{
            benar = 1;
        }
    }
    printf("-----------------------------\n");

    return(pil - 1);
}

int cekpin(int pin, int cobapin, int pilbhs){
    while (cobapin < 3){
        printf("%s",bhs1[pilbhs]);
        scanf("%d",&pin);
        if (pin != pinbenar)
            cobapin++;
        else
            cobapin = 4;
    }

    printf("-----------------------------\n");
    return(cobapin);
}

void penarikan(int nominal, int bahasa){
    if (nominal <= sisauang && nominal % 50000 == 0){
        sisauang = sisauang - nominal;
        printf("%s\n%s%.0f\n",bhs9[bahasa],bhs10[bahasa],sisauang);
    }
    else if (nominal % 50000 != 0){
        printf("%s\n",bhs13[bahasa]);
    }
    else {
        printf("%s\n",bhs11[bahasa]);
    }
}

void transfertunai(int bahasa){
    int rek, nominal;
    printf("%s",bhs14[bahasa]);
    scanf("%d",&rek);
    printf("%s",bhs12[bahasa]);
    scanf("%d",&nominal);
    if (nominal <= sisauang){
        sisauang = sisauang - nominal;
        printf("%s%d\n%s%.0f\n",bhs15[bahasa],rek,bhs10[bahasa],sisauang);
    }
    else {
        printf("%s\n",bhs11[bahasa]);
    }
}

void cetakstruk(int bahasa){
    char cetak;
    printf("%s",bhs19[bahasa]);
    scanf("%s",&cetak);

    FILE *filestruk;
    switch (cetak){
        case 'Y':
        case 'y':
            filestruk = fopen("struk.txt", "w");
            fprintf(filestruk, "BANK UNDIKSHA\n");
            fprintf(filestruk, "=============\n");
            fprintf(filestruk, "%s%.0f\n",bhs10[bahasa],sisauang);
            fclose(filestruk);
            break;
    }
}

int main(){
    int pilbhs, pilmenu, pin, cobapin = 0, ulang;

    printf("Selamat datang di Bank Undiksha\n");
    printf("Silakan masukkan kartu anda\n");
    printf("-----------------------------\n");
    getchar();

    pilbhs = pilihbahasa();

    cobapin = cekpin(pin, cobapin, pilbhs);
    if (cobapin == 3){
        printf("%s",bhs2[pilbhs]);
        getchar();
        getchar();
        return(0);
    }

    do {
        printf("%s\n",bhs4[pilbhs]);
        printf("%s\n",bhs5[pilbhs]);
        printf("===================\n");
        printf("1. 100.000\n2. 300.000\n3. 500.000\n");
        printf("%s\n",bhs6[pilbhs]);
        printf("%s\n",bhs7[pilbhs]);
        printf("%s\n",bhs8[pilbhs]);
        printf("-----------------------------\n");
        printf("Input : ");
        scanf("%d",&pilmenu);

        if (pilmenu == 1)
            penarikan(100000, pilbhs);
        else if (pilmenu == 2)
            penarikan(300000, pilbhs);
        else if (pilmenu == 3)
            penarikan(500000, pilbhs);
        else if (pilmenu == 4){
            int nominal;
            printf("%s",bhs12[pilbhs]);
            scanf("%d",&nominal);
            penarikan(nominal, pilbhs);
        }
        else if (pilmenu == 5)
            transfertunai(pilbhs);
        else if (pilmenu == 6)
            printf("%s%.0f\n",bhs10[pilbhs],sisauang);
        else
            printf("%s\n",bhs16[pilbhs]);

        char utransaksi;
        printf("%s",bhs17[pilbhs]);
        scanf("%s",&utransaksi);

        switch (utransaksi){
            case 'Y':
            case 'y':
                ulang = 0;
                break;
            case 'N':
            case 'n':
                ulang = 1;
        }

        printf("===============================\n");
    } while (ulang == 0);

    cetakstruk(pilbhs);

    printf("%s\n",bhs18[pilbhs]);

    return(0);
}
