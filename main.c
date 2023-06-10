#include <stdio.h>  //FIND SPECIFIC DIGITS FROM ANY INPUT STRING NUMBER 



int main(void){

char str[100] , ch;

int i,digits,others,num_zero,num_one,num_two,num_three,num_four,num_five,num_six,num_sev,num_eight,num_nine;

printf("Input your number: ");
gets(str);

 i=digits=others=num_zero=num_one=num_two=num_three=num_four=num_five=num_six=num_sev=num_eight=num_nine=0;

while((ch=str[i])!= '\0'){

  if(ch == '0')

    num_zero++;

  else if(ch == '1')

    num_one++;

  else if(ch == '2')

    num_two++;

   else if(ch == '3')

    num_three++;

   else if(ch == '4')

    num_four++;

   else if(ch == '5')

    num_five++;

   else if(ch == '6')

    num_six++;

    else if(ch == '7')

    num_sev++;

    else if(ch == '8')

    num_eight++;

    else if(ch == '9')

     num_nine++;

    else

    others++;

   i++;


}

 digits++;

 printf("The time we got to see 0 here is %d\n", num_zero);
 printf("The time we got to see 1 here is %d\n", num_one);
 printf("The time we got to see 2 here is %d\n", num_two);
 printf("The time we got to see 3 here is %d\n", num_three);
 printf("The time we got to see 4 here is %d\n", num_four);
 printf("The time we got to see 5 here is %d\n", num_five);
 printf("The time we got to see 6 here is %d\n", num_six);
 printf("The time we got to see 7 here is %d\n", num_sev);
 printf("The time we got to see 8 here is %d\n", num_eight);
 printf("The time we got to see 9 here is %d\n", num_nine);


}

