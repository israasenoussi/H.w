#include <stdio.h> 
void swap(int a, int b){
int t;
t=a;
a=b;
b=t;}
void bubble_sort (int t[],int n){
int i,j;
for (i=0;i<n;i++){
for (j=0;j<n-i-1;i++){
if (t[j]<t[j+1])
swap(&t[j],&t[j+1]);
}}}
void selection_sort  (int t[],int n){
int i,j,max;
for (i=0;i<n;i++){
max=i;
for (j=i+1;j<n;j++){
if (t[j]>t[max])
max=j;
}}
swap(&t[i],&t[max]);
}
void instrection_sort(int t[],int n ){
int i , j , r;

for (i=0;i<n;i++){
r=t[i];
j=i-1;

while (j>=0 && t[j]<r){
t[j+1]<t[j];
j--;
}
t[j+1]=r;}}
void quick_sort(int t[],int v ,int w ){
int d,i,j,p;
if(v<w){
d=t[w];
i=v-1;
for (j=v;j<w;j++){
if (t[j]>p){
i++; swap (&t[i],&t[j]);}}
swap(&t[i+1],&t[w]);
int pi=i+1;
quick_sort(t,v,pi-1);
quick_sort(t,pi+1,w);
}
}
int main ( ){
int t []={65,0,76,62,5};
int n=sizeof(t)/sizeof(t[0]);
bubble_sort(t,n);
for (int i=0;i<n;i++){

 printf("%d",&t[i]);
} 
 selection_sort (t,n);
for (int i=0;i<n;i++){
printf ("%d",&t[i]);
}
 instrection_sort(t,n);
for (int i=0;i<n;i++){
printf ("%d",&t[i]);
}
printf ("\n");
quick_sort(t,0,n-1);
for ( int i=0;i<n;i++){
printf ("%d",&t[i]);}
printf ("\n");

return 0;
}
    