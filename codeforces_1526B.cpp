#include<stdio.h>
#include<algorithm>

using namespace std;

int t, x;

int main(){
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    scanf("%d", &x);
    while(x % 11 != 0 && x >= 111){
      x -= 111;
    }
    if(x % 11 == 0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
}
