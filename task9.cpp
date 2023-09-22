#include <iostream>
using namespace std;
main()
{
 int digit;
 int mod1;
 int mod2;
 int mod3;
 int mod4;
 int div1;
 int div2;
 int div3;
 int div4;
 int sum;
 cout<<"Enter a 4-digit number: ";
 cin>> digit;
 mod1=digit%10;
 div1=digit/10;
 mod2=div1%10;
 div2=div1/10;
 mod3=div2%10;
 div3=div2/10;
 sum=mod1+mod2+mod3+div3;
 cout<<"Sum of the individual digits: "<<sum;
}