//https://www.hackerrank.com/contests/mountblue-technologies/challenges/staircase/submissions/code/1393680468

void staircase(int n) {

    for(int i =0 ; i < n; i++)
    {
        for(int j=n-i-1; j > 0; j--)
        {
            cout << " " ;
        }
        
        for(int j=0; j < i+1; j++)
        {
            cout << "#";
        }
        
        cout << endl;
    }
}
