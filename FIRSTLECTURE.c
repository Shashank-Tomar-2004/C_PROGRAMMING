//  WHAT IS PROGRAMMING?
//  programming is giving a set of instructions to a computer to execute.

// What is C?
// C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
// It is a very popular language, despite being old.
// C is strongly associated with UNIX, as it was developed to write the UNIX operating system.
// Procedural Language - Instructions in a C program are executed step by step.
// Portable - You can move C programs from one platform to another, and run it without any or minimal changes.
// Speed - C programming is faster than most programming languages like Java, Python, etc.
// General Purpose - C programming can be used to develop operating systems, embedded systems, databases, and so on.

//  /* // Syntax-:
// #include <stdio.h>
// int main() {
//   printf("Hello World!");//PRINT HELLO
//   return 0;
// }

//  #include <stdio.h> //is a header file library that lets us work with input and output functions, such as printf(). Header files add functionality to C programs.
// int main()//is main(). This is called a function. Any code inside its curly brackets {} will be executed.
//   {   printf("Hello World! \n");
//   //printf() is a function used to output/print text to the screen. In our example it will output "Hello World".
//    Every C statement ends with a semicolon ;
//    return 0;//return 0 ends the main() function.
// }

//Comments

//Single-line comments start with two forward slashes (//).
// This is a comment
//printf("Hello World!");

// Multi-line comments start with /* and ends with */.
// Any text between /* and */ will be ignored by the compiler:
// /* The code below will print the words Hello World!
// to the screen, and it is amazing */
// printf("Hello World!");

// #include <stdio.h>

// int main() {
//   /* The code below will print the words Hello World!
//   to the screen, and it is amazing */
//   printf("Hello World!");
//   return 0;
// }

// New Lines
// To insert a new line, you can use the \n character:

// int main() {
//   printf("Hello World!\n");
//   printf("I am learning.\n");
//   printf("I am learning.\n");
//   return 0;
// }

/*
C Keywords
auto	double	int	struct
break	else	long	switch
case	enum	register	typedef
char	extern	return	union
continue	for	signed	void
do	if	static	while
default	goto	sizeof	volatile
const	float	short	unsigned  */


                                //  Variable
// variable -Variables are containers for storing data values.
// A variable in simple terms is a storage place that has some memory allocated to it.
// Rules for defining variables
// A variable can have alphabets, digits, and underscore.
// A variable name can start with the alphabet, and underscore only. It can’t start with a digit.
// No whitespace is allowed within the variable name.
// A variable name must not be any reserved word or keyword, e.g. int, goto, etc.
// #include<stdio.h>
//  int main(){
//  int myNum;
// myNum = 15;
//  printf("%d",myNum);
// return 0;
// }


// int _ab;   int a@r;
// int a30;  

// int 2;  
// int a b;  
// int long;  


//To create a variable, specify the type and assign it a value:
//Syntax  -type variableName = value;
//  Example-Create a variable called myNum of type int and assign the value 15 to it:
//   int myNum = 15;
// You can also declare a variable without assigning the value, and assign the value later:
// int myNum;
// myNum = 15;

// If you assign a new value to an existing variable, it will overwrite the previous value:
// int myNum = 15;  // myNum is 15
// myNum = 10;  // Now myNum is 10

//  int - stores integers (whole numbers), without decimals, such as 123 or -123
//  float - stores floating point numbers, with decimals, such as 19.99 or -19.99 
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes 
// int a;  
//int b;   //int a,b;
// float b;  
// char c; 


// //Here, a, b, c are variables. The int, float, char are the data types.
// int a=10,b=20;//declaring 2 variable of integer type  
// float f=20.8;  
// char c='A';  

// int myNum = 15;
// printf(myNum); 

//                                         //Format Specifiers
// output the value of an int variable, you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function:
// float myNum = 1.5;
// printf("%f", myNum);  // Outputs 1.5

// #include <stdio.h>
// int main() {
//   char myNum = '*';
//   printf("%c", myNum);
//   return 0;
// }


// // Create variables
// int Num = 5;             // Integer (whole number)
// float FloatNum = 5.99;   // Floating point number
// char Letter = 'D';       // Character

// // Print variables
// printf("%d\n", Num);
// printf("%f\n", FloatNum);
// printf("%c\n", Letter);

//#include <stdio.h>
// int main() {
//   // Create variables
//   int myNum = 5;               // Integer (whole number)
//   float myFloatNum = 5.99;     // Floating point number
//   char myLetter = 'D';         // Character
  
//   // Print variables
//   printf("%d\n", myNum);
//   printf("%f\n", myFloatNum);
//   printf("%c\n", myLetter);
//   return 0;
// }

// To combine both text and a variable, separate them with a comma inside the printf() function:
// #include <stdio.h>
// int main() {
//   int myNum = 5;
//   printf("My favorite number is: %d", myNum);
//   return 0;
// }

