class Solution {
public:

    int getTime(vector<string>& garbage, vector<int>& travel, char type)
    {
        int addUp = 0;
        int total = 0;
        int curr = 0;
        for(int i = 0;i<garbage.size();i++)
        {
            curr = 0;
            if(i != 0) addUp += travel[i-1];

            for(char ch : garbage[i])
            {
                if(ch == type) curr++;
            }

            if(curr != 0)
            {
                total += addUp;
                addUp = 0;
            }
            total += curr;
        }
        return total;
    }
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
       int ans = 0;
       ans += getTime(garbage, travel, 'M');
       ans += getTime(garbage, travel, 'P');
       ans += getTime(garbage, travel, 'G');
       return ans;
    }
};
