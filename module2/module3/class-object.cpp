#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[100];
    int roll;
    double gpa;

};
int main ()
{

    //int a;
    student a;
    a.roll=10;
    a.gpa=3.4;
    //a.name="nusu";
    char temp[100]="sakib";
    strcpy(a.name,temp);

    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;

   
    return 0;
}