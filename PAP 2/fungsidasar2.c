#include "fungsidasar2.h"

void swapNumber(int *num1, int *num2)
{
    int simpan;
    simpan=*num1;
    *num1=*num2;
    *num2=simpan;
}

int sumOfDigits(int digit)
{
    int sum=0;
    while(digit>0){sum=sum+digit%10; digit=digit/10;};
    return sum;
}

void printPrimes(int num)
{
    int c=1, d, e;
    while(c<=num){e=0;
            for(d=1; d<=c; d++){
                if(c%d==0){e=e+1;}
            }
        if(e==2){printf("%d ", c);}
        else{printf("");}
        c++;
    }
    printf("\n\n");
}

int textPalindrome(char text[])
{
    int chek[30];
    strcpy(chek,text);
    strrev(chek);
    if(strcmp(chek,text)==0){return 1;}
    else {return 0;}
}

int numPalindrome(int num)
{
    int simpan=0, c;
    c=num;

    while(c!= 0){
        simpan = simpan * 10;
        simpan = simpan + c%10;
        c = c/10;
    }
    if(num==simpan){return 1;}
    else{return 0;}
}

void printfPascal(int row)
{
    int kolom, baris;
    int nilai[row][row];
    int jarak;
    int jarak1=row;
    for(baris=0; baris<row; baris++)
    {
        for(jarak=jarak1; jarak>=0; jarak--)
        {
            printf("  ");
        }
        for(kolom=0; kolom<=baris; kolom++)
        {nilai[baris][kolom]=nilai[baris-1][kolom]+nilai[baris-1][kolom-1];
            if(kolom==baris||kolom==0)nilai[baris][kolom]=1;
            printf("  %d ",nilai[baris][kolom]);
        }
        jarak1--;
        printf("\n\n");
    }
}
