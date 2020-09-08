// Problem Name : Moving Average from Data Stream

/* Problem : Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window.
        MovingAverage m = new MovingAverage(3);
        m.next(1) = 1
        m.next(10) = (1 + 10) / 2
        m.next(3) = (1 + 10 + 3) / 3
        m.next(5) = (10 + 3 + 5) / 3
*/

// Solution Method : Queue STL

class MovingAverage {
public:
    /** Initialize your data structure here. */
    queue<int> q;
    int sumOfQueue = 0;
    int sizeOfQueue;
    
    MovingAverage(int size) {
        sizeOfQueue = size;
    }
    
    double next(int val) {
        if(q.size() < sizeOfQueue) {
            sumOfQueue += val;
            q.push(val);
            return double(sumOfQueue)/double(q.size());
        }
        else {
            int x = q.front();
            q.pop();
            sumOfQueue -= x;
            q.push(val);
            sumOfQueue += val;
            return double(sumOfQueue)/double(q.size());
        }
    }
};
