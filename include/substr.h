#ifndef SUBSTR_H
#define SUBSTR_H

#include "types.h"
#include "string.h"
#include "kb.h"
#include "screen.h"

void substring(string ch1)
{
string ch2="the spread of computers and the internet will put jobs in two categories. people who tell computers what to do, and people who are told by computers what to do . computers are like air conditioners, they work fine until you start opening windows .  hello.";


uint8 i=0,j=0,k=0,f=0,n=0;
string result;
uint8 len2=strlength(ch2);uint8 len1=strlength(ch1);
for(f=0;1;f++){
		if(ch2[f]=='\0')break;
	
			if(ch2[f]=='.'){	
				
				result[n]='\0';i++;n=0;j=0;
				uint8 len3=strlength(result);
				for(i=0;i<len3;i++){
					if(result[i]==ch1[j]){
					for(k=i,j=0;k<len3 && j<len1;j++,k++)
						if(result[k]!=ch1[j])break;
						if(j==len1){print(result);print("\n");break;}


					}
					}
				}else{
				result[n]=ch2[f];
				n++;}
		
		
		}

}

void screen_substr(string str) {
    string vidmem = (string) 0xb8000;
	uint8 len = strlength(str);
	uint32 i, j, found;
	
	for (i=0; i<(cursorY-1)*sw*2-len*2; i+=2) {
		found = 1;
		for (j=0; j<len; j++) {
			if (vidmem[i+j*2] != str[j]) {
				found = 0;
				break;
			}
		}
		if (found) break;
		found = 0;
	}
	
	if (found) {
		for (j=0; j<len*2; j+=2) {
			vidmem[i+j+1] = 0xF0;
		}
		print("Substring found!\n");
	} else {
		print("Substring not found :(\n");
	}
	
}

#endif
