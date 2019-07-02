#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <map>
#include <string>
#include <set>
#include <stack>
using namespace std;

#define ll long long

#define MAXN 1004

struct Nodo{
	int v,d,precio;
	Nodo(int v,int d):v(v),d(d){}
	Nodo(int v,int d,int p):precio(p),v(v),d(d){}
	bool operator<(const Nodo x) const{
		if (precio != x.precio) return precio > x.precio;
		return d > x.d;
	}
};

vector<Nodo> ady[MAXN];
int s,t,D[MAXN][103],precio[MAXN],T,q,oo=1e8;
bool marcas[MAXN][103];

int main(){
	int n,m,v,u,i,p,j,t,fin,sol;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++) scanf("%d",&precio[i]);
	while(m--){
		scanf("%d%d%d",&v,&u,&p);
		ady[v].push_back(Nodo(u,p));
		ady[u].push_back(Nodo(v,p));
	}
	scanf("%d",&q);
	while(q--){
		scanf("%d%d%d",&T,&s,&fin);

		for(i=0;i<n;i++)
			for(j=0;j<=T;j++)
				D[i][j] = -1;

		priority_queue<Nodo> cola;
		cola.push(Nodo(s,0,0));
		sol = -1;
		while(!cola.empty()){
			v = cola.top().v;
			t = cola.top().d;
			p = cola.top().precio;
			cola.pop();
			if (v == fin){
				sol = p;
				break;
			}
			if (D[v][t] != -1) continue;
			D[v][t] = p;
			if (t < T)
				cola.push(Nodo(v,t+1,p + precio[v]));

			for(int i=ady[v].size()-1;i>=0;i--){
				if (ady[v][i].d > t) continue;
				u = ady[v][i].v;
				cola.push(Nodo(u,t-ady[v][i].d, p));
			}
		}
		if (sol == -1)
			printf("impossible\n");
		else
			printf("%d\n",sol);
	}
	return 0;
}