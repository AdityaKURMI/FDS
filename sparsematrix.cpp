#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m; 
cout<<"Enter row :";
cin>>n;
cout<<"Enter column:";
cin>>m;
int a[n][m];
int a1[n][m];
int c=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cin>>a[i][j];            //first matrix input
if(a[i][j]!=0) c++;       //counting non-zero elements
}
}
int c1=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cin>>a1[i][j];              //second matrix input
if(a1[i][j]!=0) c1++;      //counting non zero elements
}
}
int b[c+1][3];              //matrix of first sparex matrix
b[0][0]=n;                  //giving first input as no. of rows,no. of columns,no. of non-zero elements
b[0][1]=m;
b[0][2]=c;
int k=1;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(a[i][j]!=0){                     //if it's a non-zero element then we put it in sparex matrix by storing its i,j and its value
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
k++;
}
}
}
int d[c1+1][3];           

//matrix of second sparex matrix


d[0][0]=n;
d[0][1]=m;
d[0][2]=c1;
int k1=1;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(a1[i][j]!=0){
d[k1][0]=i;
d[k1][1]=j;
d[k1][2]=a1[i][j];
k1++;
}
}
}
cout<<"The first sparse matrix will be:"<<endl;
for(int i=0;i<c+1;i++){
for(int j=0;j<3;j++){
cout<<b[i][j]<<" ";
}
cout<<endl;
}
cout<<"The second sparse matrix is:"<<endl;
for(int i=0;i<c1+1;i++){
for(int j=0;j<3;j++){
cout<<d[i][j]<<" ";
}
cout<<endl;
}
int s[c+c1+1][3]; 

//addition will contain both sparex matrix non-zero elements 

int i=1,j=1,r=1;
int c2=0;
while(i<=c && j<=c1){
if(b[i][0]==d[j][0] && b[i][1]==d[j][1]){
s[r][0]=b[i][0];
s[r][1]=b[i][1];
s[r][2]=b[i][2]+d[i][2];
i++;
j++;
r++;
c2++;
}
else if(b[i][0]==d[j][0] && b[i][1]>d[j][1]){
s[r][0]=d[j][0];
s[r][1]=d[j][1];
s[r][2]=d[j][2];
j++;
r++;
c2++;
}
else if(b[i][0]==d[j][0] && b[i][1]<d[j][1]){
s[r][0]=b[i][0];
s[r][1]=b[i][1];
s[r][2]=b[i][2];
i++;
r++;
c2++;
}
else if(b[i][0]>d[j][0]){
s[r][0]=d[j][0];
s[r][1]=d[j][1];
s[r][2]=d[j][2];
j++;
r++;
c2++;
}
else if(b[i][0]<d[j][0]){
s[r][0]=b[i][0];
s[r][1]=b[i][1];
s[r][2]=b[i][2];
i++;
r++;
c2++;
}
}
if(i==c+1){
for(int z=j;z<=c1;z++){
s[r][0]=d[z][0];
s[r][1]=d[z][1];
s[r][2]=d[z][2];
c2++;
r++;
}
}
else if(j==c1+1){
for(int z=i;z<=c;z++){
s[r][0]=b[z][0];
s[r][1]=b[z][1];
s[r][2]=b[z][2];
c2++;
r++;
}
}
s[0][0]=n;
s[0][1]=m;
s[0][2]=c2;
cout<<"Addition of sparex matrix is:"<<endl;
for(int i=0;i<c2+1;i++){
for(int j=0;j<3;j++){
cout<<s[i][j]<<" ";
}
cout<<endl;
}
int t[b[0][2]+1][3];
t[0][0]=b[0][0];
t[0][1]=b[0][1];
t[0][2]=b[0][2];
int e=1;
for(int j=0;j<=b[0][1];j++){
for(int i=1;i<=b[0][2];i++){
if(b[i][1]==j){
t[e][0]=b[i][1];
t[e][1]=b[i][0];
t[e][2]=b[i][2];
e++;
}
}
}
cout<<"Simple transpose of sparex matrix"<<endl;
for(int i=0;i<c+1;i++){
for(int j=0;j<3;j++){
cout<<t[i][j]<<" ";
}
cout<<endl;
}
cout<<"fast transpose of sparx matrix"<<endl;
int e1=b[0][1];
int len=b[0][2];
int result[len+1][3];
int total[e],index[e+1];
for(int i=0;i<e1;i++){
	total[i]=0;
}
for(int i=1;i<=len;i++){
	int col=b[i][1];
	total[col]++;
}
index[0]=1;
for(int i=1;i<=e1;i++){
	index[i]=index[i-1]+total[i-1];
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
