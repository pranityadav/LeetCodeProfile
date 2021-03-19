class RecentCounter {
public:
    queue<int>pings;
    int numPings = 0;
    
    int ping(int t) {
         while (!pings.empty() and (t - pings.front()) > 3000) {
            pings.pop();
            numPings--;
        }
        pings.push (t);
        numPings++;
        return numPings;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */