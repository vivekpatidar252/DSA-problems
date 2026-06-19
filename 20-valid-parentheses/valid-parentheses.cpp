class Solution {
public:
    bool isValid(string s) 
    {
         int n = s.length();
         if(n % 2 == 1)
         {
            return false; //string odd hogi toh pair honge hi nhi
         }  

         if(s.length() == 0)
         {
            return true;
         }

         int i = 0;
         stack <int> st ;

         for(i ; i < n ; i++){


            if (s[i] == '{' || s[i] == '[' || s[i] == '(' )
            {
                st.push(s[i]);
            }

            else
            {

            if(st.empty()){
                return false;
            }


             if(s[i] == ')' && st.top() == '(')
             {
               st.pop();
               continue;
             }

             if(s[i] == ']' && st.top() == '[')
             {
                st.pop();
                continue;
             }


             if(s[i] == '}' && st.top() == '{')
             {
                st.pop();
                continue;
             }

             return false;

            }
         }

         if(st.empty())
         {
            return true;
         }

     return false;
    }
};