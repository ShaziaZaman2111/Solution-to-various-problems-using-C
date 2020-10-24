#include <stdio.h>
#include <stdlib.h>

int c_program_using_loop()
{
    int response;

    fprintf(stdout,"1. Print all natural numbers from 1 to N. \n");
    fprintf(stdout,"2. Print all alphabets from A to Z\n");
    fprintf(stdout,"3. Print all natural numbers in reverse (from N to 1). (use while loop)\n");
    fprintf(stdout,"4. Print all natural numbers in reverse from 1 to N and calculate its sum.\n");
    fprintf(stdout,"5. Print all odd numbers between 1 to 50.\n");
    fprintf(stdout,"6. Print all even numbers between a range (0 to n) and count its number\n");
    fprintf(stdout,"7. Find first and last digit of a number\n");
    fprintf(stdout,"8. Print multiplication table of any number\n");
    fprintf(stdout,"9. Print number patterns\n");
    fprintf(stdout,"10.Check whether a number is palindrome or not\n");
    fprintf(stdout,"11.calculate factorial of a number.\n");
    fprintf(stdout,"12.Check whether a number is Prime number or not.\n");
    fprintf(stdout,"13.Print Fibonacci series up to n terms.\n");
    fprintf(stdout,"14.Convert a do-while loop.\n");
    fprintf(stdout,"15.Find out if a number is Even or Odd.\n");
    fprintf(stdout,"16.Find if a number is positive or negative. \n");
    fprintf(stdout,"17.Find largest of three numbers .\n");
    fprintf(stdout,"18.Find if a letter is vowel or consonant.\n");
    fprintf(stdout,"19.Find if it's a alphabet, digit or character.\n");
    fprintf(stdout,"20.Enter a month and find its number of days.\n");
    fprintf(stdout,"21.Find grade.\n");
    fprintf(stdout,"Press a number:\n");
    fscanf(stdin,"%d", &response);
    return response;
}
//a C program to read a value N and print all natural numbers from 1 to N.
int print_natural_numbers()
{
    int i, n;
    fprintf(stdout,"N=");
    fscanf(stdin,"%d", &n );
    for (i=1; i<=n; i++)
    {
      fprintf(stdout,"%d", i);
    }
    return i;

}

//a C program to print all alphabets from A to Z.
void print_alphabets_AtoZ()
{
    int i;
    char c;

    for(c='A';c<='Z'; ++c)
    {
      fprintf(stdout," %c",c);
    }
    return c;
}

//a C program to print all natural numbers in reverse (from N to 1). (use while loop)
int print_natural_numbers_in_reverse_from_Nto1()
{
    int i=1, N;
    fprintf(stdout,"N=",N);
    fscanf(stdin,"%d",&N);
    while(N>=1)
    {

        fprintf(stdout,"%d ",N);
        N--;
    }
}

//C program to print all natural numbers in reverse from 1 to N and calculate its sum.
int print_natural_numbers_in_reverse_from_1toN_and_calculate_sum()
{
    int n, i;
    fprintf(stdout,"\nN=");
    fscanf(stdin, "%d", &n);
    int sum=n;
    fprintf(stdout,"%d", n);

     for(i=n-1; i>0; i-- )
     {
         fprintf(stdout,"+%d", i);
         sum= sum+i;
     }
     fprintf(stdout, " = %d\n", sum);
}

//a C program to print all odd numbers between 1 to 50.
int print_odd_numbers_between_1and50()
{
    int i;
    for(i=1; i<=50; i++)
    {

    if(i%2!=0)
    {
        fprintf(stdout,"%d ",i);
    }
    }
    return i;

}
//a C program to print all even numbers between a range (0 to n) and count its number.
int print_even_numbers_between_0andn_and_count_its_number()
{
    int i=0, n, count=0;
    fprintf(stdout,"n=");
    fscanf(stdin,"%d", &n);
    for(i=0; i<=n; i++)
    {

        if(i%2 == 0)
        {
            fprintf(stdout,"%d ", i);
            count= count+1;
        }
    }
    fprintf(stdout,"\nCount=%d even numbers found between the range 0 to %d",count, n);

    return count;
}
//C program to find first and last digit of a number.

