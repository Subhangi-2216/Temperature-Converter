#include<stdio.h>
#include<ctype.h>

int converterchoose(char choice1,char choice2);
float converter(int a,float measurement);
main()
{
    int conchoice;
    float measurement,result;
    char choice1,choice2,reset;
    do{
    printf("\n\t\t\t        Temperature Converter.");
    printf("\n\t\t\tBy Subhangi Lamichhane");
    printf("\n\t\t\t DONOT PRESS ENTER INSTANTLY.  GIVE INPUT SLOWLY!!!");
    printf("\n\n\n");
    printf("\n\t\t\t        Inputs for Units are:");
    printf("\n\t\tCelcius = \"C\"     Kelvin = \"K\"    Farenheit = \"F\"");
    printf("\n\t\t\tFrom which unit you want to convert? --->");
    choice1 = toupper(getch());
    putch(choice1);
    printf("\n\t\t\tTo which unit you want to convert to? --->");
    choice2 = toupper(getch());
    putch(choice2);
    printf("\n\t\t\tEnter the value :");
    scanf("%f",&measurement);
    conchoice = converterchoose(choice1,choice2);
    result = converter(conchoice,measurement);
    if(result!=999.0){
    printf("\n\n\t\t\tConverted Value:");
    printf("\n\t\t\t %f %c = %f %c",measurement,choice1,result,choice2);
    }
    else{
        printf("\n\t\t\t INVALID INPUT!");
    }
    printf("\n\t\t\t Use again?");

    printf("\n\t\t\t(Y to use again.)");
    printf("\n\t\t\t(Any other key to end.)");
    reset=toupper(getchar());
    printf("\n\n\n");
    }while(reset =='Y');
}


int converterchoose(char choice1,char choice2)
{
    int number;
    if(choice1=='C' && choice2=='K')
    {
        return 1;
    }
    if(choice1=='K' && choice2=='C')
    {
        return 2;
    }
    if(choice1=='F' && choice2=='C')
    {
        return 3;
    }
    if(choice1=='C' && choice2=='F')
    {
        return 4;
    }
    else
    {
        return 0;
    }
}

float converter(int a,float measurement)
{
    float converted;
    if(a==1)
    {
        converted = (float) measurement + 273.15;
        return converted;
    }
    if(a==2)
    {
        converted = (float)measurement - 273.15;
        return converted;
    }
    if(a==3)
    {
        converted = (float)(measurement-32)* 5.0/9;
        return converted;
    }
    if(a==4)
    {
        converted = (float) (9.0/5) * measurement + 32;
        return converted;
    }
    else
    {
        return 999.0;
    }
}
