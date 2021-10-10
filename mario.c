#include <cs50.h>
#include <stdio.h>

int getHeight(){
    int height;
    do
    {
        height=get_int("Height: ");
    } while (height < 1 || height > 8);
    return height;
}

void pyramid( int height){
    for(int i=0; i < height; i++){
        for(int h=height-i-1; h>0; h--){
            printf(" ");
        }
        for(int j=0; j < i+1; j++){
            printf("#");
        }   
        printf("\n");   
    }
}

int main(){
    int height=getHeight();
    pyramid(height);
    return 0;
}



