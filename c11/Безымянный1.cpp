#include <iostream>

main()
{
int pin1,pin2;
printf("pin1=");
scanf("%i",&pin1);
printf("pin2=");
scanf("%i",&pin2);

if((((pin1==840)&&(pin2==148))||((pin1==345)&&(pin2==567))||((pin1==642)&&(pin2==258))))
{
 printf("OK");
}
else
{
	printf("ERROR");
}
}
