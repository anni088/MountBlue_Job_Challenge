//  https://www.hackerrank.com/contests/mountblue-technologies/challenges/compare-the-triplets/submissions/code/1393681301
vector<int> compareTriplets(vector<int> a, vector<int> b) {

    vector<int> res(2,0);
    
    for(int i=0; i < 3; i++)
    {
        if(a[i] > b[i])
            res[0]++;
        else if(a[i] < b[i])
            res[1]++;
    }
    
    return res;
}
