#include <stdio.h>
int n,m;
void read(int a[n][m]){
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&a[i][j]);
}
void print(int a[n][m]){
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%d ",a[i][j]);}printf("\n");}
}

int main(){
    scanf("%d %d",&n,&m);
    int a[n][m];
    read(a);
    print(a);
    return 0;
}