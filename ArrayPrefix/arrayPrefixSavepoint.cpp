#include <iostream>
#include <vector>



int main() 
{
    int n,k,q;
    std::cin >> n >> k >> q;
    std::vector<int> degrees(200002);

    for(int i=0; i < n; i++){
        int a,b;
        std::cin >> a >> b;
        degrees[a]++;
        degrees[b+1]--;
    }    

    int act = 0;
    for(int i=0; i < n; i++){
        act+=degrees[i];
        degrees[i]=act;
    }

    for(int i=0; i < n; i++){
        degrees[i]=degrees[i] >= k;
        degrees[i]+=degrees[i-1]; 
    }
    

    return 0;
}
