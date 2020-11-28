#include <stdio.h>
#include <string.h> 

int main() {
    char text[] = "abcdefgijklmnopqrstuvwxyz";
    for(int i=0; i<strlen(text); i++){
      text[i]=toupper(text[i]);
      printf("%c", text[i]);
  }
}
