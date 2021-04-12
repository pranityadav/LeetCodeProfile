class Solution {
public:
    string toLowerCase(string str) {
      string output(str.length(), ' ');
        
      for(int i = 0; i<str.length(); i++){
          if(str[i] >= 'A' && str[i] <= 'Z'){
              output[i] = str[i] + ('a' - 'A');
          }
          else
            output[i] = str[i];
      }  
        return output;
    }
};

/* a-> 97         A ->65         97-65 = 32
   b-> 98         B ->66         98-66 = 32
*/