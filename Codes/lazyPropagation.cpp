/*
TEMPLATE FOR LAZY PROPAGATION ON SEGMENT TREE FOR 
UPDATING A RANGE OF INTEGERS IN AN ARRAY AND GETTING THE SUM OF A SUBARRAY

*/

#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define N 10000

lli a[N];
lli T[4*N];
lli S[4*N];
lli E[4*N];
lli lazy[4*N];

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

void update(int node,int l,int r,int x){
	if (lazy[node]!=0){
		T[node]+=(E[node]-S[node]+1)*lazy[node];
		if (E[node]!=S[node]){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if (S[node]>r || E[node]<l) return;
	if (S[node]>=l && E[node]<=r){
		T[node]+=(E[node]-S[node]+1)*x;
		if (S[node]!=E[node]){
			lazy[2*node]+=x;
			lazy[2*node+1]+=x;
		}
		return;
	}
	update(2*node,l,r,x);
	update(2*node+1,l,r,x);
	T[node]=T[2*node]+T[2*node+1];
	return;
}

lli query(int node,int l,int r){
	if (S[node]>r || E[node]<l) return 0;
	if (lazy[node]!=0){
		T[node]+=(E[node]-S[node]+1)*lazy[node];
		if (S[node]!=E[node]){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if (S[node]>=l && E[node]<=r) return T[node];
	lli left=query(2*node,l,r);
	lli right=query(2*node+1,l,r);
	return left+right;
}