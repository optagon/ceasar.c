#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    int k;
    int l;
    string text;
    k = GetInt();
    
    if(k>0)
    {
         printf("Give me a text \n");
         text = GetString();
         l = strlen(text);
         
     //iterates over the text    
    for(int i = 0; i < l; i++)
    {
        if(isalpha(text[i]))
        {
                26 letters in alphabet
            printf("%c", ((((text[i])+k-96)%26)+96));
        }
        
        else
        {
         printf("%c", text[i]);
        }
    }
   
}}