// To print different types in a single printf() function
//  #include <stdio.h>
// int main() {
//   int myNum = 5;
//   char myLetter = 'D';
//   printf("My number is %d and my letter is %c", myNum, myLetter);
//   return 0;
// }

// Add Variables Together
// To add a variable to another variable, you can use the + operator:
// int x = 5;
// int y = 6;
// int sum = x + y;
// printf("%d", sum);

// #include <stdio.h>
// int main() {
//   int x = 5;
//   int y = 6;
//   int sum = x + y;
//   printf("%d", sum);
//   return 0;
// }

// Declare Multiple Variables
// To declare more than one variable of the same type, use a comma-separated list:
// int x = 5, y = 6;
//  int z = 50;
// printf("%d", x + y + z);

// #include <stdio.h>
// int main() {
//   int x = 5, y = 6,
//    z = 50;
//   printf("%d", x + y + z);
//   return 0;
// }

// You can also assign the same value to multiple variables of the same type:
// int x, y, z;
// x = y = z = 50;
// printf("%d", x + y + z); //150

// #include <stdio.h>
// int main() {
//   int x, y, z;
//   x = y = z = 50;
//   printf("%d", x + y + z);
//   return 0;
// }

//scanf
// Syntax:
// int scanf( const char *format, … );
// int var;
// scanf(“%d”, &var);
// // The scanf will write the value input by the user into the integer variable var.

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter the value of a\n");
//     scanf("%d", &a);

//     printf("Enter the value of b\n");
//     scanf("%d", &b);

//     printf("The sum of a and b is %d", a + b);
//     return 0;
// }
//                             // DATA TYPES
// int	2 or 4 bytes	Stores whole numbers, without decimals

// float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits

// double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

// char	1 byte	Stores a single character/letter/number, or ASCII values

// #include <stdio.h>
// int main() {
//   int myNum = 5;  // integer
  
//   printf("%d\n", myNum);
//   printf("%i\n", myNum);
//   return 0;
// }


// #include <stdio.h>
// int main() {
//   float myFloatNum = 5.99;  // Floating point number
//   printf("%f", myFloatNum);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   double myDoubleNum = 19.99;  // Double (floating point number)
//   printf("%lf", myDoubleNum);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char myLetter = 'D'; // Character
//   printf("%c", myLetter);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   char greetings[] = "Hello World! ";
//   printf("%s", greetings);
//   return 0;
// }

                        //Constants
// When you don't want others (or yourself) to override existing variable values, use the const keyword 
// unchangeable and read-only.

// const int myNum = 15;  // myNum will always be 15
// myNum = 10;  // error: assignment of read-only variable 'myNum'

// #include <stdio.h>
// int main() {
//   const int myNum = 15;
//   myNum = 10;
//   printf("%d", myNum);
//   return 0;
// }

// // You should always declare the variable as constant when you have values that are unlikely to change
// const int minutesPerHour = 60;
// const float PI = 3.14;

// #include <stdio.h>
// int main() {
//   const int minutesPerHour = 60;
//   const float PI = 3.14;
//    int  PI = 3;
//   printf("%d\n", minutesPerHour);
//   printf("%f\n", PI);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//    const int BIRTHYEAR = 1980;
//      int BIRTHYEAR = 19;
//   printf("%d", BIRTHYEAR);
//   return 0;
// }


               // C Operators
//Operators are used to perform operations on variables and values.

// #include <stdio.h>
// int main() {
//   int myNum = 100 + 50;
//   printf("%d", myNum);
//   return 0;
// }

// int sum1 = 100 + 50;        // 150 (100 + 50)
// int sum2 = sum1 + 250;      // 400 (150 + 250)
// int sum3 = sum2 + sum2; 

// // Arithmetic operators
// // Assignment operators
// // Comparison operators
// // Logical operators
// // Bitwise operators

// Operator	        Name	        Description                                 	Example	
// +                	Addition	    Adds together two values                      	x + y	
// -	                Subtraction	    Subtracts one value from another              	x - y	
// *	                Multiplication	Multiplies two values                        	x * y	
// /	                Division	    Divides one value by another                  	x / y	
// %	                Modulus	        Returns the division remainder                 	x % y	
// ++	                Increment	Increases the value of a variable by 1	              ++x	
// --               	Decrement	Decreases the value of a variable by 1	              --x

// #include <stdio.h>
// int main() {
//   int x = 5;
//   int y = 3;
//   printf("%d", x + y);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int x = 5;
//   int y = 3;
//   printf("%d", x - y);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int x = 5;
//   int y = 3;
//   printf("%d", x * y);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int x = 12;
//   int y = 3;
//   printf("%d", x / y);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int x = 5;
//   int y = 2;
//   printf("%d", x % y);
//   return 0;
// }


