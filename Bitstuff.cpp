#include<iostream>
using namespace std;
void bitStuffing(int size,int array[]){
    int i,j=0;
    int count=0;

    int stuffedarray[50];
    for(int i=0;i<size;i++){
        if(array[i]==1){
            count++;
        }
        if(array[i]==0){
            count=0;
        }
        stuffedarray[j]=array[i];j++;
        if(count==5 ){
            stuffedarray[j]=0;
            j++;
            count=0;
        }
    }
    for(int k=0;k<j;k++){
        cout<<stuffedarray[k];
        
    }
    
}
int main(){
    int array[15]={1,0,1,1,1,1,1,0,0,1,1,1,1,1,0};
    bitStuffing(15,array);
}