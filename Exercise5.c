/*
5. Consider a T9 phone keypad layout (i.e. numeric key 2 is also used to input a, b or c),
1 and 0 are considered empty characters. Write a program to input a series of keypads pressed
then output the possible combinations of letters.
Ex:
 ______________________________________
| Input: 36                            |
| Output: dm dn do em en eo fm fn fo   |
|______________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex5(char s[]){
	//your codes here
	
	char k1[SIZE],k2[SIZE];
	int s0,s1,s2;
	s0 = atoi(s);
	s1 = s0/10;
	s2 = s0%10;
	switch (s1){
		case 2:
			k1[0] = 'a';
			k1[1] = 'b';
			k1[2] = 'c';
			k1[3] = '\0';
			break;
		case 3:
			
			k1[0] = 'd';
			k1[1] = 'e';
			k1[2] = 'f';
			k1[3] = '\0';
			break;
		case 4:
			k1[0] = 'g';
			k1[1] = 'h';
			k1[2] = 'i';
			k1[3] = '\0';

			break;
		case 5:
		
			k1[0] = 'j';
			k1[1] = 'k';
			k1[2] = 'l';
			k1[3] = '\0';
			
			break;
		case 6:

			k1[0] = 'm';
			k1[1] = 'n';
			k1[2] = 'o';
			k1[3] = '\0';
			break;
		case 7:
			
			k1[0] = 'p';
			k1[1] = 'q';
			k1[2] = 'r';
			k1[3] = 's';
			k1[4] = '\0';
			
			break;
		case 8:
			
			k1[0] = 't';
			k1[1] = 'u';
			k1[2] = 'v';
			k1[3] = '\0';
			
			break;
		case 9:
		
			k1[0] = 'w';
			k1[1] = 'x';
			k1[2] = 'y';
			k1[3] = 'z';
			k1[4] = '\0';
			break;
	}
	switch (s2){
		case 2:
			k2[0] = 'a';
			k2[1] = 'b';
			k2[2] = 'c';
			k2[3] = '\0';
			break;
		case 3:
		
			k2[0] = 'd';
			k2[1] = 'e';
			k2[2] = 'f';
			k2[3] = '\0';
			break;
		case 4:
			k2[0] = 'g';
			k2[1] = 'h';
			k2[2] = 'i';
			k2[3] = '\0';

			break;
		case 5:
		
			k2[0] = 'j';
			k2[1] = 'k';
			k2[2] = 'l';
			k2[3] = '\0';
			
			break;
		case 6:

			k2[0] = 'm';
			k2[1] = 'n';
			k2[2] = 'o';
			k2[3] = '\0';
			break;
		case 7:
			
			k2[0] = 'p';
			k2[1] = 'q';
			k2[2] = 'r';
			k2[3] = 's';
			k2[4] = '\0';
			
			break;
		case 8:
			
			k2[0] = 't';
			k2[1] = 'u';
			k2[2] = 'v';
			k2[3] = '\0';
			
			break;
		case 9:
		
			k2[0] = 'w';
			k2[1] = 'x';
			k2[2] = 'y';
			k2[3] = 'z';
			k2[4] = '\0';
			break;
	}
	int i,j;
	for(i = 0; i< strlen(k1);i++)
	{
		for(j = 0; j<strlen(k2);j++)
		{
			printf("%c%c ",k1[i],k2[j]);
		}
	}
		
}

int main(int argc, char *argv[]) {
	char k[]="29";
    ex5(k);
	return 0;
}
