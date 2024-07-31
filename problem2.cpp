#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of floors: -  ";
    cin >> n;    //Input for the number of floors
    int steps = 0;    //variable for counting number of steps
    for (int i = 1; i <= n; i++)
    {
        if (i == 6)
            steps += 22;
        else if (i % 2 == 0)    //for checking if the floor no. is even or odd
        {
            steps += 10 * 2 + i;
        }
        else
            steps += 10 * 2 + 10 + 1;
    }
    cout << "Number of steps are :- " << steps;
}