// #include <stdio.h>
// int main() {
//   int x = 5;
//   printf("%d", x++);//5
//    printf("%d", x);//6
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int x = 5;
//   printf("%d", --x);

//   return 0;
// }
 

//  EXAMPLE-
//  // Working of increment and decrement operators
// #include <stdio.h>
// int main()
// {
//     int a = 10, b =100 ;
//     float c = 10.5, d = 100.5;
//     printf("++a = %d \n", ++a); //11
//     printf("--b = %d \n", --b);//99 
//     printf("++c = %f \n", ++c);//11.5
//     printf("--d = %f \n", --d);//99.5
//     return 0;
// }


// // Working of arithmetic operators
// #include <stdio.h>
// int main()
// {
//     int a = 9,b = 4, c;
    
//     c = a+b;
//     printf("a+b = %d \n",c);//13
//     c = a-b;
//     printf("a-b = %d \n",c);//5
//     c = a*b;
//     printf("a*b = %d \n",c);//36
//     c = a/b;
//     printf("a/b = %d \n",c);//2//
//     c = a%b;
//     printf("Remainder when a divided by b = %d \n",c);//1
//     return 0;
// }



// int main()
// {
//     int a = 4;
//     // int b = 8.5; // Not recommended because 8.5 is not an integer
//     float b = 8.5;
//     char c = 'u';
//     int d = 45;
//     int e = 45 + 4;
//     printf("The value of a is %d \n", a);
//     printf("The value of b is %f \n", b);
//     printf("The value of c is %c \n", c);
//     printf("Sum of a and d is %d \n", a - d);
//     printf("Sum of a and d is %d \n", e);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int length=3, breadth=8;
//     int area = length*breadth;
//     printf("The area of this rectangle is %d", area);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int length, breadth;
//     printf("What is the length of the rectangle\n");
//     scanf("%d", &length);

//     printf("What is the breadth of the rectangle\n");
//     scanf("%d", &breadth);

//     printf("The area of your rectangle is %d", length*breadth);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int radius = 3;
//     float pi = 3.14;
//     printf("The area of this circle is %f\n", pi * radius * radius);
//     int height = 3;
//     printf("Volume of this cylinder is %f\n", pi * radius * radius * height);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter the value of a\n");
//     scanf("%d", &a);

//     printf("Enter the value of b\n");
//     scanf("%d", &b);

//     printf("The sum of a and b is %d", a + b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float celsius = 37, far;
//     far = (celsius * 9 / 5) + 32;
//     printf("The value of this celsius temperature in Fahrenheit is %f", far);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int principal=100, rate=4, years=1;
//     int simpleInterest = (principal * rate * years)/100;
//     printf("The value of simple Interest is %d", simpleInterest);
//     return 0;
// }


                 //  Assignment Operators
// Assignment operators are used to assign values to variables.
// In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x:
// int x = 10;
// #include <stdio.h>
// int main() {
//   int x = 10;
//   printf("%d", x);
//   return 0;
// }

// The addition assignment operator (+=) adds a value to a variable:
// int x = 10;
// x += 5;//x=x+5

// #include <stdio.h>
// int main() {
//   int x = 10;
//   x += 5;
//   printf("%d", x);
//   return 0;
// }


// A list of all assignment operators:

// Operator	       Example	                Same As	
// =	               x = 5	                 x = 5	
// int main() {
//   int x = 5;
//   printf("%d", x);
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int x = 5;
//   x -= 3;
//   printf("%d", x);
//   return 0;
// }

// +=                 x += 3	                 x = x + 3	
// #include <stdio.h>
// int main() {
//   int x = 5;
//   x += 3;
//   printf("%d", x);
//   return 0;
// }

// -=              	x -= 3	                 x = x - 3	
// #include <stdio.h>
// int main() {
//   int x = 5;
//   x -= 3;
//   printf("%d", x);//2
//   return 0;
// }

// *=	               x *= 3	                  x = x * 3	
// #include <stdio.h>
// int main() {
//   int x = 5;
//   x *= 3;
//   printf("%d", x);
//   return 0;
// }


// /=                 x /= 3	                 x = x / 3	
// #include <stdio.h>
// int main() {
//   int x = 5;
//   x /= 3;
//   printf("%d", x);
//   return 0;
// }

// // %=	              x %= 3	                x = x % 3	
// #include <stdio.h>
// int main() {
//   int x = 5;
//   x %= 3;
//   printf("%d", x);
//   return 0;
// }

// &=	              x &= 3	                x = x & 3	
// #include <stdio.h>
// int main() {
//   int x = 5;// 101
//   x &= 6;    //110
//   printf("%d", x);//110
//   return 0;
// }

