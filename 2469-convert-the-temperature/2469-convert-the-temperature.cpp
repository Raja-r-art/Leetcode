class Solution {
public:
    vector<double> convertTemperature(double c) {
        vector<double>ans;
        double k=(double)c+273.15;
        double f=(double)c*1.80+32.00;
        return {k,f};
    }
};