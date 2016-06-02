#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;

const int MAXNODE = 65500;
const int SIGMA_SIZE = 128;
int totweb = 0;
int ans[17];
struct AutoMac{
	int next[MAXNODE][SIGMA_SIZE];
	int fail[MAXNODE];
	int end[MAXNODE];
	int root,L;
	
	int newnode(){
		for(int i=0;i<128;i++)
			next[L][i] = -1;
		end[L++] = 0;
		return L-1;
	}
	
	void init(){
		L = 0;
		root = newnode();
	}

	
	void insert(char *k,int v){
		int len = strlen(k);
		int now = root;
		for(int i=0; i<len; i++){
			int c = k[i];
			if(next[now][c] == -1)
				next[now][c] = newnode();
			now = next[now][c];
		}
		end[now] = v;
	}
	
	void build(){
		queue<int>Q;
		fail[root] = root;
		for(int i=0;i<128;i++){
			if(next[root][i] == -1)
				next[root][i] = root;
			else{
				fail[next[root][i]] = root;
				Q.push(next[root][i]);
			}
		}
		while(!Q.empty()){
			int now = Q.front();
			Q.pop();
			for(int i=0;i<128;i++){
				if(next[now][i] == -1)
					next[now][i] = next[fail[now]][i];
				else{
					fail[next[now][i]] = next[fail[now]][i];
					Q.push(next[now][i]);
				}
			} 
		}
	}
	
	int query(char *k,int no){
		int len = strlen(k);
		int now = root;
		int tot = 0;
		for(int i=0; i<len; i++){
			int c = k[i];
			now = next[now][c];
			int tmp = now;
			while(tmp != root){
				if(end[tmp]!=0)
					ans[tot++] = end[tmp];
				tmp = fail[tmp];
			}
		}
		if(tot!=0){
			totweb++;
			sort(ans,ans+tot);
			printf("web %d:",no);
			for(int i=0;i<tot;i++) printf(" %d",ans[i]);
			printf("\n");
		} 
	}
	void test(){
		for(int i=0;i<L;i++) printf("%d ",end[i]);
	}
	
	
}gao;

char k[1000007];

int main()
{
	int n;
	gao.init();
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",k);
		gao.insert(k,i);
	}
	gao.build();
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",k);
		gao.query(k,i);
	}
	printf("total: %d\n",totweb);

	return 0;
}