// |=	              x |= 3                 	x = x | 3	
// #include <stdio.h>
// int main() {
//   int x = 5;//101
//   x |= 3;//11
//   printf("%d", x);
//   return 0;
// }

// //7
// ^=	              x ^= 3	                x = x ^ 3	
// #include <stdio.h>

// int main() {
//   int x = 4;          //0100
//   x ^= 3;             //0011
//   printf("%d", x);    //  111
//   return 0;
// }

// //6


// // Working of assignment operators
// #include <stdio.h>
// int main()
// {
//     int a = 12, c;
//     c = a;      // c is 12
//     printf("c = %d\n", c);
//     c += a;     // c is 24   c=c+a
//     printf("c = %d\n", c);
//     c -= a;     //12       c=c-a//24-12
//     printf("c = %d\n", c);
//     c *= a;     // c is 144 c=12*12
//     printf("c = %d\n", c);
//     c /= a;     // c 12 is c=144/12
//     printf("c = %d\n", c);
//     c %= a;     // c 0
//     printf("c = %d\n", c);
//     return 0;
// }


//     //Comparison Operators
// Return value of a comparison is either true (1) or false (0).

// Operator	Name	                    Example	
// ==      	Equal to	                x == y	
// !=	        Not equal	                x != y	
// >	        Greater than       	        x > y	
// <	        Less than	                x < y	
// >=	        Greater than or equal to	x >= y	
// <=	       Less than or equal to        x <= y

// Working of relational operators
// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 5, c = 10;
//     printf("%d == %d is %d \n", a, b, a == b);//1
//     printf("%d == %d is %d \n", a, c, a == c);//0
//     printf("%d > %d is %d \n", a, b, a > b);//0
//     printf("%d > %d is %d \n", a, c, a > c);//0
//     printf("%d < %d is %d \n", a, b, a < b);//0
//     printf("%d < %d is %d \n", a, c, a < c);//1
//     printf("%d != %d is %d \n", a, b, a != b);//0
//     printf("%d != %d is %d \n", a, c, a != c);//1
//     printf("%d >= %d is %d \n", a, b, a >= b);//1
//     printf("%d >= %d is %d \n", a, c, a >= c);//0
//     printf("%d <= %d is %d \n", a, b, a <= b);//1
//     printf("%d <= %d is %d \n", a, c, a <= c);//1
//     return 0;
// }

// Logical Operators

// && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	

// int main() {
//   int x = 5;
//   int y = 3;
//   // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
//   printf("%d", x > 3 && x < 10);
//   return 0;
// }

// || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
// #include <stdio.h>
// int main() {
//   int x = 5;
//   int y = 3;
//   // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
//   printf("%d", x > 3 || x < 4);
//   return 0;
// }


// !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
// #include <stdio.h>
// int main() {
//   int x = 5;
//   int y = 3;
//   // Returns false (0) because ! (not) is used to reverse the result
//   printf("%d", !(x > 3 && x < 10));
//   return 0;
// }

// Working of logical operators
// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 5, c = 10, result;

//     result = (a == b) && (c > b);
//     printf("(a == b) && (c > b) is %d \n", result);//1

//     result = (a == b) && (c < b);
//     printf("(a == b) && (c < b) is %d \n", result);//0

//     result = (a == b) || (c < b);
//     printf("(a == b) || (c < b) is %d \n", result);//1

//     result = (a != b) || (c < b);
//     printf("(a != b) || (c < b) is %d \n", result);//0

//     result = !(a != b);
//     printf("!(a != b) is %d \n", result);//1

//     result = !(a == b);
//     printf("!(a == b) is %d \n", result);//0
//     return 0;
// }

             //  DATA TYPE
// A data type specifies the type of data that a variable can store such as integer, floating, character, etc.
// Types                    	Data Types
// Basic Data Type       	    int, char, float, double
// Derived Data Type	        array, pointer, structure, union
// Enumeration Data Type	    enum
// Void Data Type	            void

/*
Data Types         Memory Size	Range
char	              1 byte	−128 to 127
signed char	           1 byte	−128 to 127
unsigned char        	1 byte	0 to 255
short	                2 byte	−32,768 to 32,767
signed short        	2 byte	−32,768 to 32,767
unsigned short	        2 byte	0 to 65,535
int	                    2 byte	    −32,768 to 32,767
signed int	            2 byte	−32,768 to 32,767
unsigned int	         2 byte	0 to 65,535
short int	              2 byte	−32,768 to 32,767
signed short int	    2 byte	−32,768 to 32,767
unsigned short int	    2 byte	0 to 65,535
long int	            4 byte	-2,147,483,648 to 2,147,483,647
signed long int	        4 byte	-2,147,483,648 to 2,147,483,647
unsigned long int	    4 byte	0 to 4,294,967,295
float	                4 byte	
double	                 8 byte	
long double	             10 byte   */




