
#include<iostream.h>
void getdata();
void dispdata();
struct item
{
    private:
    int number;
    float cost;
    public;
    void getdata();
    void dispdata();
}
void item :: getdata()
{
    cout<<"Enter values for number and cost\n";
    cin >> number >> cost;

}
void item :: dispdata()
{
    cout << "number and cost values of structure variable s -"<< number << "and" << cost << "respectively  \n"
}

