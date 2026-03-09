#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[] , int n ){
    n = strlen(word);
    for(int i = 0; i < n ; i++){
        char ch = word[i];
        if(ch>= 'A' && ch <= 'Z'){   // upper case then do nothing
            continue;
        }else{                    // lower case 
            word[i] = ch - 'a' + 'A';
        }
    }

}

int main(){

    // char work[] = {'c', 'o', 'd', 'e', '\0'};
    // //or
    // // char work[50] = {'c', 'o', 'd', 'e', '\0'};
    // //or
    // // char work[4] = "code";
    // //or
    // // char work[] = "code";

    // cout << work <<endl;
    // cout << strlen(work);

    // ....................................................
    // input 
    // char word[30];
    // cin>> word;  // it ignores white spaces 

    // cout<< "your word was : "<< word <<endl;
    // cout<< "length : "<< strlen(word);

    // char sentence[30];

    // cin.getline(sentence,30);

    // cout << "your word was : " << sentence << endl;
    // cout << "length : " << strlen(sentence)<< endl;
    
    //........................................................

    // convert to upper case 

    char word[] = "ViKash";
    toUpper(word, strlen(word));
    cout<<word;

    return 0;
}