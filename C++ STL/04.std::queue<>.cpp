// IN BUILT DS QUEUE IN C++ STL
// THIS PROGRAM PRESENTS THE USE OF THE IN-BUILT QUEUE DS IN C++ STL 

#include <iostream>
#include <queue>
using namespace std;

void show(queue <int> q)
{
    queue <int> g = q;
    while (!g.empty())     // empty() function checks if the queue is empty, if yes
                           // then returns true else false
    {
        cout << '\t' << g.front(); // returns the front element of the queue
        g.pop();                   // pop() pops the front element out of queue
    }
    cout << '\n';
}

int main()
{
    queue <int> quiz;             // queue declaration
    // push function push the element in the queue
    quiz.push(10);
    quiz.push(20);
    quiz.push(30);

    cout << "The queue gquiz is : ";
    show(quiz);

    cout << "\nquiz.size() : " << quiz.size();
    cout << "\nquiz.front() : " << quiz.front();
    cout << "\nquiz.back() : " << quiz.back();  // back element of the queue

    cout << "\ngquiz.pop() : ";
    quiz.pop();
    show(quiz);

    return 0;
}
