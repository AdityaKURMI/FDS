#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cout<<"enter no of rows and coloumn n and m"<<endl;
cin>>n>>m;
int a[n][m];
int c[n][m];

int v=0;
int v1=0;

cout<<"enter 1st spar matrix"<<endl;
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   cin>>a[i][j];
   if(a[i][j]!=0)v++;
  }
}
cout<<"enter 2nd spar matrix"<<endl;
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   cin>>c[i][j];
   if(c[i][j]!=0)v1++;
  }
}

int b[v+1][3];
int d[v1+1][3];

//1st matrix
b[0][0] = n;
b[0][1] = m;
b[0][2] = v;

int q=1;

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   if(a[i][j]!=0){
   b[q][0]=i;
   b[q][1]=j;
   b[q][2]=a[i][j];
   q++;
   }
  }
}

cout<<"first sparse matrix : "<<"\n";
for(int i=0;i<v+1;i++){
  for(int j=0;j<3;j++){
   cout<<b[i][j]<<" ";
   
  }
cout<<endl;
}
cout<<endl;

//2nd matrix
d[0][0] = n;
d[0][1] = m;
d[0][2] = v1;

int f=1;

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   if(c[i][j]!=0){
   d[f][0]=i;
   d[f][1]=j;
   d[f][2]=c[i][j];
   f++;
   }
  }
}

cout<<"2nd sparse matrix : "<<"\n";
for(int i=0;i<v1+1;i++){
  for(int j=0;j<3;j++){
   cout<<d[i][j]<<" ";
   
  }
cout<<endl;
}
cout<<endl;

//addition//
int s[v+v1+1][3];
int i=1,j=1,k=1;
int g=0;
while(i<=v && j<=v1){
if(b[i][0]==d[j][0]  &&  b[i][1]==d[j][1]){
s[k][0]=b[i][0];
s[k][1]=b[i][1];
s[k][2]=b[i][2] + d[j][2];
i++;
j++;
k++;
g++;
}
else if(b[i][0]==d[j][0]  && b[i][1]<d[j][1]){

s[k][0] = b[i][0];
s[k][1] = b[i][1];
s[k][2] = b[i][2];
k++;
i++;
g++;
}

else if(b[i][0]==d[j][0]  && b[i][1]>d[j][1]){
s[k][0] = d[j][0];
s[k][1] = d[j][1];
s[k][2] = d[j][2];
k++;
j++;
g++;
}



else if(b[i][0]>d[j][0]){
s[k][0] = d[j][0];
s[k][1] = d[j][1];
s[k][2] = d[j][2];
k++;
j++;
g++;
}
else if(b[i][0]<d[j][0]){
s[k][0] = b[i][0];
s[k][1] = b[i][1];
s[k][2] = b[i][2];
k++;
i++;
g++;
}

}

if(i==v+1){
for(int z=i;z<=v;z++){
s[k][0] = b[z][0];
s[k][1] = b[z][1];
s[k][2] = b[z][2];
k++;
g++;
}
}

else if(j==v1+1){
for(int z=j;z<=v1;z++){
s[k][0] = d[z][0];
s[k][1] = d[z][1];
s[k][2] = d[z][2];
k++;
g++;
}
}

s[0][0]=n;
s[0][1]=m;
s[0][2]=g;

cout<<"addition of  sparse matrices : "<<"\n";
for(int i=0;i<g+1;i++){
  for(int j=0;j<3;j++){
   cout<<s[i][j]<<" ";
   
  }
cout<<endl;
}
cout<<endl;

///simple transpose of matrix////
int T[b[0][2]+1][3];
T[0][0]=b[0][1];
T[0][1]=b[0][0];
T[0][2]=b[0][2];

int p = 1;
for(int j=0;j<b[0][1];j++){
for(int i=1;i<=b[0][2];i++){
if(b[i][1]==j){
T[p][0]=b[i][1];
T[p][1]=b[i][0];
T[p][2]=b[i][2];
p++;
}
}
}

cout<<"simple sparse transpose of matrix 1 "<<"\n";
for(int i=0;i<v+1;i++){
 for(int j=0;j<3;j++){
  cout<<T[i][j]<<" ";

}
cout<<endl;
}
cout<<endl;

///fast transpose of matrix //
cout<<"fast sparse transpose of matrix 1 "<<"\n";
int p1=b[0][1];
int len=b[0][2];
int result[len+1][3];
int tot[p],index[p+1];
for(int i=0;i<p1;i++){
	tot[i]=0;
}
for(int i=1;i<=len;i++){
	int col=b[i][1];
	tot[col]++;
}
index[0]=1;
for(int i=1;i<=p1;i++){
	index[i]=index[i-1]+tot[i-1];
}
result[0][0]=b[0][1];
result[0][1]=b[0][0];
result[0][2]=b[0][2];
for(int i=1;i<=len;i++){
	int col=b[i][1];
	int l=index[col];
	result[l][0]=b[i][1];
	result[l][1]=b[i][0];
	result[l][2]=b[i][2];
	index[col]++;
}
for(int i=0;i<=result[0][2];i++){
	for(int j=0;j<3;j++){
		cout<<result[i][j]<<" ";
	}
	cout<<endl;
}
return 0;






}