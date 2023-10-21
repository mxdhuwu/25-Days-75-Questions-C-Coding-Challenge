#include <stdio.h>
#include <math.h>
int checkOctal(int);
long long convertOctalToDecimal(int);
int main() 
{
    int octalNumber;
    int condition;
    do 
	{
        printf("Enter an octal number: ");
        scanf("%d", &octalNumber);
        condition = checkOctal(octalNumber);
        if (!condition) 
		{
            printf("%d is not an octal number!\n", octalNumber);
        }
    } while (condition == 0);
    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));
    return 0;
}

int checkOctal(int octalNumber) 
{
    int remainder;
    while(octalNumber != 0) 
	{
        remainder = octalNumber % 10;
        if (remainder >= 8) 
		{
            return 0;
        }        
        octalNumber/= 10;
    }
    return 1;
}

long long convertOctalToDecimal(int octalNumber) 
{
    int decimalNumber = 0, i = 0;
    while(octalNumber != 0) 
	{
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    return decimalNumber;
}
