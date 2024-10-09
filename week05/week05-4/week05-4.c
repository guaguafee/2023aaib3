/// WEEK05-4.c
/// UV10222 Decode the Mad Men
#include <stdio.h>
#include <string.h> ///Step05: strchr(s, c) not use here!
#include <ctype.h> ///Step04: tolower
int main()
{
	/// Step03: keyboard keys
	char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	/// Step01: Input
	while(scanf("%c", &c) == 1){
		c = tolower(c); ///Step04
		if(c==' ' || c=='\n') printf("%c", c);
		else{
			c = *(strchr(s,c)-2);
			printf("%c", c);
