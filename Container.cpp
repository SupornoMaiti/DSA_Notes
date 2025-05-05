#include <bits/stdc++.h>
using namespace std;

void PairsExplained();
void Vectors_Explained();
void Lists_Explained();
void Deque_Explained();
void Stack_Explained();
void Queue_Explained();

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
    v.erase(v.begin() + 2, v.begin() + 4); // {1,2}    // [begin, end) erases elements from start up to end, but NOT including, end

    // Insertion Function and Some other Functions
    vector<int> v2(2, 100);            //{100,100}
    v2.insert(v2.begin() + 1, 300);    //{100,300,100}
    v2.insert(v2.begin() + 1, 2, 300); //{100,300,300,100}

    v.size();      // returns the size of the vector
    v2.pop_back(); // removes the last element  //{100}
    vector<int> v3, v4;
    v3.swap(v4); // swaps the contents of v3 and v4
    v.clear();   // clears the vector
    v.empty();   // returns true if the vector is empty
}

/*----------------------------Lists------------------------------*/

void Lists_Explained()
{
    list<int> l1;
    auto l1 = {1, 2, 3, 4, 5};
    // rest functions are same as vector.
    // push_back, pop_back, push_front, pop_front, insert, erase, clear, empty etc.....
}

/*----------------------------Deque------------------------------*/

void Deque_Explained()
{
    deque<int> d1;
    auto d1 = {1, 2, 3, 4, 5};
    // rest functions are same as vector.
    // push_back, pop_back, push_front, pop_front, insert, erase, clear, empty etc.....
}

/*----------------------------Stack------------------------------*/

void Stack_Explained()
{
    stack<int> s1;
    s1.push(1);    // {1}
    s1.push(2);    // {2,1}
    s1.push(3);    // {3,2,1}
    s1.push(4);    // {4,3,2,1}
    s1.emplace(5); // {5,4,3,2,1}

    s1.top(); // returns the top element of the stack // prints 5
    s1.pop(); // removes the top element of the stack // {1,2,3,4}

    // push, pop, top are the main functions of stack and O(1) time complexity.
    // Indexing does not work in stack.
    // s1[0]; // Error
    // Stack is LIFO (Last In First Out) data structure.
}

/*----------------------------Queue------------------------------*/

void Queue_Explained()
{
    queue<int> q1;
    q1.push(1);    // {1}
    q1.push(2);    // {1,2}
    q1.push(3);    // {1,2,3}
    q1.push(4);    // {1,2,3,4}
    q1.emplace(5); // {1,2,3,4,5}

    q1.front(); // returns the front element of the queue // prints 1
    q1.back();  // returns the back element of the queue  // prints 5
    q1.pop();   // removes the front element of the queue // {2,3,4,5}

    // push, pop, front and back are the main functions of queue and O(1) time complexity.
    // Indexing does not work in queue.
    // q1[0]; // Error
    // Queue is FIFO (First In First Out) data structure.
}
