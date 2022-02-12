/*
* * * * *       consider this tri angle as * * * * *   consider + as space 
  * * * *                                  + * * * *
    * * *                                  + + * * *
      * *                                  + + + * *
        *                                  + + + + *
 We know how to print this!! lets do it
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(int k=i;k<=5;k++)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
}