//#Name: Anonta Haque #Problm:
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
#include <bitset>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define pf printf
#define NL cout<<"\n";
#define PP getchar();
#define pque priority_queue
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

void solve(void){
    int Tc;
    int n, m, mx, min, temp;
    
    cin>>Tc;
    cin.ignore();
    
    map<int, int> a;
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        a.clear();
        min= 0;
        cin>>n>>m;
        mx= max(n,m);
        
        while(n--){
            cin>>temp;
            a[temp]++;
        }
        
        while(m--){
            cin>>temp;
            a[temp]--;
        }
        
        map<int,int>::iterator mi= a.begin(), me= a.end();
        while(mi != me){
            min += abs(mi->second);
            mi++;
        }
        
        cout<< min <<endl;
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
