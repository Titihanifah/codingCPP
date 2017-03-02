#include<iostream>
#include<string.h>

using namespace std;


    string stack;
    int top=0;    

bool isEmpty(){
    if(top==0)
    return true;
    else return false;      
}

void push(char x){
   stack[top]=x;
    top++;    
}

int pop(){
    if(!isEmpty()){
    top--;
    char x=stack[top];  
    return x;      
    } 
}

int main(){
    string a;
    int po=0,pus=0,o;
    cout<<"---aplikasi sederhana menggunakan prinsip stack---"<<endl;
	cout <<"inputkan kurung kurawal secara random : ";
    
    cin>>a;
    for(int i=0; i<a.length(); i++){
        if(a[i]=='{'){
            push('{');
            pus++;     
        }else if(a[i]=='}'){
            pop();
            po++;            
            }
        else          
           o=1;
        
    }
    if(pus==po && top==0 && o!=1) cout<<"Valid"<<endl;
    else cout<<"Tidak Valid"  <<endl;
    system("pause");
    return 0;
}