int first_and_last_digit_of_number()
{
    int n,first, last;
    fprintf(stdout,"Press any number- ");
    fscanf(stdin,"%d", &n);
    last=n%10;
    while(n>=10)
    {
        n=n/10;

    }
    fprintf(stdout,"First digit = %d" ,n);

    fprintf(stdout,"\nLast digit = %d", last);

    return n, last;

}
//a C program to print multiplication table of any number.
int multiplication_table()
{
    int i,n,m;
    fprintf(stdout,"Press any number- ");
    fscanf(stdin,"%d", &n);
    for(i=1; i<=10; i++)
    {
        fprintf(stdout, "%d*%d = %d \n",n,i, n*i);

    }
    return n*i;

}
//C program to print the given number patterns.
int number_patterns()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5; j++)
        {
            fprintf(stdout,"1");
        }
        fprintf(stdout,"\n");
    }
    return 0;
}
//C program to check whether a number is palindrome or not.
int palindrome_or_not()
{
   int n,rem,rev_n=0,m;

   fprintf(stdout,"\nPress any number: ");
   fscanf(stdin,"%d",&n);
   m= n;

   while(n!=0)
   {

      rev_n = rev_n * 10 + n % 10;
      n = n / 10;
   }
   if(m==rev_n)
   {
         fprintf(stdout,"%d is a palindrome number\n", m);
   }
   else
   {
       fprintf(stdout,"%d is not a palindrome number\n", m);
   }
   return m;
}
//a C program to calculate factorial of a number
int factorial()
{
   int i,n,f=1;

   fprintf(stdout, "\nPress any number: ");
   fscanf(stdin,"%d",&n);
   fprintf(stdout,"Factorial = ");
   fprintf(stdout,"1");
     for(i=2; i<=n; i++ )
     {
         fprintf(stdout,"*%d", i);
     }
   for(i=1;i<=n;i++)
   {
   f*=i;
    }
       fprintf(stdout," = %d",f);
  return f;

}
//C program to check whether a number is Prime number or not.
int prime_number_or_not()
{
    int n,i, f = 0;
    fprintf(stdout,"\nPress any number: ");
    fscanf(stdin,"%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if(n%i == 0)
        {
            f = 1;
            break;
        }
    }
    if(n == 1)
        {

            fprintf(stdout,"1 is neither prime number nor composite", n);
        }
    else
    {
        if(f == 0)
        {
            fprintf(stdout, "%d is a prime number.", n);
        }
        else
        {
            fprintf(stdout, "%d is not a prime number", n);
        }
    }
    return n;

}
//a C program to print Fibonacci series up to n terms.
int Fibonacci_series()
{
    int n,i, a, b, e;

    fprintf(stdout,"\nPress any number: ");
    fscanf(stdin,"%d",&n);

    a=0;
    b=1;
    e=0;
    fprintf(stdout,"Fibonacci series up to %d terms = ");

    for(i=1; i<=n; i++)
    {
        fprintf(stdout," %d ", e);
        a=b;
        b=e;
        e=a+b;

    }
    return e;
}
//Conversion of a do-while loop program into -while loop and for loop.
//c program to print natural numbers from 1 to 5
int Conversion_of_loop()
{
    int i=1 ;
    fprintf(stdout,"\nUsing do...while loop-\n");
    //using do...while loop
    do
    {
        fprintf(stdout, "   %d ", i);
        i++;

    }
    while(i<=5);

   //using while loop

    int n=1;
    fprintf(stdout, "\nUsing while loop-\n");

    while(n<=5)
    {
       fprintf(stdout, "   %d ", n);
       n++;
    }

    //using for loop
    int m;
    fprintf(stdout, "\nUsing for loop-\n");
    for(m=1; m<=5;m++)
    {
        fprintf(stdout,"   %d ", m);
    }
    return i, n, m;
}
int even_or_odd()
{
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);


    if (n%2==0)
    {
        printf("\n%d is an even integer.",n);
    }
    else
    {
        printf("\n%d is an odd integer.",n);
    }
return 0;
}
//positive or negative
int pos_or_neg()
{
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);


    if (n<0)
    {
        printf("\n%d is a negative integer.",n);
    }
    else
    {
        printf("\n%d is a positive integer.",n);
    }

}
//a C program to find the largest of three numbers.
int largest_of_three_numbers()
{
    int a,b,c;
    printf("\n\nEnter three numbers:\n");
    scanf("%d %d %d",&a,&b, &c);

    printf("1st Number:%d\t \n2nd Number:%d\t \n3rd Number:%d\t",a,b,c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\nThe 1st Number is the greatest among three", a);
        }
        else
        {
            printf("\nThe 3rd Number is the greatest among three", c);
        }
    }
    else if(b>c)
    {
       printf("\nThe 2nd Number is the greatest among three", b);
    }
    else
    {
        printf("\nThe 3rd Number is the greatest among three\n\n", c);
    }


}

//a C program to check whether an alphabet is a vowel or consonant

