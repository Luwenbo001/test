#include <bits/stdc++.h>

#define ll long long

const int N=1e6+5;

int rint() {
    int s=0,f=1; char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-') f=-1; ch=getchar();}
    while(ch>='0'&&ch<='9') {s=s*10+ch-'0'; ch=getchar();}
    return s*f;
}
void print(int x) {
    if(x>=10) print(x/10);
    putchar(x%10+'0');
}
void write(int x) {
    if(x<0) {putchar('-'); x=-x;}
    print(x);
    putchar(' ');
}

void work() {
    int i,j;
    
}
int main() {
    work();
    return 0;
}