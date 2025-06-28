//https://www.hackerrank.com/contests/mountblue-technologies/challenges/kangaroo/submissions/code/1393679977

string kangaroo(int x1, int v1, int x2, int v2) {

    if(v1 == v2)
    return (x1 == x2)?"YES":"NO";
    
    /*
        x1 + v1*n  =  x2 + v2*n
        x1 - x2    =  (v2 - v1)*n
        n = (x1 - x2)/(v2 - v1)
    */
    
    int N = x1 - x2;
    int D = v2 - v1;
    
    if(D != 0 && N%D == 0 && N/D >0)
        return "YES";
    
    return "NO";
}
