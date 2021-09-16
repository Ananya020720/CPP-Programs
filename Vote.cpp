#include <iostream>
using namespace std;

int main() 
{ 
    int age;
    cout<<"Enter the age of the user:"<<endl;
    cin>>age;
    if(age>=18)
       cout<<"The user is eligible to vote"<<endl;
    else
       cout<<"The user is not eligible to vote"<<endl;
    return 0;
}
