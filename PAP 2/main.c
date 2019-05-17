#include "fungsidasar2.h"

int main()
{
    int menu;
    printf("PILIHAN MENU\n\n");
    printf("1. swapNumber\n");
    printf("2. sumOfDigits\n");
    printf("3. printPrimes\n");
    printf("4. textPalindrome\n");
    printf("5. numPalindrome\n");
    printf("6. printfPascal\n");
    printf("\nMasukkan pilihan : "); scanf("%d", &menu);
    printf("\n");

    switch(menu)
    {
    case 1:
        printf("\t\tSWAP NUMBER (input a,b,c,d,e,f)\n\n");
        int a,b,c,d,e,f;
        printf("input a : "); scanf("%d", &a);
        printf("input b : "); scanf("%d", &b);
        printf("input c : "); scanf("%d", &c);
        printf("input d : "); scanf("%d", &d);
        printf("input e : "); scanf("%d", &e);
        printf("input f : "); scanf("%d", &f);
        swapNumber(&a,&b); printf("\nswapNumber (a,b) -> a = %d, b = %d\n\n", a, b);
        swapNumber(&c,&d); printf("swapNumber (c,d) -> c = %d, d = %d\n\n", c, d);
        swapNumber(&e,&f); printf("swapNumber (e,f) -> e = %d, f = %d\n\n", e, f);
        break;

    case 2:
        printf("\t\tSUM OF DIGITS (input 4 kali)\n\n");
        int angka;
        int kali;
        for(kali=0; kali<4; kali++){
        printf("input angka : "); scanf("%d", &angka);
        printf("sumOfDigits (%d) -> %d\n\n", angka, sumOfDigits(angka));
        };
        break;

    case 3:
        printf("\t\tPRINT PRIMES (input 2 kali)\n\n");
        int angka1;
        int k;
        for(k=0; k<2; k++){
        printf("input angka : "); fflush(stdin); scanf("%d", &angka1);
        printPrimes(angka1);}
        break;

    case 4:
        printf("\t\tTEXT PALINDROME (input 4 kali)\n\n");
        char teks[20];
        int kali2;
        for(kali2=0; kali2<4; kali2++){
        printf("masukkan kata/kalimat : "); fflush(stdin); gets(teks);
        printf("textPalindrome ('%s') -> %s\n", teks, (textPalindrome(teks)==1)?"true":"false");
        };
        break;

    case 5:
        printf("\t\tNUM PALINDROME (input 4 kali)\n\n");
        int angka2;
        int kali3;
        for(kali3=0; kali3<4; kali3++){
        printf("masukkan angka : "); scanf("%d", &angka2);
        printf("numPalindrome (%d) -> %s\n", angka2, (numPalindrome(angka2)==1)?"true":"false");
        };
        break;

    case 6:
        printf("\t\tPRINTF PASCAL (input 2 kali)\n\n");
        int baris;
        int kali4;
        for(kali4=0; kali4<2; kali4++){
        printf("jumlah baris : "); scanf("%d", &baris);
        printfPascal(baris);
        };
        break;

    };

    return 0;
}
