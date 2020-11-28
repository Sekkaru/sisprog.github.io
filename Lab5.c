#include <stdio.h>
#include <string.h> 

int main() {
    char text[50];
    scnaf("%s", text);
    for(int i=0; i<strlen(text); i++){
      text[i]=toupper(text[i]);
      printf("%c", text[i]);
  }
}
