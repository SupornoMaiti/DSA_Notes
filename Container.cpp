#include <bits/stdc++.h>
using namespace std;

void PairsExplained();
void Vectors_Explained();

int main()
{
    PairsExplained();
    // PairsExplained1(); Not to be uncommented
    Vectors_Explained();

    return 0;
}

/*----------------------------Pairs------------------------------*/

void PairsExplained()
{
    // using namespace std;
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
}
void PairsExplained1()
{
    int Numbers[] = {1, 2, 3, 4, 5};
    char Charecter[] = {'a', 'b', 'c', 'd', 'e'};
    // pair <int[], char[]> p1 = {Numbers, Charecter};
    // cout << p1.first << " " << p1.second << endl;
    /*Arrays can't be stored in Pairs.*/
}

/*----------------------------Vectors------------------------------*/

void Vectors_Explained()
{
    vector<int> v1 = {1, 2, 3, 4, 5};

    // vector<int>:: iterator it = v1.begin();
    // v.end(); points to the last element + 1.
    // v.back(); points to the last element.

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it : v1)
    {
        cout << it << " ";
    }

    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 2);                // {1,2,4,5}
    v.erase(v.begin() + 2, v.begin() + 4); // {1,2,5}    // [begin, end)

    // Insertion Function and Some other Functions
    vector<int> v2(2, 100);            //{100,100}
    v2.insert(v2.begin() + 1, 300);    //{100,300,100}
    v2.insert(v2.begin() + 1, 2, 300); //{100,300,300,100}

    v.size(); // returns the size of the vector
}