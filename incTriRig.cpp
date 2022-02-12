/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++) //here we are printing spaces using this simple formula. in 
        {
            cout<<"  ";//each iteration of i, we are printing 5-i spaces and i stars
        }
        for(int k=1;k<i;k++)
        {
            cout<<" *";
        }
        cout<<endl;


    }
}