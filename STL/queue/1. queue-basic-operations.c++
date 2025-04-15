#include<iostream>
#include<queue>
using namespace std;
void print(queue<int> val){  // can't pass by reference since the Queue can't index we should go wit pop, so we can't alter the orginal so we pass by value
    cout<<"The elements in the Queue: "<<endl;
    while(!val.empty()){
        cout<<val.front()<<'\t';
        val.pop();
    }
    cout<<"\n";
}
int main(){
    queue<int> q;
    cout<<"'1' if the queue is empty '0' it is not empty :   "<<q.empty()<<endl;
    q.push(10);
    cout<<"The front element in Queue is    :   "<<q.front()<<endl;
    print(q);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    print(q);
    cout<< "Currently the Queue size is:    "<<q.size()<<endl;
    cout<< "The last element of Queue is:   "<<q.back()<<endl;
}