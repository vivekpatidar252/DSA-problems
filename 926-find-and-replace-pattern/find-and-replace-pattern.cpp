class Solution {
public:
     
     void NormaliseString(string&s)
     {
      unordered_map<char,char> mapping;
      //pehle humne mapping krdi words ke string ki
      char start = 'a'; 
      for(int i = 0; i<s.length();i++)
      {
       
       char ch = s[i];
       if(mapping.find(ch)==mapping.end())
       {
        mapping[ch]=start;
        start++;
       }
      }  

      //ab us mapping ko use kr lenge 

      for(int i=0 ; i<s.length();i++)
      {
        char ch = s[i];
        char mappedCharcter = mapping[ch];
        s[i] =mappedCharcter; //pattern me change krdenge normalisation ke hisab se
       
     }
     }


    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> ans;
        NormaliseString(pattern);

        for(int i = 0 ; i<words.size(); i++)
        {
        string currentWord=words[i];
        NormaliseString(currentWord);
        //ab words ke string and patter ko compare kr lenge

        if(currentWord==pattern)
        {
          ans.push_back(words[i]);    
        }


        }        

    
    return ans;
    }
        
    
};