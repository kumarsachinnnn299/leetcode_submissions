class ParkingSystem {
    
    private:
    int small,medium,big;
    
public:
    ParkingSystem(int big, int medium, int small) {
        this->small=small;
         this->medium=medium;
         this->big=big;
        
    }
    
    bool addCar(int carType) {
        if(carType==1&&big)
        {
            big--;
            return true;
        }
        else if(carType==2&&medium)
        {
            medium--;
            return true;
        }
        else if(carType==3&&small)
        {
            small--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */