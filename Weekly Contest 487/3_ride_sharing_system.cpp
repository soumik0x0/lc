#include <vector>
#include <list>

using namespace std;

class RideSharingSystem {
private:
    list<int> waitingRiders;
    list<int> availableDrivers;

public:
    RideSharingSystem() {
    }
    
    void addRider(int riderId) {
        waitingRiders.push_back(riderId);
    }
    
    void addDriver(int driverId) {
        availableDrivers.push_back(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        if (waitingRiders.empty() || availableDrivers.empty()) {
            return {-1, -1};
        }
        
        int rider = waitingRiders.front();
        waitingRiders.pop_front();
        
        int driver = availableDrivers.front();
        availableDrivers.pop_front();
        
        return {driver, rider};
    }
    
    void cancelRider(int riderId) {
        waitingRiders.remove(riderId);
    }
};