#include <cmath>
#include <iostream>
using namespace std;

int main() {

  cout << "Answer NO 1 \n";
  cout << "Enter Your Number " << endl;
  int number;
  cin >> number;
  cout << "Enter Your Power " << endl;
  int power;
  cin >> power;

  cout << pow(number, power) << endl;

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

  cout << "Answer NO 4 \n";
  cout << "Enter an integer: ";
  double num;
  cin >> num;

  cout << "Floor is " << floor(num) << endl;
  cout << "ceiling  is " << ceil(num) << endl;

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

  cout << "Answer NO 6 \n";
  int secs, hrs, mins, rems;

  printf("Enter time in seconds:  \n");
  scanf("%d", &secs);

  hrs = secs / 3600;
  rems = secs % 3600;
  mins = rems / 60;
  secs = rems % 60;

  printf(" %d hours, %d minutes, and %d seconds.\n", hrs, mins, secs);

  cout << "Answer NO 7 \n";
  int days, years, weeks, remd;

  printf("Enter The Number of days:  \n");
  scanf("%d", &days);

  years = days / 365;
  remd = days % 365;
  weeks = rems / 7;
  days = rems % 7;

  printf("%d years, %d weeks, and %d days.\n", years, weeks, days);
}