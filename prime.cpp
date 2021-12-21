//Write a program for prime no
#include<iostream>
using namespace std;
class Prime
{
public:
int no;
public:
void add()
{
cout<<"Enter any value:";
cin>>no;
}
void dis()
{
if(no%2==0)
{
cout<<"number is not prime";
}
if(no%2!=0)
{
    cout<<"number is  prime";
}

}
};
int main()
{
    Prime p;
    p.add();
    p.dis();

    return 0;

}

