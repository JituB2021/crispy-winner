#include<iostream>
using namespace std;
int main()
{
for (int i=1; i<=5; i++)
{
    for(int j=1; j<=5-i+1; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}



/*
* * * * *    total 5 lines with maximum of 5 *
* * * *      line no. 1 --> * count 5
* * *        line no. 2 --> * count 4
* *          .......................
*            line no. i --> * count 5-i+1
*/





}