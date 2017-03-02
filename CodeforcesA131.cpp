#include<iostream>
#include<string.h>
#include<cctype>


using namespace std;

main(){
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		for(int j=i+1; j<s.length(); j++){
			if(s[0] > 96 && s[j] < 97 ){
				s[0] = toupper(s[0]);
				s[j] = tolower(s[j]);
				cout<<s[i];
			}else{
				s[i] = s[i];
				cout<<s[i];
			}
		}
		
	}


}
