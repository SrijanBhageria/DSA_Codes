#include<iostream>
using namespace std;

void reverse(char name[], int n) {
    
    
    int s=0;
    int e=n-1;
    while(s<e) {
    swap(name[s], name[e]);
    s++;
    e--;
    }
}
    
int getLength(char name[]){
    
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;        
    }
    return count;
}

char getMaxOccCharacter(string s){
    
    int arr[26] = {0};
    //create an array of count 
    
    for(int i=0; i<26; i++){
        
        char ch=s[i];
        //lower case
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        else {
            number=ch-'A';
        }
        arr[number]++;
    }
    
    //find maximum occ character
    int maxi=-1; int ans=0;
    for(int i=0;i<26; i++){
        if(maxi < arr[i]){
            ans =i;
            maxi=arr[i];
        }
    }
    
    char finalAns = 'a'+ans;
    return finalAns;
}
int main(){
    
    /*char name[20];
    
    cout<<"Enter your name "<<endl;
    cin>>name;
   // name[2]='\0';
    
    cout<<endl;
    cout<<"Your name is "<<name<<endl;
    int len =getLength(name);
    cout<<"Length "<<len<<endl;
    reverse(name,len);
    cout<<"your name is ";
    cout<<name<<endl;
    
    
    return 0;
    */
    
    string s;
    cin>>s;
    
    cout<<getMaxOccCharacter(s)<<endl;
    
    return 0;
}

