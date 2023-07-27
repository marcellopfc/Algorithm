#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(ll i=a;i<b;++i)
#define dbg(x) cout<<#x <<" = "<< x << endl
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

const int INF=0x3f3f3f3f;
const ll LINF=0x3f3f3f3f3f3f3f3fll;

void printVector(int *A,int n){
	cout<<"Vector: \n[ ";
	for(int i=0;i<n;i++){
		cout<<A[i];
		if(i!=n-1) cout<<" , ";
	}
	cout<<" ]\n";
}

void insertionSort(int *A,int n){
	for(int i=1;i<n;i++){
		int key=A[i];
		int j=i-1;
		while(j>0 and A[j]> key){
			A[j+1]=A[j];
			j--;
		}A[j+1]=key;
	}
}

int main(){
	
	int n;
	cout<<"Number of elements: ";
	cin>>n;
	cout<<"\n";
	int *A=new int(n);
	for(int i=0;i<n;i++){
		cout<<"Insert element: ";
		cin>>A[i];
	}
	insertionSort(A,n);
	printVector(A,n);
}

