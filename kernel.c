#include "include/screen.h"
#include "include/kb.h"
#include "include/substr.h"
#include "include/string.h"

kmain()
{
       clearScreen();
	//string pass1 = "1234" ; 
       print("Welcome to TTM operating system\nPlease enter a command\n");
	/*print("lets login first, TASMIA\n");
	while(1){
		print("enter password: ");
	string res = readStr();
	print(res);
	

	print("try again\n");break;
	}*/
string ch = 0;

       while (1)
       {
                print("\nTTM root> ");
                
                ch = readStr();
		string firstword;
		uint8 n = 0, i , j = 0,len=0,l=0;
		/*for( i = 0 ; 1 ; i++ ){
		if( ch[i] == '\0')break;
		if(n==0){if(ch[i] == '\0')break;
			if(ch[i] == ' '){	
				
				firstword[j]='\0';n++;i++;break;
				
				}else{
				firstword[j]=ch[i];
				j++;}
		}
		
		}*/
		if(strEql(ch,"grep"))
                {	
			print("\ngrep: what do you want to search\n");string re = readStr();
			substring(re);
                       
                }
		else if(strEql(ch,"scrnsrc"))	
                {
			print("\nyou are in screen seach: what do you want to search\n");
			string se = readStr();screen_substr(se);
                        
                }
		else if(strEql(ch,"powershell")||strEql(ch,"cmd"))
                {
                        print("\nYou are already in TTM POWERSHELL\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearScreen();
                }
                else if(strEql(ch,"exit"))
                {
                        break;
                }
		else if(strEql(ch,"cursor"))
                {
			cursorX = 14;
			cursorY = 20;
                        updateCursor();
			print("cursor updated");
                }
                
                else
                {
                        print("\nBad command!\n");
                }
                
                print("\n");        
       }
        
}
