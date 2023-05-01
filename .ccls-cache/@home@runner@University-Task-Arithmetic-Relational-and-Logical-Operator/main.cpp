#include <cmath>
#include <iostream>
using namespace std;

int main() {
  // *************Simple Task *************
  // 1. Write a C++ program to input two numbers from user and find the value of
  // one number raised to the power of another by using pow() function.
  cout << "Answer NO 1 \n";
  cout << "Enter Your Number " << endl;
  int number;
  cin >> number;
  cout << "Enter Your Power " << endl;
  int power;
  cin >> power;

  cout << pow(number, power) << endl;
  // 2. Write a C++ program to input side of an equilateral triangle from user
  // and find area of the given triangle. Area = (√3 /4 ) S2
  cout << "Answer NO 2 \n";
  cout << "Enter the side of the triangle: ";
  double side;
  cin >> side;

  double area = (sqrt(3) / 4) * pow(side, 2);

  cout << "Area of the triangle: " << area << endl;

  // 3. Write a C++ program to input marks of five subjects of a student and
  // calculate total, average and percentage of all subjects.
  cout << "Answer NO 3 \n";
  float eng, math, urdu, isl, pst;

  cout << "Enter Your English Marks \n ";
  cin >> eng;

  cout << "Enter Your Urdu Marks \n ";
  cin >> urdu;

  cout << "Enter Your Math Marks \n ";
  cin >> math;

  cout << "Enter Your Islamiyat Marks \n";
  cin >> isl;

  cout << "Enter Your Pakistan Studies Marks \n ";
  cin >> pst;

  float total = eng + math + urdu + isl + pst;
  cout << "Your Obtained Marks is " << total << "\n";
  float average = total / 5;
  cout << "Your Average Marks is " << average << "\n";
  float percentage = (total / 500) * 100;
  cout << "Your Percenatge is " << percentage << " % \n";

  // *************Challenging  Task *************

  // 1. Input an integer from user and apply floor and ceiling functions.
  cout << "Answer NO 4 \n";
  cout << "Enter an integer: ";
  double num;
  cin >> num;

  cout << "Floor is " << floor(num) << endl;
  cout << "ceiling  is " << ceil(num) << endl;

  //   2. Write a C program to input principle (amount), time and rate (P, T, R)
  //   and find Compound Interest.
  // C I = P(1+R/100)T
  cout << "Answer NO 5 \n";
  float p, t, r, ci;

  printf("Enter the principal amount (P): \n");
  scanf("%f", &p);

  printf("Enter the time in years (T):\n ");
  scanf("%f", &t);

  printf("Enter the rate of interest (R): \n");
  scanf("%f", &r);

  ci = p * pow(1 + r / 100, t);

  printf("Compound Interest is %.2f \n ", ci);

  // *************Home Task *************
  // 1. Write a C program to convert a given integer (in seconds) to hours,
  // minutes and seconds.

  cout << "Answer NO 6 \n";
  int secs, hrs, mins, rems;

  printf("Enter time in seconds:  \n");
  scanf("%d", &secs);

  hrs = secs / 3600;
  rems = secs % 3600;
  mins = rems / 60;
  secs = rems % 60;

  printf(" %d hours, %d minutes, and %d seconds.\n", hrs, mins, secs);
  // 2. Write a C program to convert specified days into years, weeks and days

  cout << "Answer NO 7 \n";
  int days, years, weeks, remd;

  printf("Enter The Number of days:  \n");
  scanf("%d", &days);

  years = days / 365;
  remd = days % 365;
  weeks = rems / 7;
  days = rems % 7;

  printf("%d years, %d weeks, and %d days.\n", years, weeks, days);

  // ********Unary and Assignment Operators Example********
  int a = 5;
  int b = ++a;
  cout << "values of a and b are " << a << "\t" << b << endl;
  a = 5;
  b = a++;
  cout << "values of a and b are now " << a << "\t" << b << endl;
  a = 25;
  b = 10;
  a += b;
  cout << "values of a and b are now " << a << "\t" << b << endl;
  // observe the result of given assignment operator a-=b;
  cout << "values of a and b are now " << a << "\t" << b << endl;
  a *= b;
  // print result a=25,b=10;
  a /= b;
  // print result

  // *************Logical Operator Example *************
  int aa = 5, bb = 5, c = 10, result;
  result = (aa == bb) && (c > bb);
  cout << result << endl;
  result = (aa == bb) && (c < bb);
  cout << result << endl;
  result = (aa == bb) || (c < bb);
  cout << result << endl;
  result = (aa != bb) || (c < bb);
  cout << result << endl;
  result = !(aa != bb);
  cout << result << endl;
  result = !(a == bb);
  cout << result << endl;
}


// solution console
// Answer NO 1 
// Enter Your Number 
// 2
// Enter Your Power 
// 3
// 8
// Answer NO 2 
// Enter the side of the triangle: 3 
// Area of the triangle: 3.89711
// Answer NO 3 
// Enter Your English Marks 
//  33
// Enter Your Urdu Marks 
//  33
// Enter Your Math Marks 
//  33
// Enter Your Islamiyat Marks 
// 34 
// Enter Your Pakistan Studies Marks 
//  66
// Your Obtained Marks is 199
// Your Average Marks is 39.8
// Your Percenatge is 39.8 % 
// Answer NO 4 
// Enter an integer: 45
// Floor is 45
// ceiling  is 45
// Answer NO 5 
// Enter the principal amount (P): 
// 55
// Enter the time in years (T):
//  55
// Enter the rate of interest (R): 
// 55
// Compound Interest is 1616610328576.00 
//  Answer NO 6 
// Enter time in seconds:  
// 55
//  0 hours, 0 minutes, and 55 seconds.
// Answer NO 7 
// Enter The Number of days:  
// 555555
// 1522 years, 7 weeks, and 6 days.
// values of a and b are 6 6
// values of a and b are now 6 5
// values of a and b are now 35    10
// values of a and b are now 35    10
// 1
// 0
// 1
// 0
// 1
// 1