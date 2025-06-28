//https://www.hackerrank.com/contests/mountblue-technologies/challenges/breaking-best-and-worst-records/submissions/code/1393678333
vector<int> breakingRecords(vector<int> scores) {

    int high = scores[0];
    int least = scores[0];
    
    int size = scores.size();
    
    int hc =0;
    int lc =0;
    
    vector<int> res;
    
    for(int i=1; i < size; i++)
    {
        if(scores[i] > high)
        {
            high = scores[i];
            hc++;
        }
        
        if(scores[i] < least)
        {
            least = scores[i];
            lc++;
        }
    }
    
    res.push_back(hc);
    res.push_back(lc);
    
    return res;
}