void vowel_or_consonant()
{
   char c, lv,uv;
   printf("Enter a character:");
   scanf(" %c", &c);
   lv=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   uv=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
   if (c==(lv||uv))
    {
        printf("\n%c is a vowel.",c);
    }
   else
    {
        printf("\n%c is a consonant.\n\n",c);
    }
    return 0;
}
//a C program to check whether a character is an alphabet, digit or special character.
#include <stdio.h>
void alphabet_or_digit_or_character()
{
    char uc,lc,c;
    int i;
    printf("Enter a character:",c);
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z'||c >= 'A' && c <= 'Z')
    {
        printf("This is an alphabet.\n\n",c);
    }
    else if (c >= '0' && c<= '9')
    {
        printf("This is a digit.\n\n",c);
    }
    else
    {
        printf("This is a special character.\n\n",c);
    }

}
//a program in C to read any Month Number in integer and display the number of days for this month.
#include <stdio.h>
int number_of_days_in_a_month()
{
 int i;
 printf("Enter Month Number:", i);
 scanf("%d", &i);
 switch(i)
 {
 case 1:
    printf("Month January has 31 days",i);
    break;
 case 2:
    printf("Month February has 28 or 29 days",i);
    break;
 case 3:
    printf("Month March has 31 days",i);
    break;
 case 4:
    printf("Month April has 30 days",i);
    break;
 case 5:
    printf("Month May has 31 days",i);
    break;
 case 6:
    printf("Month June has 30 days",i);
    break;
 case 7:
    printf("Month July has 31 days",i);
    break;
 case 8:
    printf("Month August has 31 days",i);
    break;
 case 9:
    printf("Month September has 30 days",i);
    break;
 case 10:
    printf("Month October has 31 days",i);
    break;
 case 11:
    printf("Month November has 30 days",i);
    break;
 case 12:
    printf("Month December has 31 days",i);
    break;
 default:
    printf("Please enter a valid month number!");

 }
 printf("\n\n");
}

//a program in C to accept a grade and declare the equivalent description: (USING SWITCH CASE)
/*Grade	Description
E	        Excellent
V	        Very Good
G	        Good
A	        Average
F	        Fail
*/
int grade()
{
    char c, E,V,G,A,F;
    int i;
    c=('E'||'V'||'G'||'A'||'F');
    printf("input grade:",c);
    scanf(" %c", &c);
    switch(c)
    {
    case 'E':
        printf("You have chosen : Excellent", c);
        break;
    case 'V':
        printf("You have chosen : Very Good", c);
        break;
    case 'G':
        printf("You have chosen : Good", c);
        break;
    case 'A':
        printf("You have chosen : Average", c);
        break;
    case 'F':
        printf("You have chosen : Fail", c);
        break;
    default:
        printf("You have chosen : default");
    }
    printf("\n\n");
}





int problem()
{
   char c;
   int i, m, n, N, sum, count, first, last,j, rem,rev_n, f, a, b, e, response;

   response = c_program_using_loop();
   switch (response)
   {
   case 1:
        printf("Print all natural numbers from 1 to N\n");
        print_natural_numbers();
        printf("\n\n\a");
        break;

   case 2:
   printf("All alphabets from A to Z:\n");
   print_alphabets_AtoZ();
   printf("\n\n\a");
   break;
   case 3:
   printf("Natural numbers in reverse (from N to 1):\n");
   print_natural_numbers_in_reverse_from_Nto1();
   printf("\n\n\a");
   break;
   case 4:
   printf("Natural numbers in reverse from 1 to N and its sum:\n");
   print_natural_numbers_in_reverse_from_1toN_and_calculate_sum();
   printf("\n\n\a");
   break;
   case 5:
   printf("Odd numbers between 1 to 50:\n");
   print_odd_numbers_between_1and50();
   printf("\n\n\a");
   break;
   case 6:
   printf("Even numbers between (0 and n) and its count:\n");
   print_even_numbers_between_0andn_and_count_its_number();
   printf("\n\n\a");
   break;
   case 7:
   printf("First and last digit of a number: \n");
   first_and_last_digit_of_number();
   printf("\n\n\a");
   break;
   case 8:
   printf("Multiplication table of any number:\n");
   multiplication_table();
   printf("\n\n\a");
   break;
   case 9:
   printf("Number patterns:\n");
   number_patterns();
   printf("\n\n\a");
   break;
   case 10:
   printf("Check whether a number is palindrome or not: \n");
   palindrome_or_not();
   printf("\n\n\a");
   break;
   case 11:
   printf("factorial of a number:\n");
   factorial();
   printf("\n\n\a");
   break;
   case 12:
   printf("Check whether a number is Prime number or not:\n");
   prime_number_or_not();
   printf("\n\n\a");
   break;
   case 13:
   printf("Print Fibonacci series up to n terms:\n");
   Fibonacci_series();
   printf("\n\n\a");
   break;
   case 14:
   printf("Convert a do-while loop:\n");
   Conversion_of_loop();
   printf("\n\n\a");
   break;
   case 15:
   printf("Find out if a number is Even or Odd.");
   even_or_odd();
   printf("\n\n\a");
   break;
   case 16:
   printf("Find if a number is positive or negative. ") ;
   pos_or_neg();
   printf("\n\n\a");
   break;
   case 17:
   printf("Find largest of three numbers. ") ;
   largest_of_three_numbers();
   break;
   case 18:
   printf("Find if a letter is vowel or consonant.");
   vowel_or_consonant();
   break;
   case 19:
   printf("Find if it's a alphabet, digit or character.");
   alphabet_or_digit_or_character();
   break;
   case 20:
    printf("Enter a month and find its number of days.");
   number_of_days_in_a_month();
   break;
   case 21:
    printf("Find grade.");
    grade();
    break;

   }
}
int main()
{
   int i;
   printf("What would you like to do?\n");
   problem();
   while(i>0)
   {
       i=1;
       i++;
    printf("What else would you like to do?\n");
    problem();

   }
   return 0;
}


