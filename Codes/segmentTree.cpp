/*
SEGMENT TREE TEMPLATE FOR SUM OF A SUBARRAY IN AN ARRAY OF INTEGERS
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef pair <lli,lli> pii;
#define ff first
#define ss second
#define MOD 1000000007

lli a[N];
lli T[4*N];
lli S[4*N];
lli E[4*N];

//POINT UPDATE,RANGE QUERY
void build(int node,int l,int r){
	S[node]=l;
	E[node]=r;
	if (l==r){
		T[node]=a[l];
		return;
	}
	int mid=(l+r)/2;
	build(2*node,l,mid);
	build(2*node+1,mid+1,r);
	T[node]=T[2*node]+T[2*node+1];
	return;
}

void update(int node,int i,int x){
	if (S[node]==E[node]){
		T[node]=x;
		return;
	}
	if (i<=((S[node]+E[node])/2)){
		update(2*node,i,x);
	}
	else update(2*node+1,i,x);
	T[node]=T[2*node]+T[2*node+1]
	return;
}

int query(int node,int l,int r){
	if (r<S[node] || l>E[node]) return 0;
	if (l<=S[node] && r>=E[node]) return T[node];
	int left=query(2*node,l,r);
	int right=query(2*node+1,l,r);
	return left+right;
}

