#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>

#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<sstream>


#define loop(i, n) for(int i=0; i<n; i++)
#define FOR(i, s, e) for(int i=s; i<e; i++)
#define mem(a, v) memset(a, v, sizeof(a))
#define pb push_back
#define sf scanf
#define pf printf
#define getint(a) sf("%d", &a)
#define INF 1<<29
#define SZ(v) int(v.size())
#define pi acos(-1.0)
#define all(v) v.begin(), v.end()
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define ll long long
#define debug cout<<"came here"<<endl

using namespace std;

#define MAXX 100005

int cnt, sum[MAXX * 4];
int ara[MAXX];


void insert_update(int idx, int st, int ed, int pos, int value)
{
    if(st == pos && pos == ed)
    {
        sum[idx] = value;
        return;
    }

    int l = idx<<1;
    int r = l + 1;
    int mid = (st + ed) / 2;

    if(pos <= mid) insert_update(l, st, mid, pos, value);
    else insert_update(r, mid+1, ed, pos, value);

    sum[idx] = sum[l] + sum[r];
}


int quer(int idx, int st, int ed, int i, int j)
{
    if(i==st && j==ed) return sum[idx];

    int l = idx<<1;
    int r = l + 1;
    int mid = (st + ed) / 2;


    if(j<=mid)
    {
        return quer(l, st, mid, i, j);
    }
    else if(i > mid)
    {
        return quer(r, mid+1, ed, i, j);
    }
    else return quer(l, st, mid, i, mid) + quer(r, mid+1, ed, mid+1, j);
}



int main()
{
    //read();
    int kases, kaseno = 0;

    int count_query;
    int cmd;
    int i, j, k;

    getint(kases);


    while(kases--)
    {
        pf("Case %d:\n", ++kaseno);
        getint(cnt); getint(count_query);
        int num;

        for(int i=1; i<=cnt; i++)
        {
            getint(num);
            ara[i] = num;
            insert_update(1,1, cnt, i,num);
        }


        loop(i, count_query)
        {
            getint(cmd); getint(j);

            if(cmd == 1)
            {

                pf("%d\n", ara[j+1]);
                ara[j+1] = 0;
                insert_update(1, 1, cnt, j+1, 0);
            }
            else
            {
                getint(k);
                if(cmd == 2)
                {
                    ara[j+1] += k;
                    insert_update(1, 1, cnt, j+1, ara[j+1]);
                }
                else
                {
                    pf("%d\n", quer(1, 1, cnt, j+1, k+1));
                }

            }

        }


    }
}