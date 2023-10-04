#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
#define MX 1000000

int ara[MX];
pii Schedule[MX];

void fcfs(int n){
    int i,time=0,total=0;
    double avg;
    for(i=1;i<=n;i++){
        Schedule[i].first = time + 1;
        total += time;
        time += ara[i];
        Schedule[i].second = time;
    }
    avg = (double)total/(double)n;
    puts("First come first serve : \n\n");
    printf("Average waiting time : %lf\n\n",avg);
    for(i=1;i<=n;i++){
        cout<<"PID : "<<i<<" Start : "<<Schedule[i].first<<" END : "<<Schedule[i].second<<endl;
    }
}

int main(){
    int i,j,k,l,m,n;
   // freopen("test.txt","r",stdin);
    cin>>n;
    //Brust time
    for(i=1;i<=n;i++){
        cin>>ara[i];
    }
    fcfs(n);
    return 0;
}