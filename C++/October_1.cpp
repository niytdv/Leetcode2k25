class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        while(numBottles>=numExchange){
            int r=numBottles/numExchange;
            numBottles%=numExchange;
            numBottles+=r;
            sum+=r;
        }
        return sum;
    }
};
