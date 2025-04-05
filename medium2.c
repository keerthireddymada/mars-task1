#include<stdio.h>
#include<string.h>
void main()
{
    //morse codes for each letter in alphabetical order
    char Morse[26][5] = {
        ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",  "....", 
        "..",   ".---", "-.-",  ".-..", "--",   "-.",   "---",  ".--.",
        "--.-", ".-.",  "...",  "-",    "..-",  "...-", ".--",  "-..-", 
        "-.--", "--.."
    };
    //5 as each letter's morse code has not more than 5 characters
    char letters[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char oneletter[6];
    int index=0;
    int textindex=0;
    char morsecode[500];
    char decodedtext[100];
    printf("Enter your morse code: ");
    fgets(morsecode, sizeof(morsecode), stdin);
    morsecode[strcspn(morsecode, "\n")] = '\0';   //removes \n which fgets() stores
    for(int i=0; morsecode[i] != '\0';i++)
    {
        if(morsecode[i] == '.' || morsecode[i] == '-')
        {
            //it is . or - so it gets added to oneletter
            oneletter[index] = morsecode[i];
            index++;
        }
        else if(morsecode[i] == ' ' || morsecode[i] == '/' || morsecode[i] == '\n') //' ' or '/' or '\n' is there meaning one letter is done
        {
            if(index > 0)
            {
                oneletter[index]='\0';
                for(int j=0; j<26; j++)
                {
                    //converting the morse symbol to that one letter in english
                    if(strcmp(oneletter,Morse[j]) == 0)
                    {
                        decodedtext[textindex] = letters[j];
                        textindex++; //goes to second letter
                        break;
                    }
                }
                index = 0;
            }
            if(morsecode[i] == '/')
            {
                //word boundary so space between words
                decodedtext[textindex] = ' ';
                textindex++;
            }
        }
    }
    if(index > 0)
    {
        oneletter[index]= '\0';
        for(int j=0;j< 26;j++)
        {
            /*if the morse code which is of one letter matches with the actual one in the defined array,
            then we can assign it an actual letter from array which is equivalent to the same position*/
            if(strcmp(oneletter, Morse[j]) == 0)
            {
                decodedtext[textindex] = letters[j];
                textindex++;
                break;
            }
        }
    }
    decodedtext[textindex] = '\0';
    printf("the decoded text: %s\n", decodedtext);
} 