//count from muliple line as your wish .till the newline comes
#include<stdio.h> 
int main() 
{ 
 char ch; 
 int vowel = 0, consonant = 0, digit = 0; 
 while(scanf("%c",&ch)!=EOF) 
 {
     if (ch=='\n') {
            break;
        }
  if(ch>='0' && ch<='9') 
  { 
   digit++; 
  }
  else{
    if(ch>='A'&&ch<='Z'){
        ch=ch+32;
    }
    if(ch>='a'&&ch<='z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
        { 
            vowel++; 
        } 
        else 
        { 
            consonant++; 
        }
    }
}
 }
printf("Digits are:%d\n",digit);
printf("Vowels are:%d\n",vowel);        
printf("Consonants are:%d\n",consonant); 
return 0;
}