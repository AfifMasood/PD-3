#include <iostream>
using namespace std;
main()
{
 float vege_price_kg;
 float fruit_price_kg;
 int total_kg_vege;
 int total_kg_fruit;
 float earning;
 cout<<"Enter vegetable price per kilogram (in coins): ";
 cin>> vege_price_kg;
 cout<<"Enter fruit price per kilogram (in coins): ";
 cin>> fruit_price_kg;
 cout<<"Enter total kilograms of vegetables: ";
 cin>> total_kg_vege;
 cout<<"Enter total kilograms of fruits: ";
 cin>> total_kg_fruit;
 earning=((vege_price_kg/1.94)*total_kg_vege)+((fruit_price_kg/1.94)*total_kg_fruit);
 cout<<"Total earnings in Rupees (Rps): "<<earning;
}