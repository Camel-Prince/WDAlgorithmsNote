#include<iostream>
#include<cstdio>

using namespace std;

const int MAXN = 1001;

int dp[MAXN]={0};
int v[MAXN];
int w[MAXN];

int main(){
	int n,m;
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;++i){
		scanf("%d%d",&w[i],&v[i]);
	}
	for(int i=0;i<n;++i){
		for(int j=m;j>=w[i];--j){
			dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	printf("%d\n",dp[m]);
	return 0;
}
