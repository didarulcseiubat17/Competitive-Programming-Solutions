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
#define NL pf("\n");
#define PP getchar();
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);


void solve(void)
{
    string str;
    map<char, char> ch;
    
    ch['O']= 'O';
    ch['X']= 'X';
    ch['U']= 'U';
    ch['V']= 'V';
    ch['W']= 'W';
    ch['Y']= 'Y';
    ch['I']= 'I';
    
    ch['O' + ' ']= 'O' + ' ';
    ch['X' + ' ']= 'X' + ' ';
    ch['U' + ' ']= 'U' + ' ';
    ch['V' + ' ']= 'V' + ' ';
    ch['W' + ' ']= 'W' + ' ';
//    ch['Y' + ' ']= 'Y' + ' ';
//    ch['I' + ' ']= 'I' + ' ';
    
    ch['p']= 'q';
    ch['q']= 'p';
    ch['b']= 'd';
    ch['d']= 'b';
    
    ch['M']= 'M';
    ch['H']= 'H';
    ch['T']= 'T';
    ch['A']= 'A';
//    ch['']= '';
    
    cin>>str;
    int len= str.size();
    
    bool spal= true;
    for(int i= 0; i<= len/2; i++){
        if(ch[str[i]] != str[len-i-1]){
            spal= false;
            break;
        }
    }
    
    cout<< ((spal)? "TAK" : "NIE") <<endl;
    
}

void dummey(){
    
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // dummey();
    solve();

    
    return 0;
}
