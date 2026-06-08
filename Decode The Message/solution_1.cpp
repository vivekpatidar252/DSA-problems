#include<map>
class Solution {
public: 
        void Createmapping (unordered_map <char,char> &mapping , string key)
        {   
            char start = 'a';
            for(int i = 0 ; i <key.length() ; i++)
            {
                char ch = key[i];
            if(mapping.find(ch)==mapping.end()) //same letter se 2 bar mapping na ho jaye isliye condn hai ye
            {
              mapping[ch]=start;
              start++;
            }
            }
        }

        string insertion(unordered_map <char,char> &mapping ,  string message)
        {    string ans = "";
             
            for(int i = 0 ; i<message.length() ; i++)
            { 
              char ch = message[i];  
              char mappedcharcter = mapping[ch];
              ans.push_back(mappedcharcter) ;    
         
 
            }
            return ans;
        }

        string decodeMessage(string key, string message) {
        unordered_map <char,char> mapping; // created a map which is pointing space for space  
        char space = ' ';
        mapping[space] = space; // space ko space se map krdenge

        Createmapping(mapping ,key); //mapping ke liye call krdenge msg ko

        string ans = insertion(mapping ,  message);
        return ans;

        
    }
};