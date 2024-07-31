#include <bits/stdc++.h>
using namespace std;
void calculate_ranks(vector<int> &scores, vector<int> &ranks, int n)
{

    vector<int> ans = scores;
    sort(ans.begin(), ans.end(), greater<int>()); // sorting the vector
    vector<int>::iterator it;                     // iterator to store the values returned ny find() function

    for (int i = 0; i < n; i++)
    {
        it = find(ans.begin(), ans.end(), scores[i]); // finds the location of all the elements in scores vector in the ans vector
        ranks[i] = it - ans.begin() + 1;              // gives the position of the score[i] in the sorted ans vector.
    }
    cout << "Input Array :-  ";
    for (int i = 0; i < n; i++)
    {
        cout << scores[i] << " ";
    }
    cout << endl;
    cout << "Output Array :- ";
    for (int i = 0; i < n; i++)
    {
        cout << ranks[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter number of scores: ";
    cin >> n;
    vector<int> scores(n);
    vector<int> ranks(n);
    cout << "Please enter the scores :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    calculate_ranks(scores, ranks, n); // calling the function for getting the scores and
}