#include <bits/stdc++.h>
using namespace std;

void PairsExplained();
void Vectors_Explained();
void Lists_Explained();
void Deque_Explained();
void Stack_Explained();
void Queue_Explained();
void PriorityQueue_Explained();
void Set_Explained();
void multiset_Explained();
void unorderedSet_Explained();

int main()
{

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
    l1 = {1, 2, 3, 4, 5};
    // rest functions are same as vector.
    // push_back, pop_back, push_front, pop_front, insert, erase, clear, empty etc.....
}

/*----------------------------Deque------------------------------*/

void Deque_Explained()
{
    deque<int> d1;
    d1 = {1, 2, 3, 4, 5};
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
void priorityQueue_Explained()
{
    priority_queue<int> pq1;
    pq1.push(1);    // {1}
    pq1.push(2);    // {2,1}
    pq1.push(3);    // {3,2,1}
    pq1.push(4);    // {4,3,2,1}
    pq1.emplace(5); // {5,4,3,2,1}

    pq1.top(); // returns the top element of the queue // prints 5
    pq1.pop(); // removes the top element of the queue // {4,3,2,1}

    // push, pop and top are the main functions of priority queue.
    // push and pop are O(log n) time complexity.
    // top is O(1) time complexity.
    // How minimum priority queue is declared
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);  // {5}
    pq2.push(2);  // {2,5}
    pq2.push(8);  // {2,5,8}
    pq2.push(10); // {2,5,8,10}

    pq2.top(); // prints 2
}

/*----------------------------Set------------------------------*/

void Set_Explained()
{
    set<int> s1;   // set is a collection of unique and ordered elements
    s1.insert(1);  // {1}
    s1.insert(2);  // {1,2}
    s1.insert(3);  // {1,2,3}
    s1.insert(4);  // {1,2,3,4}
    s1.emplace(5); // {1,2,3,4,5}

    // rest functions are same as vector.

    auto it = s1.find(3);  // returns the iterator to the element 3
    s1.erase(3);           // removes the element 3 from the set//{1,2,4,5}
    int cnt = s1.count(3); // returns the number of occurrences of 3 in the set (0 or 1)

    //{1,2,3,4,5}
    auto it1 = s1.find(2);
    auto it2 = s1.find(4);
    s1.erase(it1, it2); // removes the elements from it1 to it2 (it2 is not included) // {1,4,5}

    // study about lower_bound and upper_bound
}

void multiset_Explained()
{
    // all are same as set but multiset allows duplicate elements.
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);          // removes all occurrences of 1 from the multiset
    ms.erase(ms.find(1)); // removes only one occurrence of 1 from the multiset
}
void unorderedSet_Explained()
{
    // unordered_set is a collection of unique and unordered elements
    unordered_set<int> us;
    us.insert(1);  // {1}
    us.insert(3);  // {1,3}
    us.insert(5);  // {1,3,5}
    us.insert(6);  // {1,3,5,6}
    us.emplace(9); // {1,3,5,6,9}

    auto it = us.find(3);  // returns the iterator to the element 3
    us.erase(3);           // removes the element 3 from the set//{1,2,4,5}
    int cnt = us.count(3); // returns the number of occurrences of 3 in the set (0 or 1)

    // all operations are O(1) time complexity.its more efficient than set..
    // in rarest of rare cases, it can be O(n) time complexity.
}