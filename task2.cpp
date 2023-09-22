#include <iostream>
using namespace std;
main()
{
 int mins;
 int per_secs;
 int frames;
 cout<<"Number of Minutes: ";
 cin>> mins;
 cout<<"Frames per Second: ";
 cin>> per_secs;
 frames=(mins*60)*per_secs;
 cout<<"Total Number of Frames: "<<frames;
}
