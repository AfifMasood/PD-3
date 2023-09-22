#include <iostream>
using namespace std;
main()
{
 string name; 
 int adult_ticket; 
 int child_ticket;
 int adult_sold;
 int child_sold;
 int per_of_charity;
 int total_amount;
 int amount_of_charity;
 int after_amount;
 cout<<"Enter the movie name: ";
 cin>> name; 
 cout<<"Enter the adult ticket price: $";
 cin>> adult_ticket;
 cout<<"Enter the child ticket price: $";
 cin>> child_ticket;
 cout<<"Enter the number of adult tickets sold: ";
 cin>> adult_sold;
 cout<<"Enter the number of child tickets sold: ";
 cin>> child_sold;
 cout<<"Enter the percentage of the amount to be donated to charity: ";
 cin>> per_of_charity;
 total_amount=(adult_ticket*adult_sold)+(child_ticket*child_sold);
 amount_of_charity=total_amount*0.1;
 after_amount=total_amount-amount_of_charity;
 cout<<"                                    "<<endl;
 cout<<"Movie: "<<name<<endl;
 cout<<"Total amount generated from ticket sales: $"<<total_amount <<endl;
 cout<<"Donation to charity (10%): $"<<amount_of_charity<<endl;
 cout<<"Remaining amount after donation: $"<<after_amount;
}
 