//Random Password generator 

#include<stdio.h>     // The library is for basic input output function 
#include<string.h>    //  The library is for basic string related  function
#include<stdlib.h>    // The library is for rand() function
#include<time.h>      // The library is for time() function
 
int main()  
{     
     printf("********! RANDOM PASSWORD GENARATOR !**********\n");
     char sym='@';
     char str1[20]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','\0'};
     char str2[20]={'`','~','!','@','#','$','%','^','&','*','+','-','_',';',':','"','<','>','?','\0'};   
     char str3[20]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','\0'};    
     char str4[20]={'1','2','3','4','5','6','7','8','9','1','9','8','7','6','5','4','3','2','1','\0'};   
     char str5[20]={'~','!','@','#','$','%','^','^','&','*','+','_','-','/','?',':','|','/','&','\0'}; 
     char str6[20]={'T','U','V','W','X','Y','Z','t','u','v','w','x','y','z','T','U','V','W','X','\0'};  
     char str7[20]={'~','!','@','#','$','%','^','&','?','*','_','-','+',':','/','<','>','%','@','\0'}; 
     char str8[20]={'t','u','v','w','x','y','z','Y','Z','T','U','V','Z','t','u','v','w','x','y','\0'};   
     char str9[20]={'9','8','7','6','5','4','3','2','1','0','1','2','3','4','5','6','7','8','9','\0'};    
    
     char name[15];  
     int num1,num2,num3,num4,num5,num6,num7,num8,num9;
     printf("Enter Your Name: "); 
     scanf("%s",name); 
     srand(time ('\0'));        // It will genarates the different number every time  
     srand(time ('\0'));
     num1=rand() % 20; 
     num2=rand() % 20; 
     num3=rand() % 20;
     num4=rand() % 20;
     num5=rand() % 20;
     num6=rand() % 20;
     num7=rand() % 20;
     num8=rand() % 20;
     num9=rand() % 20;
    
     printf("The Random Genarated Password is: %s%c%c%c%c%c%c%c%c%c%c ",name,sym,str1[num1],str2[num2],str3[num3],str4[num4],
     str5[num5],str6[num6],str7[num7],str8[num8],str9[num9] );

}