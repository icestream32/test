#include<iostream>
using namespace std;





void biger_num(int num_frist,int num_second);


int main(){
    cout<<"HelloWorld!"<<endl;
    return 0;
}





void biger_num(int num_frist,int num_second){
    int biger_num = (num_frist > num_second) ? num_second : num_frist;
    cout<<biger_num<<endl;
}