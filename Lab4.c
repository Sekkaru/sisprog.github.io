#include <stdio.h>

int Fib(int i)
{
int value = 0;
if(i < 1) return 0;
if(i == 1) return 1;
return Fib(i-1) + Fib(i - 2);
}
int main()
{
int i = 0;
while(i < 8)
{
printf("%s\n","Идет вычисление следующего элемента, ожидайте...");
printf("Полученный элемент = ");
printf("%d\n", Fib(i));
i++;
}
return 0;
}
