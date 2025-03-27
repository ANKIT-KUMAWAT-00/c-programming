#include <stdio.h>
int main(){
    printf("hello world\n");
    printf("12");
    int a = 10;
    printf("%d\n",a);
    float b=3.14159;
    printf("this is the value of pi %f\n",b);
    char c='A';
    printf("this is the value of character means %c\n",c);
    printf("hello ram your age is %d and the value of pi is %f and i love the char %c",a,b,c);   
    printf("%d\n",a);
    // Create a variable and assign the value 15 to it
    int myNum = 15;

    // Declare a variable without assigning it a value
    int myOtherNum;

    // Assign the value of myNum to myOtherNum
    myOtherNum = myNum;

    // myOtherNum now has 15 as a value
    printf("%d\n",myOtherNum);
    int myNuum = 15;

    int myOtherNuum = 23;

    // Assign the value of myOtherNum (23) to myNum
    myNuum = myOtherNuum;

    // myNum is now 23, instead of 15
    printf("%d", myNuum);
     // Create integer variables
    int length = 4;
    int width = 6;
    int area;

    // Calculate the area of a rectangle
    area = length * width;

    // Print the variables
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d\n", area);
     
    // for storing string data type
    char myText[] = "Hello bhaisaab abhi tak c sikh rah hu yaar kya kru dukh dard hai khafi saare";
    printf("%s\n", myText);
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum);   // Only show 4 digits

    // Manual conversion: int to float
    float sum = (float) 5 / 2;

    printf("it is the sum and the average of it:%.2f\n", sum);

    // Set the maximum possible score to 500
    int maxScore = 600;

    // The actual score of the user
    int userScore = 483;

    // Calculate the percantage of the user's score in relation to the maximum available score
    float percentage = (float) userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f", percentage);



    const int myNuuum = 15;  // myNum will always be 15
    // myNum = 10;  // error: assignment of read-only variable 'myNum'
    printf("%d\n", myNuuum);




    int x = 5;
    printf("%d\n", ++x); // return the value after adding in that +1
    int y=5;
    printf("%d\n",--y);
    // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
    printf("this is not true %d\n", x >6  || x < 1);


    // uses of if else statement

    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("Old enough to vote!");
    }
    else {
        printf("Not old enough to vote.");
    }

    //// use of morethen one condition to check we used to else if just like elif in python

    int time = 22;
    if (time < 10) {
      printf("Good morning.");
    } else if (time < 20) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }
    // Outputs "Good evening."
    

    // c short hand if else

    int tiime  = 20;
    if (tiime < 18) {
    printf("Good day.");
    } else {
    printf("\nGood evening.");
    }
    tiime<18 ? printf("good day.") : printf("good evening\n");
    
    int alpha =20;
    if (alpha < 0) {
        printf("%d\n",alpha);
    }
    else{
        printf("%d\n",alpha+tiime);
    }
    int myNumm = 5;

    if (myNumm % 2 == 0) {
    printf("%d is even.\n", myNumm);
    } else {
    printf("%d is odd.\n", myNumm);
    }
    
    // switch case statement and it can be used in only integer and char....

    int day;
    scanf("%d",&day);

    switch (day) {
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
    printf("this number type is not available!!");
}
short int al;
    a=100;
    printf("%d",al);
// we can take long int also just like "long int al"        
// we can take short int also kjust like "short int al" 
    
    printf("\n%d",al);
    printf("%d",sizeof(al)); //sizeof says the size of how much a data it takes
    
    printf("\nint %d",sizeof(int));


// %d ==int 
// %f ==float
// %c ==char
// %s ==string
// %lf ==double
// 

// ye kitne bytes ki memory le raha hai ye batata hao 
    printf("\n float %d",sizeof(float));
    printf("\n char %d",sizeof(char));
    printf("\n double %d",sizeof(double));


// % is format data specifier , what tyoe of tdata we want to take as a input and print.
int a=3,b=4, cC=0,d=6,eE;
    eE= ++a < b || cC++; // if front value will be checked AND ILL GET 1 THEN IN AND,OR OPERATOR WILL NOT CHECK OTHERWISE IT WILL GO FOREWard then the other value will not be chNGED
    printf("E=%d and c=%d",eE,cC); 
    return 0;
}