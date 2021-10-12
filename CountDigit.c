#include <stdio.h>
#include <conio.h>

#define BASE 10 
void countdigit(num)
{
	long long n;
    int i, lastDigit;
    int freq[BASE];

    
    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

    
    n = num; 

    
    while(n != 0)
    {
                                                                 
        lastDigit = n % 10;

        
        n /= 10;

        
        freq[lastDigit]++;
    }

    
    printf("Occurances of each digit in %lld is: \n", num);
    for(i=0; i<BASE; i++)
    {
        printf("Occurance of %d = %d\n", i, freq[i]);
    }

	
}
void  main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];
    printf("Enter any number: ");
    scanf("%lld", &num);


    countdigit(num);

    
    
    getch();
}
