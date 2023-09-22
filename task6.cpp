#include <iostream>
using namespace std;
main()
{
 float size;
 float cost_of_bag;
 float area_sqfeet;
 float cost_perpound;
 float cost_per_sqfeet;
 cout<<"Enter the size of the fertilizer bag in pounds: ";
 cin>> size;
 cout<<"Enter the cost of the bag: $";
 cin>> cost_of_bag;
 cout<<"Enter the area in square feet that can be covered by the bag: ";
 cin>> area_sqfeet;
 cost_perpound=cost_of_bag/size;
 cost_per_sqfeet=cost_of_bag/area_sqfeet;
 cout<<"Cost of fertilizer per pound: $"<< cost_perpound <<endl;
 cout<<"Cost of fertilizing per square foot: $"<<cost_per_sqfeet;
}
  