#include <iostream>
using namespace std;
main()
{
 string name;
 float weight_loss;
 float ans;
 cout<<"Enter the Name of the Person: ";
 cin>> name;
 cout<<"Enter the target weight loss in kilograms: ";
 cin>> weight_loss;
 ans=15*weight_loss;
 cout<<name<<" will need "<<ans<<" days to lose "<<weight_loss<<" kg of weight by following the doctor's suggestions";
}
  
 