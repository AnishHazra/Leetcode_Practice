class SeatManager {
public:
    set<int> available;
    SeatManager(int n) {
        for(int i=1;i<=n;i++){
            available.insert(i);
        }
    }
    
    int reserve() {
        int removed = *available.lower_bound(0);
        available.erase(removed);
        return removed;
    }
    
    void unreserve(int seatNumber) {
        available.insert(seatNumber);
        
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */