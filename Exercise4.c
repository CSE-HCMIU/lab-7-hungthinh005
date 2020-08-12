/*
4. Input 2 binary number using string then return the sum of those two.
Result should use string.
Ex:
 __________________________________________________________
| Input: 111  11                                           |
| Output: 1010                                             |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex4(char s1[], char s2[]){
	//your codes here
	int b1, b2, d1=0, d2=0, b3=0, d3, p=0, i=0, j=1, rem;
	b1 = atoi(s1);
	b2 = atoi(s2);
	while(b1 != 0)
	{
		rem = b1 % 10;
        b1 = b1 / 10;
        d1 = d1 +  rem*pow(2, p);
        ++p;
	}
	
	while(b2 != 0)
	{
		rem = b2 % 10;
        b2 = b2 / 10;
        d2 = d2 +  rem*pow(2, i);
        ++i;
	}
	
	d3 = d1 + d2;

	char s3[20];
	itoa(d3,s3,2);
	printf("%s",s3);
}

int main(int argc, char *argv[]) {
	char n1[] = "111";
    char n2[] = "11";
    ex4(n1,n2);
		
	return 0;
}
