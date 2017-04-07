#include <stdio.h>
#include<stdlib.h>
char* classify(char*);
int main(void) {
	char *input = "hel8lo9";
	//function bna k kru ya yhi p bta du ?? output return karade funcoktion bna de pta lag jaegaokokokok
	char *output = (char *)malloc(sizeof(char)*50);
	output = classify(input);
	printf("%s",output);
	return 0;
}

char* classify(char* input)
{
    char *output = (char *)malloc(sizeof(char)*20);
	int numeral = 0, special = 0, chars = 0;
	int i = 0;
	for(i = 0 ; input[i] != '\0' ; i++)
	{
		if(input[i] >=0 && input[i] <=9)
			numeral = 1;
		if(input[i] >='a' && input[i] <='z' || input[i] >='A' && input[i] <='Z')
			chars = 1;
		//alpha aur chars to ek hi hote h ...h.m.m special characters
		if(input[i] == '@' || input[i] == '$')	//Similarly others on keypad
			special = 1;
		//bta haha comment bna dia sun nubmta   numeral++ nhi karege count karne k lia gandi baathaha
		//bhai bat to whi h count thode krna h agar ek okb hi n umeraslu an gmy a paksshiw ord vk  lia bol rha tha
		//zruri na  h
		//kya kar rha h yrr editor bda krra tha chl chod thoda sa bacha h
		if(chars == 1 && numeral == 1)
			output = "AlphaNumeric";
		else if(chars == 1 && numeral == 0)
            output = "Character";
        printf("\nnumeral : %d, special : %d, chars : %d",numeral,special,chars);
		return output;
	}
}

