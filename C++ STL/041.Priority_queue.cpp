// IN BUILT DS PRIORITY QUEUE IN C++ STL
// THIS PROGRAM PRESENTS THE USE OF THE IN-BUILT PRIORITY QUEUE DS IN C++ STL
// priority queue is usually used in forming the heaps (min and max)


#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    // push() function push the element in the pq
    pq.push(10);
    pq.push(4);
    pq.push(11);
    pq.push(2);
    pq.push(8);

    cout<<"This is the max heap "<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";    // returns the top element of the pq
        pq.pop();               // pop the top element out of the pq
    }
    cout<<endl;
    // From this display of pq we can see that this forms the max heap,
    // By DEFAULT the PRIORITY QUEUE FORMS THE MAX HEAP

    // Now if we want to make a min heap, we need to make a priority queue
    // in this manner.
    priority_queue<int, vector<int>, greater<int>> pq2;
    /*
       priority_queue supports a constructor that requires two
       extra arguments to make it min heap.
    */
    pq2.push(10);
    pq2.push(4);
    pq2.push(2);
    pq2.push(8);
    pq2.push(11);

    cout<<"This is the min heap "<<endl;
    while(!pq2.empty())
    {
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    return 0;
}
