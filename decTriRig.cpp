#include<iostream>
using namespace std;
int main()
{
for(int i=5;i>=1;i--)
{
     for(int k=5-i;k>=1;k--) //we start with printing space then *
    {
        cout<<"  "; //remember to DOUBLE space here if you use a space in line 13 otherwise it will look like triangle!!!!
    }
    for(int j=1;j<=i;j++)
    {
        cout<<"* ";  //
    }
    cout<<endl;
}
/*
* * * * *       consider this tri angle as * * * * *   consider + as space 
  * * * *                                  + * * * *
    * * *                                  + + * * *
      * *                                  + + + * *
        *                                  + + + + *
 We know how to print this!! lets do it
*/
}