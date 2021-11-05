#include <cs50.h>
#include <stdio.h>
//clang caesar.c -o caesar - lcs50 && ./caesar

int main(int argc, string argv[]){
    int k = atoi(argv[1]); //turn k into an integer
    string plaintext = get_string("plain text: ");
    int plaintext_len = strlen(plaintext); //find length of plain text
    printf("cipher text: ");
    for(int i=0; i < plaintext_len; i++){
        if (isupper(plaintext[i]) && isalpha(plaintext[i])){
            printf("%c",((plaintext[i]-65 + k)%26)+65);//turns ith character of plaintext into alphabetical index, enciphers it and turns it back to ASCII
        }else if (islower(plaintext[i]) && isalpha(plaintext[i])){
            printf("%c",((plaintext[i]-97 + k)%26)+97);//turns ith character of plaintext into alphabetical index, enciphers it and turns it back to ASCII
        }else{
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}