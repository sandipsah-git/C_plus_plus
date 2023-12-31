#include <iostream>
using namespace std;
string word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

string WordToNumber(int num){
    if(num < 0 ){
        return "Number is out of Range.";
    }
    if(num == 0){
        return "Zero";
    }
    string result; // initializing result variable;
    while(num > 0){
        result =  word[num % 10] + " " + result ;  // in this line every firstly comming word from last end will add after newly comming word thats why its prints like : one two three
        // result = result + " " + word[num % 10];   --> but in this line every newly comming word will add after first old word(i.e word that came in first), thats why it prints like : three two one
        num /= 10;
    }
    // for (; num > 0; num /= 10){
    //     result = word[num % 10] + " " + result;
    // }
    return result;
}
int main(){
    int number;
    cout<<endl;
    cout<<"Enter a number :-> ";
    cin>>number;
    string ans = WordToNumber(number);
    cout<<"The result is :-> "<<ans<<endl;
    cout<<endl;
    return 0;
}


/*
below code prints the word from last end, 
like to print 123 it prints like --> three two one.

#include <iostream>  
using namespace std;
string word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

string NumberToWord(int num){
    if(num < 0){
        cout<<"The result is :-> ";
        cout<< "Number out of Range.";
    }
    if(num == 0){
        cout<<"The result is :-> ";
        cout<< "zero";
    }
    if(num > 0){
        cout<<"The result is :-> ";
    }
    while (num > 0){
        
        cout<<word[num%10]<<" ";
        num /= 10;
    }
}
int main(){
    int number;
    cout<<endl;
    cout<<"Enter the number :-> ";
    cin>>number;
    NumberToWord(number);
    return 0;
}
*/