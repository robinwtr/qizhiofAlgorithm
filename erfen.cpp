#include<iostream>
using namespace std;
const int N = 1e5-5;
int n,m,q[N];
int main()
{
    cin >> n >> m;
    for(int i =  0; i < n; i ++) cin >> q[i];
    while(m --){
        int k;
        cin >> k;
        int l = -1, r = n;
        while(l+1 != r){
            int mid = l + r >> 1;
            if(q[mid] >= k) r = mid;
            else l = mid;
        }
        if(q[r] != k) puts("-1 -1");
        else{
            printf("%d ", r);
            int ll = -1, rr = n;
            while(ll+1 != rr){
                int mid = ll+rr >> 1;
                if(q[mid] <= k) ll = mid;
                else rr = mid;
            }
        if (q[ll] != k) printf("%d\n",r);
        else printf("%d\n",ll);
        }
    }
}