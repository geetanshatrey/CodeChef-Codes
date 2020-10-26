// Link to the problem : https://practice.geeksforgeeks.org/problems/c-stl-set-5-queue/1/
// Problem Name : C++ STL | Set 5 (queue)
// Time Complexity : O(1)
// Technique : Stacks in STL

/*inserts an element x at 
the back of the queue q */
void push(queue<int> &q,int x)
{
    //Your code here
    q.push(x);
}


/*pop out the front element 
from the queue q and returns it */
int pop(queue<int> &q)
{
   //Your code here
   if(!q.empty()) {
       int x = q.front();
       q.pop();
       return x;
   }
   else {
       return -1;
   }
}

/*returns the size of the queue q */
int getSize(queue<int> &q)
{
    //Your code here
    return q.size();
}

/*returns the last element of the queue */
int getBack(queue<int> &q)
{
	//Your code here
	if(!q.empty())
	    return q.back();
	else
	    return -1;
}

/*returns the first element of the queue */
int getFront(queue<int> &q)
{
	//Your code here
	if(!q.empty())
	    return q.front();
	else
	    return -1;
}
